#include "Concentration.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

int current_fighter = 0;

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
	List_of_Characters[index_of_character]->set_concentration(check);
	if (List_of_Characters[current_fighter] == List_of_Characters[index_of_character])
		conc_text->Visible = List_of_Characters[index_of_character]->get_concentration();
}

System::Void TurnOrder::TurnOrder::next_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (List_of_Characters->Count == 0)
	{
		MessageBox::Show("Warning!", "Список пуст!");
		return;
	}
	current_fighter = (current_fighter == List_of_Characters->Count - 1) ? 0 : current_fighter + 1;
	current_label->Text = List_of_Characters[current_fighter]->get_name();
	conc_text->Visible = List_of_Characters[current_fighter]->get_concentration();
}

System::Void TurnOrder::TurnOrder::TurnOrder_Load(System::Object^ sender, System::EventArgs^ e)
{
	String^ a_name = "Ell";
	player^ b = gcnew player(a_name, 30, 40, 12, "Hero");
	player^ a = gcnew player("Elle", 10, 70, 20, "Hero");

	List_of_Characters->Add(b);
	List_of_Characters->Add(a);
	sorting();

	name_comboBox->Items->Add(List_of_Characters[0]->get_name());
	name_comboBox->Items->Add(List_of_Characters[1]->get_name());

	init_change_comboBox->Items->Add(List_of_Characters[0]->get_name());
	init_change_comboBox->Items->Add(List_of_Characters[1]->get_name());

	damage_comboBox->Items->Add(List_of_Characters[0]->get_name());
	damage_comboBox->Items->Add(List_of_Characters[1]->get_name());

	current_label->Text = List_of_Characters[0]->get_name();
}

System::Void TurnOrder::TurnOrder::add_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (add_name_text-> Text == "" || add_health_text->Text == "" || add_max_health_text->Text == "" || add_init_text->Text == "") {
		MessageBox::Show("Введите данные!", "Warning!");
		return;
	}

	String^ actor = (actor_check->Checked) ? ("Hero") : ("Villain");
	player^ Adding = gcnew player(
		add_name_text->Text,
		Convert::ToInt32(add_health_text->Text),
		Convert::ToInt32(add_max_health_text->Text),
		Convert::ToInt32(add_init_text->Text),
		actor
	);
	
	for (int i = 0; i < List_of_Characters->Count; i++)
		if (List_of_Characters[i] == Adding) {
			MessageBox::Show("Такой герой уже есть!", "Warning!");
			return;
		}

	List_of_Characters->Add(Adding);
	current_fighter = (List_of_Characters[current_fighter] < Adding) ? current_fighter + 1 : current_fighter;
	
	sorting();

	name_comboBox->Items->Add(Adding->get_name());
	init_change_comboBox->Items->Add(Adding->get_name());
	damage_comboBox->Items->Add(Adding->get_name());
	relocate(List_of_Characters->Count, 27);
}

System::Void TurnOrder::TurnOrder::drop_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (text_check(name_comboBox))
		return;
	relocate(List_of_Characters->Count, -27);
	remove(index_of_character, name_comboBox, damage_comboBox, init_change_comboBox);
	display();
}

System::Void TurnOrder::TurnOrder::init_change_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (text_check(init_change_comboBox))
		return;

	List_of_Characters[index_of_character]->set_initiative(Convert::ToInt32(init_change_text->Text));
	sorting();
}

System::Void TurnOrder::TurnOrder::damage_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (text_check(damage_comboBox))
		return;

	if (List_of_Characters[index_of_character]->damage(Convert::ToInt32(damage_text->Text))) {
		remove(index_of_character, damage_comboBox, init_change_comboBox, name_comboBox);
		relocate(List_of_Characters->Count, -27);
	}
	else if (Convert::ToInt32(damage_text->Text) > 0 && List_of_Characters[index_of_character]->get_concentration())
	{
		int damage_check = (Convert::ToInt32(damage_text->Text) > 20) ? Convert::ToInt32(damage_text->Text) / 2 : 10;
		Concentration^ Conc_save = gcnew Concentration(this, damage_check, List_of_Characters[index_of_character]->get_name());
		Conc_save->Show();
	}
	display();
}

System::Void TurnOrder::TurnOrder::conc_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	List_of_Characters[current_fighter]->set_concentration(!List_of_Characters[current_fighter]->get_concentration());
	conc_text->Visible = List_of_Characters[current_fighter]->get_concentration();
}
