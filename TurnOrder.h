#include "player.h"
namespace TurnOrder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TurnOrder
	/// </summary>
	public ref class TurnOrder : public System::Windows::Forms::Form
	{
	public:
		TurnOrder(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TurnOrder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ list_groupBox;
	protected:

	public: System::Windows::Forms::Label^ _label1;
	private:
	protected:





	private: System::Windows::Forms::Button^ next_button;
	public: System::Windows::Forms::TextBox^ name_text;
	public: System::Windows::Forms::TextBox^ init_text;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ current_label;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ add_groupBox;

	private: System::Windows::Forms::TextBox^ add_health_text;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ add_init_text;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ add_name_text;
	private: System::Windows::Forms::Button^ add_button;
	private: System::Windows::Forms::TextBox^ add_max_health_text;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::CheckBox^ actor_check;
	private: System::Windows::Forms::ComboBox^ name_comboBox;
	private: System::Windows::Forms::GroupBox^ drop_groupBox;


	private: System::Windows::Forms::Button^ drop_button;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ init_change_text;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ init_change_button;

	private: System::Windows::Forms::ComboBox^ init_change_comboBox;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::TextBox^ damage_text;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ damage_button;

	private: System::Windows::Forms::ComboBox^ damage_comboBox;
	private: System::Windows::Forms::Label^ label13;
	public: System::Windows::Forms::Label^ _label2;
	private:

	private:
	private: System::Windows::Forms::Label^ label14;
	public:
	public: System::Windows::Forms::TextBox^ health_text;
	private:



	public:
	private:




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->list_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->_label2 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->health_text = (gcnew System::Windows::Forms::TextBox());
			this->drop_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->drop_button = (gcnew System::Windows::Forms::Button());
			this->name_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->add_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->actor_check = (gcnew System::Windows::Forms::CheckBox());
			this->add_max_health_text = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->add_health_text = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->add_init_text = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->add_name_text = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->init_text = (gcnew System::Windows::Forms::TextBox());
			this->name_text = (gcnew System::Windows::Forms::TextBox());
			this->_label1 = (gcnew System::Windows::Forms::Label());
			this->next_button = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->current_label = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->init_change_text = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->init_change_button = (gcnew System::Windows::Forms::Button());
			this->init_change_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->damage_text = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->damage_button = (gcnew System::Windows::Forms::Button());
			this->damage_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->list_groupBox->SuspendLayout();
			this->drop_groupBox->SuspendLayout();
			this->add_groupBox->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// list_groupBox
			// 
			this->list_groupBox->Controls->Add(this->_label2);
			this->list_groupBox->Controls->Add(this->label14);
			this->list_groupBox->Controls->Add(this->health_text);
			this->list_groupBox->Controls->Add(this->drop_groupBox);
			this->list_groupBox->Controls->Add(this->label3);
			this->list_groupBox->Controls->Add(this->add_groupBox);
			this->list_groupBox->Controls->Add(this->label1);
			this->list_groupBox->Controls->Add(this->init_text);
			this->list_groupBox->Controls->Add(this->name_text);
			this->list_groupBox->Controls->Add(this->_label1);
			this->list_groupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->list_groupBox->Location = System::Drawing::Point(933, 12);
			this->list_groupBox->Name = L"list_groupBox";
			this->list_groupBox->Size = System::Drawing::Size(639, 588);
			this->list_groupBox->TabIndex = 0;
			this->list_groupBox->TabStop = false;
			this->list_groupBox->Text = L"Список";
			// 
			// _label2
			// 
			this->_label2->AutoSize = true;
			this->_label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->_label2->Location = System::Drawing::Point(384, 109);
			this->_label2->Name = L"_label2";
			this->_label2->Size = System::Drawing::Size(20, 25);
			this->_label2->TabIndex = 16;
			this->_label2->Text = L"-";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label14->Location = System::Drawing::Point(476, 27);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 33);
			this->label14->TabIndex = 15;
			this->label14->Text = L"Хиты";
			// 
			// health_text
			// 
			this->health_text->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->health_text->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->health_text->Location = System::Drawing::Point(447, 69);
			this->health_text->Multiline = true;
			this->health_text->Name = L"health_text";
			this->health_text->ReadOnly = true;
			this->health_text->Size = System::Drawing::Size(149, 118);
			this->health_text->TabIndex = 14;
			this->health_text->TabStop = false;
			this->health_text->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// drop_groupBox
			// 
			this->drop_groupBox->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->drop_groupBox->Controls->Add(this->drop_button);
			this->drop_groupBox->Controls->Add(this->name_comboBox);
			this->drop_groupBox->Controls->Add(this->label12);
			this->drop_groupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->drop_groupBox->Location = System::Drawing::Point(312, 299);
			this->drop_groupBox->Name = L"drop_groupBox";
			this->drop_groupBox->Size = System::Drawing::Size(191, 146);
			this->drop_groupBox->TabIndex = 13;
			this->drop_groupBox->TabStop = false;
			this->drop_groupBox->Text = L"Удалить бойца";
			// 
			// drop_button
			// 
			this->drop_button->Location = System::Drawing::Point(6, 83);
			this->drop_button->Name = L"drop_button";
			this->drop_button->Size = System::Drawing::Size(180, 40);
			this->drop_button->TabIndex = 6;
			this->drop_button->Text = L"Удалить";
			this->drop_button->UseVisualStyleBackColor = true;
			this->drop_button->Click += gcnew System::EventHandler(this, &TurnOrder::drop_button_Click);
			// 
			// name_comboBox
			// 
			this->name_comboBox->FormattingEnabled = true;
			this->name_comboBox->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->name_comboBox->Location = System::Drawing::Point(61, 29);
			this->name_comboBox->Name = L"name_comboBox";
			this->name_comboBox->Size = System::Drawing::Size(121, 33);
			this->name_comboBox->Sorted = true;
			this->name_comboBox->TabIndex = 6;
			this->name_comboBox->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(6, 33);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 24);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Имя";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(238, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 33);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Инициатива";
			// 
			// add_groupBox
			// 
			this->add_groupBox->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->add_groupBox->Controls->Add(this->actor_check);
			this->add_groupBox->Controls->Add(this->add_max_health_text);
			this->add_groupBox->Controls->Add(this->label8);
			this->add_groupBox->Controls->Add(this->add_button);
			this->add_groupBox->Controls->Add(this->add_health_text);
			this->add_groupBox->Controls->Add(this->label7);
			this->add_groupBox->Controls->Add(this->add_init_text);
			this->add_groupBox->Controls->Add(this->label6);
			this->add_groupBox->Controls->Add(this->add_name_text);
			this->add_groupBox->Controls->Add(this->label5);
			this->add_groupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->add_groupBox->Location = System::Drawing::Point(6, 299);
			this->add_groupBox->Name = L"add_groupBox";
			this->add_groupBox->Size = System::Drawing::Size(300, 280);
			this->add_groupBox->TabIndex = 5;
			this->add_groupBox->TabStop = false;
			this->add_groupBox->Text = L"Добавить бойца";
			// 
			// actor_check
			// 
			this->actor_check->AutoSize = true;
			this->actor_check->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->actor_check->Location = System::Drawing::Point(94, 176);
			this->actor_check->Name = L"actor_check";
			this->actor_check->Size = System::Drawing::Size(100, 28);
			this->actor_check->TabIndex = 12;
			this->actor_check->Text = L"Герой\?";
			this->actor_check->UseVisualStyleBackColor = true;
			// 
			// add_max_health_text
			// 
			this->add_max_health_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->add_max_health_text->Location = System::Drawing::Point(141, 141);
			this->add_max_health_text->Name = L"add_max_health_text";
			this->add_max_health_text->Size = System::Drawing::Size(134, 29);
			this->add_max_health_text->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(6, 144);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 24);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Макс Хиты";
			// 
			// add_button
			// 
			this->add_button->Location = System::Drawing::Point(60, 220);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(180, 40);
			this->add_button->TabIndex = 6;
			this->add_button->Text = L"Добавить";
			this->add_button->UseVisualStyleBackColor = true;
			this->add_button->Click += gcnew System::EventHandler(this, &TurnOrder::add_button_Click);
			// 
			// add_health_text
			// 
			this->add_health_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_health_text->Location = System::Drawing::Point(141, 105);
			this->add_health_text->Name = L"add_health_text";
			this->add_health_text->Size = System::Drawing::Size(134, 29);
			this->add_health_text->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(6, 108);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 24);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Хиты";
			// 
			// add_init_text
			// 
			this->add_init_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_init_text->Location = System::Drawing::Point(141, 68);
			this->add_init_text->Name = L"add_init_text";
			this->add_init_text->Size = System::Drawing::Size(134, 29);
			this->add_init_text->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(6, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 24);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Инициатива";
			// 
			// add_name_text
			// 
			this->add_name_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->add_name_text->Location = System::Drawing::Point(141, 30);
			this->add_name_text->Name = L"add_name_text";
			this->add_name_text->Size = System::Drawing::Size(134, 29);
			this->add_name_text->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 33);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 24);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Имя";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(45, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 33);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Имя";
			// 
			// init_text
			// 
			this->init_text->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->init_text->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->init_text->Location = System::Drawing::Point(281, 69);
			this->init_text->Multiline = true;
			this->init_text->Name = L"init_text";
			this->init_text->ReadOnly = true;
			this->init_text->Size = System::Drawing::Size(65, 118);
			this->init_text->TabIndex = 3;
			this->init_text->TabStop = false;
			this->init_text->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// name_text
			// 
			this->name_text->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->name_text->Location = System::Drawing::Point(6, 69);
			this->name_text->Multiline = true;
			this->name_text->Name = L"name_text";
			this->name_text->ReadOnly = true;
			this->name_text->Size = System::Drawing::Size(188, 118);
			this->name_text->TabIndex = 2;
			this->name_text->TabStop = false;
			this->name_text->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// _label1
			// 
			this->_label1->AutoSize = true;
			this->_label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->_label1->Location = System::Drawing::Point(221, 109);
			this->_label1->Name = L"_label1";
			this->_label1->Size = System::Drawing::Size(20, 25);
			this->_label1->TabIndex = 1;
			this->_label1->Text = L"-";
			// 
			// next_button
			// 
			this->next_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->next_button->Location = System::Drawing::Point(518, 359);
			this->next_button->Name = L"next_button";
			this->next_button->Size = System::Drawing::Size(176, 38);
			this->next_button->TabIndex = 1;
			this->next_button->Text = L"Далее!";
			this->next_button->UseVisualStyleBackColor = true;
			this->next_button->Click += gcnew System::EventHandler(this, &TurnOrder::next_button_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label4->Font = (gcnew System::Drawing::Font(L"MV Boli", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(480, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(238, 34);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Текущий Воин:";
			// 
			// current_label
			// 
			this->current_label->AutoSize = true;
			this->current_label->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->current_label->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->current_label->Location = System::Drawing::Point(526, 245);
			this->current_label->Name = L"current_label";
			this->current_label->Size = System::Drawing::Size(157, 57);
			this->current_label->TabIndex = 3;
			this->current_label->Text = L"Fighter";
			this->current_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox4->Controls->Add(this->init_change_text);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->init_change_button);
			this->groupBox4->Controls->Add(this->init_change_comboBox);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(41, 51);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(294, 169);
			this->groupBox4->TabIndex = 14;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Изменить инициативу";
			// 
			// init_change_text
			// 
			this->init_change_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->init_change_text->Location = System::Drawing::Point(141, 68);
			this->init_change_text->Name = L"init_change_text";
			this->init_change_text->Size = System::Drawing::Size(134, 29);
			this->init_change_text->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(6, 71);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(129, 24);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Инициатива";
			// 
			// init_change_button
			// 
			this->init_change_button->Location = System::Drawing::Point(52, 112);
			this->init_change_button->Name = L"init_change_button";
			this->init_change_button->Size = System::Drawing::Size(180, 40);
			this->init_change_button->TabIndex = 6;
			this->init_change_button->Text = L"Изменить";
			this->init_change_button->UseVisualStyleBackColor = true;
			this->init_change_button->Click += gcnew System::EventHandler(this, &TurnOrder::init_change_button_Click);
			// 
			// init_change_comboBox
			// 
			this->init_change_comboBox->FormattingEnabled = true;
			this->init_change_comboBox->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->init_change_comboBox->Location = System::Drawing::Point(154, 30);
			this->init_change_comboBox->Name = L"init_change_comboBox";
			this->init_change_comboBox->Size = System::Drawing::Size(121, 33);
			this->init_change_comboBox->Sorted = true;
			this->init_change_comboBox->TabIndex = 6;
			this->init_change_comboBox->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(6, 33);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 24);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Имя";
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox5->Controls->Add(this->damage_text);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->damage_button);
			this->groupBox5->Controls->Add(this->damage_comboBox);
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->groupBox5->Location = System::Drawing::Point(41, 243);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(294, 169);
			this->groupBox5->TabIndex = 15;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Нанести урон";
			// 
			// damage_text
			// 
			this->damage_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->damage_text->Location = System::Drawing::Point(141, 68);
			this->damage_text->Name = L"damage_text";
			this->damage_text->Size = System::Drawing::Size(134, 29);
			this->damage_text->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(6, 71);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 24);
			this->label11->TabIndex = 7;
			this->label11->Text = L"Урон";
			// 
			// damage_button
			// 
			this->damage_button->Location = System::Drawing::Point(52, 112);
			this->damage_button->Name = L"damage_button";
			this->damage_button->Size = System::Drawing::Size(180, 40);
			this->damage_button->TabIndex = 6;
			this->damage_button->Text = L"Ударить!";
			this->damage_button->UseVisualStyleBackColor = true;
			this->damage_button->Click += gcnew System::EventHandler(this, &TurnOrder::damage_button_Click);
			// 
			// damage_comboBox
			// 
			this->damage_comboBox->FormattingEnabled = true;
			this->damage_comboBox->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->damage_comboBox->Location = System::Drawing::Point(154, 30);
			this->damage_comboBox->Name = L"damage_comboBox";
			this->damage_comboBox->Size = System::Drawing::Size(121, 33);
			this->damage_comboBox->Sorted = true;
			this->damage_comboBox->TabIndex = 6;
			this->damage_comboBox->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(6, 33);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(49, 24);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Имя";
			// 
			// TurnOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1584, 861);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->current_label);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->next_button);
			this->Controls->Add(this->list_groupBox);
			this->Name = L"TurnOrder";
			this->Text = L"TurnOrder";
			this->Load += gcnew System::EventHandler(this, &TurnOrder::TurnOrder_Load);
			this->list_groupBox->ResumeLayout(false);
			this->list_groupBox->PerformLayout();
			this->drop_groupBox->ResumeLayout(false);
			this->drop_groupBox->PerformLayout();
			this->add_groupBox->ResumeLayout(false);
			this->add_groupBox->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void next_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void TurnOrder_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e);
	
	const void display(vector<player>& List)
	{
		name_text->Text = "";
		init_text->Text = "";
		health_text->Text = "";
		for (int i = 0; i < List.size(); i++)
		{
			if (i)
			{
				health_text->Text += "\r\n";
				name_text->Text += "\r\n";
				init_text->Text += "\r\n";
			}
			health_text->Text += Convert::ToString(List[i].get_health()) + " / " + Convert::ToString(List[i].get_max_health());
			name_text->Text += marshal_as<String^>(List[i].get_name());
			init_text->Text += Convert::ToString(List[i].get_initiative());
		}
	}
	void sorting(vector<player>& List)
	{
		sort(List.rbegin(), List.rend());
		display(List);
	}
	void remove(vector<player>& List, vector<player>::iterator& List_iter, ComboBox^ one, ComboBox^ another, ComboBox^ some)
	{
		List.erase(List_iter);
		another->Items->Remove(one->Text);
		some->Items->Remove(one->Text);
		one->Items->Remove(one->Text);
	}
	void relocate(int List_size, int move)
	{
		if (List_size > 4)
		{
			int add_move = (List_size % 2 == 1) ? 1 : 0;
			move = (move > 0) ? move + add_move : move - add_move;
			name_text->Height += move;
			init_text->Height += move;
			health_text->Height += move;
			_label1->Location = Point(_label1->Location.X, _label1->Location.Y + move / 2);
			_label2->Location = Point(_label2->Location.X, _label2->Location.Y + move / 2);
			if (List_size > 7) {
				list_groupBox->Height += move;
				add_groupBox->Location = Point(add_groupBox->Location.X, add_groupBox->Location.Y + move);
				drop_groupBox->Location = Point(drop_groupBox->Location.X, drop_groupBox->Location.Y + move);
			}
		}
	}
	bool empty_check(vector<player>& List, ComboBox^ name)
	{
		if (List.empty())
		{
			MessageBox::Show("Список пуст!", "Warning!");
			return true;
		}
		if (name->Text == "")
		{
			MessageBox::Show("Герой не выбран!", "Warning!");
			return true;
		}
		return false;
	}
	bool text_check(vector<player>& List, vector<player>::iterator& List_iter, ComboBox^ name)
	{
		if (List.empty())
		{
			MessageBox::Show("Список пуст!", "Warning!");
			return true;
		}
		if (name->Text == "")
		{
			MessageBox::Show("Герой не выбран!", "Warning!");
			return true;
		}

		List_iter = List.begin();

		for (; marshal_as<string>(name->Text) != List_iter->get_name() && List_iter != List.end(); List_iter++)
			;

		if (List_iter == List.end()) {
			MessageBox::Show("Э-т отсутствует!", "Warning!");
			return true;
		}
		return false;
	}
private: System::Void drop_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void init_change_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void damage_button_Click(System::Object^ sender, System::EventArgs^ e);

};
}
