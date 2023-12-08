#pragma once
#include "TurnOrder.h"



namespace TurnOrder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Concentration
	/// </summary>
	public ref class Concentration : public System::Windows::Forms::Form
	{
	public:
		Concentration(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		Concentration(TurnOrder^ _parent, int _alpha, String^ _name)
		{
			InitializeComponent();
			parentForm = _parent;
			dc_text->Text = "" + _alpha;
			hero_name_text->Text = _name;
		}
	private:
		TurnOrder^ parentForm;

	private: System::Windows::Forms::Button^ yes_button;
	private: System::Windows::Forms::Label^ hero_name_text;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ dc_text;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

	private: System::Windows::Forms::Label^ label1;
		   
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Concentration()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ no_button;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->no_button = (gcnew System::Windows::Forms::Button());
			this->yes_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->hero_name_text = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dc_text = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// no_button
			// 
			this->no_button->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->no_button->Location = System::Drawing::Point(233, 3);
			this->no_button->Name = L"no_button";
			this->no_button->Size = System::Drawing::Size(224, 51);
			this->no_button->TabIndex = 0;
			this->no_button->Text = L"NO";
			this->no_button->UseVisualStyleBackColor = true;
			this->no_button->Click += gcnew System::EventHandler(this, &Concentration::no_button_Click);
			// 
			// yes_button
			// 
			this->yes_button->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->yes_button->Location = System::Drawing::Point(3, 3);
			this->yes_button->Name = L"yes_button";
			this->yes_button->Size = System::Drawing::Size(224, 51);
			this->yes_button->TabIndex = 1;
			this->yes_button->Text = L"YES";
			this->yes_button->UseVisualStyleBackColor = true;
			this->yes_button->Click += gcnew System::EventHandler(this, &Concentration::yes_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(116, 207);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"„ек концентрации пройден\?";
			// 
			// hero_name_text
			// 
			this->hero_name_text->AutoSize = true;
			this->hero_name_text->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->hero_name_text->Location = System::Drawing::Point(196, 171);
			this->hero_name_text->Name = L"hero_name_text";
			this->hero_name_text->Size = System::Drawing::Size(79, 36);
			this->hero_name_text->TabIndex = 3;
			this->hero_name_text->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(144, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"—ложность проверки: ";
			// 
			// dc_text
			// 
			this->dc_text->AutoSize = true;
			this->dc_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dc_text->Location = System::Drawing::Point(219, 76);
			this->dc_text->Name = L"dc_text";
			this->dc_text->Size = System::Drawing::Size(93, 25);
			this->dc_text->TabIndex = 5;
			this->dc_text->Text = L"Number";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->yes_button, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->no_button, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 389);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(460, 60);
			this->tableLayoutPanel1->TabIndex = 6;
			// 
			// Concentration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->dc_text);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->hero_name_text);
			this->Controls->Add(this->label1);
			this->Name = L"Concentration";
			this->Text = L"Concentration";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void no_button_Click(System::Object^ sender, System::EventArgs^ e) {
		parentForm->concentration_check(false);
		this->Close();
	}
	private: System::Void yes_button_Click(System::Object^ sender, System::EventArgs^ e) {
		parentForm->concentration_check(true);
		this->Close();
	}
};
}
