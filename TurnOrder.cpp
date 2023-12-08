#include "Concentration.h"

using namespace System;
using namespace System::Windows::Forms;

vector<player> List;
vector<player> ::iterator List_iter;
int x = 0;

[STAThread]
void main(cli::array<String^>^ args)
{
	setlocale(LC_ALL, "rus");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TurnOrder::TurnOrder form;
	Application::Run(% form);
}

void TurnOrder::TurnOrder::concentration_check(bool check)
{
	List_iter->set_concentration(check);
	if (List[x] == *List_iter)
		conc_text->Visible = List_iter->get_concentration();
}

System::Void TurnOrder::TurnOrder::next_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (List.empty())
	{
		MessageBox::Show("Warning!", "Список пуст!");
		return;
	}
	x = (x == List.size() - 1) ? 0 : x + 1;
	current_label->Text = marshal_as<String^>(List[x].get_name());
	conc_text->Visible = (List[x].get_concentration()) ? true : false;
}

System::Void TurnOrder::TurnOrder::TurnOrder_Load(System::Object^ sender, System::EventArgs^ e)
{
	player b("Ell", 30, 40, 12, "Hero");
	player a("Elle", 10, 70, 20, "Hero");

	List.push_back(b);
	List.push_back(a);
	sorting(List);

	name_comboBox->Items->Add(marshal_as<String^>(List[0].get_name()));
	name_comboBox->Items->Add(marshal_as<String^>(List[1].get_name()));

	init_change_comboBox->Items->Add(marshal_as<String^>(List[0].get_name()));
	init_change_comboBox->Items->Add(marshal_as<String^>(List[1].get_name()));

	damage_comboBox->Items->Add(marshal_as<String^>(List[0].get_name()));
	damage_comboBox->Items->Add(marshal_as<String^>(List[1].get_name()));

	current_label->Text = marshal_as<String^>(List[0].get_name());
}

System::Void TurnOrder::TurnOrder::add_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (add_name_text-> Text == "" || add_health_text->Text == "" || add_max_health_text->Text == "" || add_init_text->Text == "") {
		MessageBox::Show("Введите данные!", "Warning!");
		return;
	}

	string actor = (actor_check->Checked) ? ("Hero") : ("Villain");
	player Adding(
		marshal_as<string>(add_name_text->Text),
		Convert::ToInt32(add_health_text->Text),
		Convert::ToInt32(add_max_health_text->Text),
		Convert::ToInt32(add_init_text->Text),
		actor
	);
	
	for (int i = 0; i < List.size(); i++)
		if (List[i] == Adding) {
			MessageBox::Show("Такой герой уже есть!", "Warning!");
			return;
		}

	List.push_back(Adding);
	x = (List[x] < Adding) ? x + 1 : x;
	sorting(List);

	name_comboBox->Items->Add(marshal_as<String^>(Adding.get_name()));
	init_change_comboBox->Items->Add(marshal_as<String^>(Adding.get_name()));
	damage_comboBox->Items->Add(marshal_as<String^>(Adding.get_name()));
	relocate(List.size(), 27);
}

System::Void TurnOrder::TurnOrder::drop_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (text_check(List, List_iter, name_comboBox))
		return;
	relocate(List.size(), -27);
	remove(List, List_iter, name_comboBox, damage_comboBox, init_change_comboBox);
	display(List);
}

System::Void TurnOrder::TurnOrder::init_change_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (text_check(List, List_iter, init_change_comboBox))
		return;

	List_iter->set_initiative(Convert::ToInt32(init_change_text->Text));

	sorting(List);
}

System::Void TurnOrder::TurnOrder::damage_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (text_check(List, List_iter, damage_comboBox))
		return;

	if (List_iter->damage(Convert::ToInt32(damage_text->Text))) {
		remove(List, List_iter, damage_comboBox, init_change_comboBox, name_comboBox);
		relocate(List.size(), -27);
	}
	else if (Convert::ToInt32(damage_text->Text) > 0 && List_iter->get_concentration())
	{
		int damage_check = (Convert::ToInt32(damage_text->Text) > 20) ? Convert::ToInt32(damage_text->Text) / 2 : 10;
		Concentration^ Conc_save = gcnew Concentration(this, damage_check, marshal_as<String^>(List_iter->get_name()));
		Conc_save->Show();
	}
	else 
	{
		conc_text->Visible = List_iter->get_concentration();
	}
	display(List);
}

System::Void TurnOrder::TurnOrder::conc_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	List[x].set_concentration(!List[x].get_concentration());
	conc_text->Visible = List[x].get_concentration();
}
