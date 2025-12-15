#pragma once

namespace EngTestExam2025 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			ComboQ3->SelectedIndex = 0;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Start;
	protected:
	private: System::Windows::Forms::Button^ Algorytm;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Label^ EngTextLabel;
	private: System::Windows::Forms::PictureBox^ Q1;

	private: System::Windows::Forms::Label^ Question1;

	private: System::Windows::Forms::Label^ Que1;
	private: System::Windows::Forms::RadioButton^ Op1Q1;
	private: System::Windows::Forms::RadioButton^ Op2Q1;
	private: System::Windows::Forms::RadioButton^ Op3Q1;


	private: System::Windows::Forms::Button^ NextQ1;
	private: System::Windows::Forms::PictureBox^ PicQ1;
	private: System::Windows::Forms::PictureBox^ Q2;
	private: System::Windows::Forms::PictureBox^ PicQ2;

	private: System::Windows::Forms::Label^ Question2;
	private: System::Windows::Forms::RadioButton^ Op1Q2;
	private: System::Windows::Forms::RadioButton^ Op3Q2;
	private: System::Windows::Forms::RadioButton^ Op4Q2;




	private: System::Windows::Forms::RadioButton^ Op2Q2;
	private: System::Windows::Forms::Button^ NextQ2;
	private: System::Windows::Forms::PictureBox^ Q3;
	private: System::Windows::Forms::Label^ Question3;
	private: System::Windows::Forms::Label^ Que31;
	private: System::Windows::Forms::Label^ Que32;





	private: System::Windows::Forms::Label^ Que33;

	private: System::Windows::Forms::Button^ NextQ3;
	private: System::Windows::Forms::ComboBox^ ComboQ3;
	private: System::Windows::Forms::Label^ Que34;
	private: System::Windows::Forms::PictureBox^ Q4;
	private: System::Windows::Forms::Button^ NextQ4;
	private: System::Windows::Forms::Label^ Question4;

	private: System::Windows::Forms::PictureBox^ PicQ4;

	private: System::Windows::Forms::TextBox^ TextBoxQ4;
	private: System::Windows::Forms::PictureBox^ Q5;

	private: System::Windows::Forms::Button^ NextQ5;
	private: System::Windows::Forms::Label^ Question5;
	private: System::Windows::Forms::PictureBox^ PicQ5;
	private: System::Windows::Forms::Label^ Que51;







	private: System::Windows::Forms::Label^ Que52;
	private: System::Windows::Forms::CheckBox^ Op1Q5;
	private: System::Windows::Forms::CheckBox^ Op2Q5;
	private: System::Windows::Forms::CheckBox^ Op3Q5;
	private: System::Windows::Forms::CheckBox^ Op4Q5;
	private: System::Windows::Forms::PictureBox^ Q6;
	private: System::Windows::Forms::Label^ Question6;

	private: System::Windows::Forms::PictureBox^ PicQ6;
	private: System::Windows::Forms::RadioButton^ Op1Q6;
	private: System::Windows::Forms::RadioButton^ Op3Q6;



	private: System::Windows::Forms::RadioButton^ Op2Q6;
	private: System::Windows::Forms::Button^ NextQ6;
	private: System::Windows::Forms::PictureBox^ Q7;
	private: System::Windows::Forms::Button^ NextQ7;
	private: System::Windows::Forms::Label^ Question7;

	private: System::Windows::Forms::PictureBox^ PicQ7;

	private: System::Windows::Forms::Label^ Que71;
	private: System::Windows::Forms::CheckBox^ Op1Q7;
	private: System::Windows::Forms::CheckBox^ Op2Q7;
	private: System::Windows::Forms::CheckBox^ Op3Q7;



	private: System::Windows::Forms::Label^ Que72;
	private: System::Windows::Forms::CheckBox^ Op4Q7;
	private: System::Windows::Forms::CheckBox^ Op5Q7;
	private: System::Windows::Forms::CheckBox^ Op6Q7;




	private: System::Windows::Forms::Label^ Que73;
	private: System::Windows::Forms::CheckBox^ Op7Q7;
	private: System::Windows::Forms::CheckBox^ Op8Q7;
	private: System::Windows::Forms::CheckBox^ Op9Q7;
	private: System::Windows::Forms::PictureBox^ Q8;
	private: System::Windows::Forms::Button^ NextQ8;
	private: System::Windows::Forms::Label^ Question8;

	private: System::Windows::Forms::Label^ Que81;




	private: System::Windows::Forms::TextBox^ TextBox1Q8;
	private: System::Windows::Forms::Label^ Que82;






	private: System::Windows::Forms::TextBox^ TextBox2Q8;
	private: System::Windows::Forms::PictureBox^ Q9;
	private: System::Windows::Forms::Button^ NextQ9;
	private: System::Windows::Forms::Label^ Question9;
	private: System::Windows::Forms::Label^ TimeQ9;


	private: System::Windows::Forms::Label^ Que91;


	private: System::Windows::Forms::RadioButton^ Qp2Q9;

	private: System::Windows::Forms::Timer^ TimerQ9;
	private: System::Windows::Forms::Label^ Que92;
	private: System::Windows::Forms::Label^ Que93;
	private: System::Windows::Forms::Label^ Que94;
	private: System::Windows::Forms::RadioButton^ Op1Q9;
	private: System::Windows::Forms::CheckBox^ Op5Q8;
	private: System::Windows::Forms::CheckBox^ Op6Q8;
	private: System::Windows::Forms::CheckBox^ Op7Q8;
	private: System::Windows::Forms::CheckBox^ Op8Q8;
	private: System::Windows::Forms::CheckBox^ Op1Q8;
	private: System::Windows::Forms::CheckBox^ Op2Q8;
	private: System::Windows::Forms::CheckBox^ Op3Q8;
	private: System::Windows::Forms::CheckBox^ Op4Q8;
	private: System::Windows::Forms::PictureBox^ R;
	private: System::Windows::Forms::Label^ Results;
	private: System::Windows::Forms::Label^ Score1;
	private: System::Windows::Forms::Label^ Recommendations;
	private: System::Windows::Forms::Button^ MainMenu;
	private: System::Windows::Forms::Button^ Restart;










	private: System::ComponentModel::IContainer^ components;


















































	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Start = (gcnew System::Windows::Forms::Button());
			this->Algorytm = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->EngTextLabel = (gcnew System::Windows::Forms::Label());
			this->Q1 = (gcnew System::Windows::Forms::PictureBox());
			this->Question1 = (gcnew System::Windows::Forms::Label());
			this->Que1 = (gcnew System::Windows::Forms::Label());
			this->Op1Q1 = (gcnew System::Windows::Forms::RadioButton());
			this->Op2Q1 = (gcnew System::Windows::Forms::RadioButton());
			this->Op3Q1 = (gcnew System::Windows::Forms::RadioButton());
			this->NextQ1 = (gcnew System::Windows::Forms::Button());
			this->PicQ1 = (gcnew System::Windows::Forms::PictureBox());
			this->Q2 = (gcnew System::Windows::Forms::PictureBox());
			this->PicQ2 = (gcnew System::Windows::Forms::PictureBox());
			this->Question2 = (gcnew System::Windows::Forms::Label());
			this->Op1Q2 = (gcnew System::Windows::Forms::RadioButton());
			this->Op3Q2 = (gcnew System::Windows::Forms::RadioButton());
			this->Op4Q2 = (gcnew System::Windows::Forms::RadioButton());
			this->Op2Q2 = (gcnew System::Windows::Forms::RadioButton());
			this->NextQ2 = (gcnew System::Windows::Forms::Button());
			this->Q3 = (gcnew System::Windows::Forms::PictureBox());
			this->Question3 = (gcnew System::Windows::Forms::Label());
			this->Que31 = (gcnew System::Windows::Forms::Label());
			this->Que32 = (gcnew System::Windows::Forms::Label());
			this->Que33 = (gcnew System::Windows::Forms::Label());
			this->NextQ3 = (gcnew System::Windows::Forms::Button());
			this->ComboQ3 = (gcnew System::Windows::Forms::ComboBox());
			this->Que34 = (gcnew System::Windows::Forms::Label());
			this->Q4 = (gcnew System::Windows::Forms::PictureBox());
			this->NextQ4 = (gcnew System::Windows::Forms::Button());
			this->Question4 = (gcnew System::Windows::Forms::Label());
			this->PicQ4 = (gcnew System::Windows::Forms::PictureBox());
			this->TextBoxQ4 = (gcnew System::Windows::Forms::TextBox());
			this->Q5 = (gcnew System::Windows::Forms::PictureBox());
			this->NextQ5 = (gcnew System::Windows::Forms::Button());
			this->Question5 = (gcnew System::Windows::Forms::Label());
			this->PicQ5 = (gcnew System::Windows::Forms::PictureBox());
			this->Que51 = (gcnew System::Windows::Forms::Label());
			this->Que52 = (gcnew System::Windows::Forms::Label());
			this->Op1Q5 = (gcnew System::Windows::Forms::CheckBox());
			this->Op2Q5 = (gcnew System::Windows::Forms::CheckBox());
			this->Op3Q5 = (gcnew System::Windows::Forms::CheckBox());
			this->Op4Q5 = (gcnew System::Windows::Forms::CheckBox());
			this->Q6 = (gcnew System::Windows::Forms::PictureBox());
			this->Question6 = (gcnew System::Windows::Forms::Label());
			this->PicQ6 = (gcnew System::Windows::Forms::PictureBox());
			this->Op1Q6 = (gcnew System::Windows::Forms::RadioButton());
			this->Op3Q6 = (gcnew System::Windows::Forms::RadioButton());
			this->Op2Q6 = (gcnew System::Windows::Forms::RadioButton());
			this->NextQ6 = (gcnew System::Windows::Forms::Button());
			this->Q7 = (gcnew System::Windows::Forms::PictureBox());
			this->NextQ7 = (gcnew System::Windows::Forms::Button());
			this->Question7 = (gcnew System::Windows::Forms::Label());
			this->PicQ7 = (gcnew System::Windows::Forms::PictureBox());
			this->Que71 = (gcnew System::Windows::Forms::Label());
			this->Op1Q7 = (gcnew System::Windows::Forms::CheckBox());
			this->Op2Q7 = (gcnew System::Windows::Forms::CheckBox());
			this->Op3Q7 = (gcnew System::Windows::Forms::CheckBox());
			this->Que72 = (gcnew System::Windows::Forms::Label());
			this->Op4Q7 = (gcnew System::Windows::Forms::CheckBox());
			this->Op5Q7 = (gcnew System::Windows::Forms::CheckBox());
			this->Op6Q7 = (gcnew System::Windows::Forms::CheckBox());
			this->Que73 = (gcnew System::Windows::Forms::Label());
			this->Op7Q7 = (gcnew System::Windows::Forms::CheckBox());
			this->Op8Q7 = (gcnew System::Windows::Forms::CheckBox());
			this->Op9Q7 = (gcnew System::Windows::Forms::CheckBox());
			this->Q8 = (gcnew System::Windows::Forms::PictureBox());
			this->NextQ8 = (gcnew System::Windows::Forms::Button());
			this->Question8 = (gcnew System::Windows::Forms::Label());
			this->Que81 = (gcnew System::Windows::Forms::Label());
			this->TextBox1Q8 = (gcnew System::Windows::Forms::TextBox());
			this->Que82 = (gcnew System::Windows::Forms::Label());
			this->TextBox2Q8 = (gcnew System::Windows::Forms::TextBox());
			this->Q9 = (gcnew System::Windows::Forms::PictureBox());
			this->NextQ9 = (gcnew System::Windows::Forms::Button());
			this->Question9 = (gcnew System::Windows::Forms::Label());
			this->TimeQ9 = (gcnew System::Windows::Forms::Label());
			this->Que91 = (gcnew System::Windows::Forms::Label());
			this->Qp2Q9 = (gcnew System::Windows::Forms::RadioButton());
			this->TimerQ9 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Que92 = (gcnew System::Windows::Forms::Label());
			this->Que93 = (gcnew System::Windows::Forms::Label());
			this->Que94 = (gcnew System::Windows::Forms::Label());
			this->Op1Q9 = (gcnew System::Windows::Forms::RadioButton());
			this->Op5Q8 = (gcnew System::Windows::Forms::CheckBox());
			this->Op6Q8 = (gcnew System::Windows::Forms::CheckBox());
			this->Op7Q8 = (gcnew System::Windows::Forms::CheckBox());
			this->Op8Q8 = (gcnew System::Windows::Forms::CheckBox());
			this->Op1Q8 = (gcnew System::Windows::Forms::CheckBox());
			this->Op2Q8 = (gcnew System::Windows::Forms::CheckBox());
			this->Op3Q8 = (gcnew System::Windows::Forms::CheckBox());
			this->Op4Q8 = (gcnew System::Windows::Forms::CheckBox());
			this->R = (gcnew System::Windows::Forms::PictureBox());
			this->Results = (gcnew System::Windows::Forms::Label());
			this->Score1 = (gcnew System::Windows::Forms::Label());
			this->Recommendations = (gcnew System::Windows::Forms::Label());
			this->MainMenu = (gcnew System::Windows::Forms::Button());
			this->Restart = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicQ1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicQ2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicQ4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicQ5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicQ6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicQ7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->R))->BeginInit();
			this->SuspendLayout();
			// 
			// Start
			// 
			this->Start->BackColor = System::Drawing::Color::GhostWhite;
			this->Start->Location = System::Drawing::Point(142, 43);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(134, 23);
			this->Start->TabIndex = 0;
			this->Start->Text = L"Начать тестирование";
			this->Start->UseVisualStyleBackColor = false;
			this->Start->Click += gcnew System::EventHandler(this, &MyForm::Start_Click);
			// 
			// Algorytm
			// 
			this->Algorytm->BackColor = System::Drawing::Color::GhostWhite;
			this->Algorytm->Location = System::Drawing::Point(139, 112);
			this->Algorytm->Name = L"Algorytm";
			this->Algorytm->Size = System::Drawing::Size(140, 23);
			this->Algorytm->TabIndex = 1;
			this->Algorytm->Text = L"Алгоритм оценивания";
			this->Algorytm->UseVisualStyleBackColor = false;
			this->Algorytm->Click += gcnew System::EventHandler(this, &MyForm::Algorytm_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::GhostWhite;
			this->Exit->Location = System::Drawing::Point(169, 186);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(75, 23);
			this->Exit->TabIndex = 2;
			this->Exit->Text = L"Выход";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// EngTextLabel
			// 
			this->EngTextLabel->AutoSize = true;
			this->EngTextLabel->Location = System::Drawing::Point(116, 9);
			this->EngTextLabel->Name = L"EngTextLabel";
			this->EngTextLabel->Size = System::Drawing::Size(197, 13);
			this->EngTextLabel->TabIndex = 3;
			this->EngTextLabel->Text = L"Тестирование по английскому языку\r\n";
			// 
			// Q1
			// 
			this->Q1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Q1->Location = System::Drawing::Point(11, 10);
			this->Q1->Name = L"Q1";
			this->Q1->Size = System::Drawing::Size(405, 244);
			this->Q1->TabIndex = 4;
			this->Q1->TabStop = false;
			this->Q1->Visible = false;
			// 
			// Question1
			// 
			this->Question1->AutoSize = true;
			this->Question1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Question1->Location = System::Drawing::Point(14, 11);
			this->Question1->Name = L"Question1";
			this->Question1->Size = System::Drawing::Size(400, 16);
			this->Question1->TabIndex = 5;
			this->Question1->Text = L"Ваш друг прислал вам сообщение. Как Вы на него ответите\?\r\n";
			this->Question1->Visible = false;
			// 
			// Que1
			// 
			this->Que1->AutoSize = true;
			this->Que1->BackColor = System::Drawing::Color::GhostWhite;
			this->Que1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Que1->Location = System::Drawing::Point(157, 111);
			this->Que1->Name = L"Que1";
			this->Que1->Size = System::Drawing::Size(155, 24);
			this->Que1->TabIndex = 7;
			this->Que1->Text = L"Hi! How are you\?";
			this->Que1->Visible = false;
			// 
			// Op1Q1
			// 
			this->Op1Q1->AutoSize = true;
			this->Op1Q1->BackColor = System::Drawing::Color::DodgerBlue;
			this->Op1Q1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op1Q1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Op1Q1->Location = System::Drawing::Point(26, 150);
			this->Op1Q1->Name = L"Op1Q1";
			this->Op1Q1->Size = System::Drawing::Size(211, 20);
			this->Op1Q1->TabIndex = 8;
			this->Op1Q1->TabStop = true;
			this->Op1Q1->Text = L"Hi, I`m fine, thank you. And you\?";
			this->Op1Q1->UseVisualStyleBackColor = false;
			this->Op1Q1->Visible = false;
			// 
			// Op2Q1
			// 
			this->Op2Q1->AutoSize = true;
			this->Op2Q1->BackColor = System::Drawing::Color::DodgerBlue;
			this->Op2Q1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op2Q1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Op2Q1->Location = System::Drawing::Point(26, 181);
			this->Op2Q1->Name = L"Op2Q1";
			this->Op2Q1->Size = System::Drawing::Size(247, 20);
			this->Op2Q1->TabIndex = 8;
			this->Op2Q1->TabStop = true;
			this->Op2Q1->Text = L"Hi, where are you\? I\'m at the bus stop.";
			this->Op2Q1->UseVisualStyleBackColor = false;
			this->Op2Q1->Visible = false;
			// 
			// Op3Q1
			// 
			this->Op3Q1->AutoSize = true;
			this->Op3Q1->BackColor = System::Drawing::Color::DodgerBlue;
			this->Op3Q1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op3Q1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Op3Q1->Location = System::Drawing::Point(26, 213);
			this->Op3Q1->Name = L"Op3Q1";
			this->Op3Q1->Size = System::Drawing::Size(180, 20);
			this->Op3Q1->TabIndex = 8;
			this->Op3Q1->TabStop = true;
			this->Op3Q1->Text = L"Hi, I have 2 cats. And you\?";
			this->Op3Q1->UseVisualStyleBackColor = false;
			this->Op3Q1->Visible = false;
			// 
			// NextQ1
			// 
			this->NextQ1->BackColor = System::Drawing::Color::GhostWhite;
			this->NextQ1->Location = System::Drawing::Point(342, 230);
			this->NextQ1->Name = L"NextQ1";
			this->NextQ1->Size = System::Drawing::Size(75, 23);
			this->NextQ1->TabIndex = 9;
			this->NextQ1->Text = L"Далее";
			this->NextQ1->UseVisualStyleBackColor = false;
			this->NextQ1->Visible = false;
			this->NextQ1->Click += gcnew System::EventHandler(this, &MyForm::NextQ1_Click);
			// 
			// PicQ1
			// 
			this->PicQ1->Location = System::Drawing::Point(318, 48);
			this->PicQ1->Name = L"PicQ1";
			this->PicQ1->Size = System::Drawing::Size(87, 87);
			this->PicQ1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PicQ1->TabIndex = 10;
			this->PicQ1->TabStop = false;
			// 
			// Q2
			// 
			this->Q2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Q2->Location = System::Drawing::Point(11, 9);
			this->Q2->Name = L"Q2";
			this->Q2->Size = System::Drawing::Size(405, 244);
			this->Q2->TabIndex = 11;
			this->Q2->TabStop = false;
			this->Q2->Visible = false;
			// 
			// PicQ2
			// 
			this->PicQ2->Location = System::Drawing::Point(96, 40);
			this->PicQ2->Name = L"PicQ2";
			this->PicQ2->Size = System::Drawing::Size(238, 148);
			this->PicQ2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PicQ2->TabIndex = 12;
			this->PicQ2->TabStop = false;
			this->PicQ2->Visible = false;
			// 
			// Question2
			// 
			this->Question2->AutoSize = true;
			this->Question2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Question2->Location = System::Drawing::Point(68, 15);
			this->Question2->Name = L"Question2";
			this->Question2->Size = System::Drawing::Size(294, 16);
			this->Question2->TabIndex = 13;
			this->Question2->Text = L"К какой категории относится эта картинка\?";
			this->Question2->Visible = false;
			// 
			// Op1Q2
			// 
			this->Op1Q2->AutoSize = true;
			this->Op1Q2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op1Q2->Location = System::Drawing::Point(127, 197);
			this->Op1Q2->Name = L"Op1Q2";
			this->Op1Q2->Size = System::Drawing::Size(39, 19);
			this->Op1Q2->TabIndex = 14;
			this->Op1Q2->TabStop = true;
			this->Op1Q2->Text = L"Art";
			this->Op1Q2->UseVisualStyleBackColor = true;
			this->Op1Q2->Visible = false;
			// 
			// Op3Q2
			// 
			this->Op3Q2->AutoSize = true;
			this->Op3Q2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op3Q2->Location = System::Drawing::Point(127, 222);
			this->Op3Q2->Name = L"Op3Q2";
			this->Op3Q2->Size = System::Drawing::Size(69, 19);
			this->Op3Q2->TabIndex = 14;
			this->Op3Q2->TabStop = true;
			this->Op3Q2->Text = L"Science";
			this->Op3Q2->UseVisualStyleBackColor = true;
			this->Op3Q2->Visible = false;
			// 
			// Op4Q2
			// 
			this->Op4Q2->AutoSize = true;
			this->Op4Q2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op4Q2->Location = System::Drawing::Point(233, 222);
			this->Op4Q2->Name = L"Op4Q2";
			this->Op4Q2->Size = System::Drawing::Size(60, 19);
			this->Op4Q2->TabIndex = 14;
			this->Op4Q2->TabStop = true;
			this->Op4Q2->Text = L"Sports";
			this->Op4Q2->UseVisualStyleBackColor = true;
			this->Op4Q2->Visible = false;
			// 
			// Op2Q2
			// 
			this->Op2Q2->AutoSize = true;
			this->Op2Q2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op2Q2->Location = System::Drawing::Point(233, 197);
			this->Op2Q2->Name = L"Op2Q2";
			this->Op2Q2->Size = System::Drawing::Size(58, 19);
			this->Op2Q2->TabIndex = 14;
			this->Op2Q2->TabStop = true;
			this->Op2Q2->Text = L"Music";
			this->Op2Q2->UseVisualStyleBackColor = true;
			this->Op2Q2->Visible = false;
			// 
			// NextQ2
			// 
			this->NextQ2->BackColor = System::Drawing::Color::GhostWhite;
			this->NextQ2->Location = System::Drawing::Point(341, 230);
			this->NextQ2->Name = L"NextQ2";
			this->NextQ2->Size = System::Drawing::Size(75, 23);
			this->NextQ2->TabIndex = 15;
			this->NextQ2->Text = L"Далее";
			this->NextQ2->UseVisualStyleBackColor = false;
			this->NextQ2->Visible = false;
			this->NextQ2->Click += gcnew System::EventHandler(this, &MyForm::NextQ2_Click);
			// 
			// Q3
			// 
			this->Q3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Q3->Location = System::Drawing::Point(12, 10);
			this->Q3->Name = L"Q3";
			this->Q3->Size = System::Drawing::Size(405, 244);
			this->Q3->TabIndex = 16;
			this->Q3->TabStop = false;
			this->Q3->Visible = false;
			// 
			// Question3
			// 
			this->Question3->AutoSize = true;
			this->Question3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Question3->Location = System::Drawing::Point(23, 15);
			this->Question3->Name = L"Question3";
			this->Question3->Size = System::Drawing::Size(190, 16);
			this->Question3->TabIndex = 17;
			this->Question3->Text = L"Вставь пропущенное слово:";
			this->Question3->Visible = false;
			// 
			// Que31
			// 
			this->Que31->AutoSize = true;
			this->Que31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Que31->Location = System::Drawing::Point(26, 60);
			this->Que31->Name = L"Que31";
			this->Que31->Size = System::Drawing::Size(339, 32);
			this->Que31->TabIndex = 18;
			this->Que31->Text = L"John: \r\nMy parents and I are planning to go to France next week.";
			this->Que31->Visible = false;
			// 
			// Que32
			// 
			this->Que32->AutoSize = true;
			this->Que32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Que32->Location = System::Drawing::Point(26, 115);
			this->Que32->Name = L"Que32";
			this->Que32->Size = System::Drawing::Size(80, 32);
			this->Que32->TabIndex = 19;
			this->Que32->Text = L"You: \r\nThis sounds";
			this->Que32->Visible = false;
			// 
			// Que33
			// 
			this->Que33->AutoSize = true;
			this->Que33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Que33->Location = System::Drawing::Point(26, 173);
			this->Que33->Name = L"Que33";
			this->Que33->Size = System::Drawing::Size(326, 32);
			this->Que33->TabIndex = 21;
			this->Que33->Text = L"John:\r\nYes, we are already packing our bags. I am so happy!";
			this->Que33->Visible = false;
			// 
			// NextQ3
			// 
			this->NextQ3->BackColor = System::Drawing::Color::GhostWhite;
			this->NextQ3->Location = System::Drawing::Point(342, 230);
			this->NextQ3->Name = L"NextQ3";
			this->NextQ3->Size = System::Drawing::Size(75, 23);
			this->NextQ3->TabIndex = 22;
			this->NextQ3->Text = L"Далее";
			this->NextQ3->UseVisualStyleBackColor = false;
			this->NextQ3->Visible = false;
			this->NextQ3->Click += gcnew System::EventHandler(this, &MyForm::NextQ3_Click);
			// 
			// ComboQ3
			// 
			this->ComboQ3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ComboQ3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ComboQ3->FormattingEnabled = true;
			this->ComboQ3->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"sad", L"exiting", L"boring", L"scary", L"horrible" });
			this->ComboQ3->Location = System::Drawing::Point(110, 127);
			this->ComboQ3->Name = L"ComboQ3";
			this->ComboQ3->Size = System::Drawing::Size(77, 24);
			this->ComboQ3->TabIndex = 23;
			this->ComboQ3->Visible = false;
			// 
			// Que34
			// 
			this->Que34->AutoSize = true;
			this->Que34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Que34->Location = System::Drawing::Point(191, 131);
			this->Que34->Name = L"Que34";
			this->Que34->Size = System::Drawing::Size(213, 16);
			this->Que34->TabIndex = 24;
			this->Que34->Text = L". Have you bought your tickets yet\?";
			this->Que34->Visible = false;
			// 
			// Q4
			// 
			this->Q4->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Q4->Location = System::Drawing::Point(11, 9);
			this->Q4->Name = L"Q4";
			this->Q4->Size = System::Drawing::Size(405, 244);
			this->Q4->TabIndex = 25;
			this->Q4->TabStop = false;
			this->Q4->Visible = false;
			// 
			// NextQ4
			// 
			this->NextQ4->BackColor = System::Drawing::Color::GhostWhite;
			this->NextQ4->Location = System::Drawing::Point(341, 231);
			this->NextQ4->Name = L"NextQ4";
			this->NextQ4->Size = System::Drawing::Size(75, 23);
			this->NextQ4->TabIndex = 26;
			this->NextQ4->Text = L"Далее";
			this->NextQ4->UseVisualStyleBackColor = false;
			this->NextQ4->Visible = false;
			this->NextQ4->Click += gcnew System::EventHandler(this, &MyForm::NextQ4_Click);
			// 
			// Question4
			// 
			this->Question4->AutoSize = true;
			this->Question4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Question4->Location = System::Drawing::Point(19, 22);
			this->Question4->Name = L"Question4";
			this->Question4->Size = System::Drawing::Size(386, 32);
			this->Question4->TabIndex = 27;
			this->Question4->Text = L"Выбери транспорт, на котором эффективнее всего будет\r\nдобраться от России до Фран"
				L"ции и напиши его в поле.\r\n";
			this->Question4->Visible = false;
			// 
			// PicQ4
			// 
			this->PicQ4->Location = System::Drawing::Point(22, 61);
			this->PicQ4->Name = L"PicQ4";
			this->PicQ4->Size = System::Drawing::Size(222, 180);
			this->PicQ4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PicQ4->TabIndex = 28;
			this->PicQ4->TabStop = false;
			this->PicQ4->Visible = false;
			// 
			// TextBoxQ4
			// 
			this->TextBoxQ4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextBoxQ4->Location = System::Drawing::Point(279, 185);
			this->TextBoxQ4->Name = L"TextBoxQ4";
			this->TextBoxQ4->Size = System::Drawing::Size(100, 22);
			this->TextBoxQ4->TabIndex = 29;
			this->TextBoxQ4->Visible = false;
			this->TextBoxQ4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBoxQ4_KeyPress);
			// 
			// Q5
			// 
			this->Q5->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Q5->Location = System::Drawing::Point(12, 10);
			this->Q5->Name = L"Q5";
			this->Q5->Size = System::Drawing::Size(405, 244);
			this->Q5->TabIndex = 30;
			this->Q5->TabStop = false;
			this->Q5->Visible = false;
			// 
			// NextQ5
			// 
			this->NextQ5->BackColor = System::Drawing::Color::GhostWhite;
			this->NextQ5->Location = System::Drawing::Point(342, 231);
			this->NextQ5->Name = L"NextQ5";
			this->NextQ5->Size = System::Drawing::Size(75, 23);
			this->NextQ5->TabIndex = 31;
			this->NextQ5->Text = L"Далее";
			this->NextQ5->UseVisualStyleBackColor = false;
			this->NextQ5->Visible = false;
			this->NextQ5->Click += gcnew System::EventHandler(this, &MyForm::NextQ5_Click);
			// 
			// Question5
			// 
			this->Question5->AutoSize = true;
			this->Question5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Question5->Location = System::Drawing::Point(14, 15);
			this->Question5->Name = L"Question5";
			this->Question5->Size = System::Drawing::Size(336, 32);
			this->Question5->TabIndex = 32;
			this->Question5->Text = L"Отметьте, какие утверждения о людях правдивые,\r\nа какие ложные";
			this->Question5->Visible = false;
			// 
			// PicQ5
			// 
			this->PicQ5->Location = System::Drawing::Point(65, 50);
			this->PicQ5->Name = L"PicQ5";
			this->PicQ5->Size = System::Drawing::Size(287, 122);
			this->PicQ5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PicQ5->TabIndex = 33;
			this->PicQ5->TabStop = false;
			this->PicQ5->Visible = false;
			// 
			// Que51
			// 
			this->Que51->AutoSize = true;
			this->Que51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Que51->Location = System::Drawing::Point(4, 175);
			this->Que51->Name = L"Que51";
			this->Que51->Size = System::Drawing::Size(146, 16);
			this->Que51->TabIndex = 34;
			this->Que51->Text = L"They are taking a selfie";
			this->Que51->Visible = false;
			// 
			// Que52
			// 
			this->Que52->AutoSize = true;
			this->Que52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Que52->Location = System::Drawing::Point(166, 175);
			this->Que52->Name = L"Que52";
			this->Que52->Size = System::Drawing::Size(255, 16);
			this->Que52->TabIndex = 34;
			this->Que52->Text = L"The girl with dark hair is wearing a pink hat\r\n";
			this->Que52->Visible = false;
			// 
			// Op1Q5
			// 
			this->Op1Q5->AutoSize = true;
			this->Op1Q5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op1Q5->Location = System::Drawing::Point(17, 207);
			this->Op1Q5->Name = L"Op1Q5";
			this->Op1Q5->Size = System::Drawing::Size(50, 20);
			this->Op1Q5->TabIndex = 36;
			this->Op1Q5->Text = L"Yes";
			this->Op1Q5->UseVisualStyleBackColor = true;
			this->Op1Q5->Visible = false;
			// 
			// Op2Q5
			// 
			this->Op2Q5->AutoSize = true;
			this->Op2Q5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op2Q5->Location = System::Drawing::Point(73, 207);
			this->Op2Q5->Name = L"Op2Q5";
			this->Op2Q5->Size = System::Drawing::Size(44, 20);
			this->Op2Q5->TabIndex = 36;
			this->Op2Q5->Text = L"No";
			this->Op2Q5->UseVisualStyleBackColor = true;
			this->Op2Q5->Visible = false;
			// 
			// Op3Q5
			// 
			this->Op3Q5->AutoSize = true;
			this->Op3Q5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op3Q5->Location = System::Drawing::Point(187, 207);
			this->Op3Q5->Name = L"Op3Q5";
			this->Op3Q5->Size = System::Drawing::Size(50, 20);
			this->Op3Q5->TabIndex = 36;
			this->Op3Q5->Text = L"Yes";
			this->Op3Q5->UseVisualStyleBackColor = true;
			this->Op3Q5->Visible = false;
			// 
			// Op4Q5
			// 
			this->Op4Q5->AutoSize = true;
			this->Op4Q5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op4Q5->Location = System::Drawing::Point(243, 208);
			this->Op4Q5->Name = L"Op4Q5";
			this->Op4Q5->Size = System::Drawing::Size(44, 20);
			this->Op4Q5->TabIndex = 36;
			this->Op4Q5->Text = L"No";
			this->Op4Q5->UseVisualStyleBackColor = true;
			this->Op4Q5->Visible = false;
			// 
			// Q6
			// 
			this->Q6->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Q6->Location = System::Drawing::Point(12, 10);
			this->Q6->Name = L"Q6";
			this->Q6->Size = System::Drawing::Size(405, 244);
			this->Q6->TabIndex = 37;
			this->Q6->TabStop = false;
			this->Q6->Visible = false;
			// 
			// Question6
			// 
			this->Question6->AutoSize = true;
			this->Question6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Question6->Location = System::Drawing::Point(22, 15);
			this->Question6->Name = L"Question6";
			this->Question6->Size = System::Drawing::Size(359, 16);
			this->Question6->TabIndex = 38;
			this->Question6->Text = L"Определите правильное утверждение к этому знаку:";
			this->Question6->Visible = false;
			// 
			// PicQ6
			// 
			this->PicQ6->Location = System::Drawing::Point(85, 39);
			this->PicQ6->Name = L"PicQ6";
			this->PicQ6->Size = System::Drawing::Size(267, 141);
			this->PicQ6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PicQ6->TabIndex = 39;
			this->PicQ6->TabStop = false;
			this->PicQ6->Visible = false;
			// 
			// Op1Q6
			// 
			this->Op1Q6->AutoSize = true;
			this->Op1Q6->Location = System::Drawing::Point(22, 193);
			this->Op1Q6->Name = L"Op1Q6";
			this->Op1Q6->Size = System::Drawing::Size(165, 17);
			this->Op1Q6->TabIndex = 40;
			this->Op1Q6->TabStop = true;
			this->Op1Q6->Text = L"You can walk dogs from 8 am";
			this->Op1Q6->UseVisualStyleBackColor = true;
			this->Op1Q6->Visible = false;
			// 
			// Op3Q6
			// 
			this->Op3Q6->AutoSize = true;
			this->Op3Q6->Location = System::Drawing::Point(233, 192);
			this->Op3Q6->Name = L"Op3Q6";
			this->Op3Q6->Size = System::Drawing::Size(171, 17);
			this->Op3Q6->TabIndex = 40;
			this->Op3Q6->TabStop = true;
			this->Op3Q6->Text = L"You can\'t walk dogs after 6 pm";
			this->Op3Q6->UseVisualStyleBackColor = true;
			this->Op3Q6->Visible = false;
			// 
			// Op2Q6
			// 
			this->Op2Q6->AutoSize = true;
			this->Op2Q6->Location = System::Drawing::Point(128, 222);
			this->Op2Q6->Name = L"Op2Q6";
			this->Op2Q6->Size = System::Drawing::Size(164, 17);
			this->Op2Q6->TabIndex = 40;
			this->Op2Q6->TabStop = true;
			this->Op2Q6->Text = L"You can walk dogs until 8 am";
			this->Op2Q6->UseVisualStyleBackColor = true;
			this->Op2Q6->Visible = false;
			// 
			// NextQ6
			// 
			this->NextQ6->BackColor = System::Drawing::Color::GhostWhite;
			this->NextQ6->Location = System::Drawing::Point(342, 231);
			this->NextQ6->Name = L"NextQ6";
			this->NextQ6->Size = System::Drawing::Size(75, 23);
			this->NextQ6->TabIndex = 41;
			this->NextQ6->Text = L"Далее";
			this->NextQ6->UseVisualStyleBackColor = false;
			this->NextQ6->Visible = false;
			this->NextQ6->Click += gcnew System::EventHandler(this, &MyForm::NextQ6_Click);
			// 
			// Q7
			// 
			this->Q7->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Q7->Location = System::Drawing::Point(12, 9);
			this->Q7->Name = L"Q7";
			this->Q7->Size = System::Drawing::Size(405, 244);
			this->Q7->TabIndex = 42;
			this->Q7->TabStop = false;
			this->Q7->Visible = false;
			// 
			// NextQ7
			// 
			this->NextQ7->BackColor = System::Drawing::Color::GhostWhite;
			this->NextQ7->Location = System::Drawing::Point(342, 230);
			this->NextQ7->Name = L"NextQ7";
			this->NextQ7->Size = System::Drawing::Size(75, 23);
			this->NextQ7->TabIndex = 43;
			this->NextQ7->Text = L"Далее";
			this->NextQ7->UseVisualStyleBackColor = false;
			this->NextQ7->Visible = false;
			this->NextQ7->Click += gcnew System::EventHandler(this, &MyForm::NextQ7_Click);
			// 
			// Question7
			// 
			this->Question7->AutoSize = true;
			this->Question7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Question7->Location = System::Drawing::Point(43, 3);
			this->Question7->Name = L"Question7";
			this->Question7->Size = System::Drawing::Size(336, 48);
			this->Question7->TabIndex = 44;
			this->Question7->Text = L"Отметьте, какие утверждения о людях правдивые,\r\nкакие ложные, а о каких фактах не"
				L"льзя сделать\r\nвыводы по приведённой картинке.";
			this->Question7->Visible = false;
			// 
			// PicQ7
			// 
			this->PicQ7->Location = System::Drawing::Point(66, 54);
			this->PicQ7->Name = L"PicQ7";
			this->PicQ7->Size = System::Drawing::Size(286, 110);
			this->PicQ7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PicQ7->TabIndex = 45;
			this->PicQ7->TabStop = false;
			this->PicQ7->Visible = false;
			// 
			// Que71
			// 
			this->Que71->AutoSize = true;
			this->Que71->Location = System::Drawing::Point(14, 167);
			this->Que71->Name = L"Que71";
			this->Que71->Size = System::Drawing::Size(186, 13);
			this->Que71->TabIndex = 46;
			this->Que71->Text = L"The bald man is holding a newspaper.";
			this->Que71->Visible = false;
			// 
			// Op1Q7
			// 
			this->Op1Q7->AutoSize = true;
			this->Op1Q7->Location = System::Drawing::Point(17, 185);
			this->Op1Q7->Name = L"Op1Q7";
			this->Op1Q7->Size = System::Drawing::Size(44, 17);
			this->Op1Q7->TabIndex = 47;
			this->Op1Q7->Text = L"Yes";
			this->Op1Q7->UseVisualStyleBackColor = true;
			this->Op1Q7->Visible = false;
			// 
			// Op2Q7
			// 
			this->Op2Q7->AutoSize = true;
			this->Op2Q7->Location = System::Drawing::Point(77, 185);
			this->Op2Q7->Name = L"Op2Q7";
			this->Op2Q7->Size = System::Drawing::Size(40, 17);
			this->Op2Q7->TabIndex = 47;
			this->Op2Q7->Text = L"No";
			this->Op2Q7->UseVisualStyleBackColor = true;
			this->Op2Q7->Visible = false;
			// 
			// Op3Q7
			// 
			this->Op3Q7->AutoSize = true;
			this->Op3Q7->Location = System::Drawing::Point(139, 185);
			this->Op3Q7->Name = L"Op3Q7";
			this->Op3Q7->Size = System::Drawing::Size(72, 17);
			this->Op3Q7->TabIndex = 47;
			this->Op3Q7->Text = L"Not given";
			this->Op3Q7->UseVisualStyleBackColor = true;
			this->Op3Q7->Visible = false;
			// 
			// Que72
			// 
			this->Que72->AutoSize = true;
			this->Que72->Location = System::Drawing::Point(14, 204);
			this->Que72->Name = L"Que72";
			this->Que72->Size = System::Drawing::Size(137, 13);
			this->Que72->TabIndex = 46;
			this->Que72->Text = L"Both men are wearing suits.";
			this->Que72->Visible = false;
			// 
			// Op4Q7
			// 
			this->Op4Q7->AutoSize = true;
			this->Op4Q7->Location = System::Drawing::Point(17, 222);
			this->Op4Q7->Name = L"Op4Q7";
			this->Op4Q7->Size = System::Drawing::Size(44, 17);
			this->Op4Q7->TabIndex = 47;
			this->Op4Q7->Text = L"Yes";
			this->Op4Q7->UseVisualStyleBackColor = true;
			this->Op4Q7->Visible = false;
			// 
			// Op5Q7
			// 
			this->Op5Q7->AutoSize = true;
			this->Op5Q7->Location = System::Drawing::Point(77, 222);
			this->Op5Q7->Name = L"Op5Q7";
			this->Op5Q7->Size = System::Drawing::Size(40, 17);
			this->Op5Q7->TabIndex = 47;
			this->Op5Q7->Text = L"No";
			this->Op5Q7->UseVisualStyleBackColor = true;
			this->Op5Q7->Visible = false;
			// 
			// Op6Q7
			// 
			this->Op6Q7->AutoSize = true;
			this->Op6Q7->Location = System::Drawing::Point(134, 222);
			this->Op6Q7->Name = L"Op6Q7";
			this->Op6Q7->Size = System::Drawing::Size(72, 17);
			this->Op6Q7->TabIndex = 47;
			this->Op6Q7->Text = L"Not given";
			this->Op6Q7->UseVisualStyleBackColor = true;
			this->Op6Q7->Visible = false;
			// 
			// Que73
			// 
			this->Que73->AutoSize = true;
			this->Que73->Location = System::Drawing::Point(220, 167);
			this->Que73->Name = L"Que73";
			this->Que73->Size = System::Drawing::Size(109, 13);
			this->Que73->TabIndex = 46;
			this->Que73->Text = L"Their flight is delayed.";
			this->Que73->Visible = false;
			// 
			// Op7Q7
			// 
			this->Op7Q7->AutoSize = true;
			this->Op7Q7->Location = System::Drawing::Point(223, 185);
			this->Op7Q7->Name = L"Op7Q7";
			this->Op7Q7->Size = System::Drawing::Size(44, 17);
			this->Op7Q7->TabIndex = 47;
			this->Op7Q7->Text = L"Yes";
			this->Op7Q7->UseVisualStyleBackColor = true;
			this->Op7Q7->Visible = false;
			// 
			// Op8Q7
			// 
			this->Op8Q7->AutoSize = true;
			this->Op8Q7->Location = System::Drawing::Point(283, 185);
			this->Op8Q7->Name = L"Op8Q7";
			this->Op8Q7->Size = System::Drawing::Size(40, 17);
			this->Op8Q7->TabIndex = 47;
			this->Op8Q7->Text = L"No";
			this->Op8Q7->UseVisualStyleBackColor = true;
			this->Op8Q7->Visible = false;
			// 
			// Op9Q7
			// 
			this->Op9Q7->AutoSize = true;
			this->Op9Q7->Location = System::Drawing::Point(345, 185);
			this->Op9Q7->Name = L"Op9Q7";
			this->Op9Q7->Size = System::Drawing::Size(72, 17);
			this->Op9Q7->TabIndex = 47;
			this->Op9Q7->Text = L"Not given";
			this->Op9Q7->UseVisualStyleBackColor = true;
			this->Op9Q7->Visible = false;
			// 
			// Q8
			// 
			this->Q8->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Q8->Location = System::Drawing::Point(12, 9);
			this->Q8->Name = L"Q8";
			this->Q8->Size = System::Drawing::Size(405, 244);
			this->Q8->TabIndex = 48;
			this->Q8->TabStop = false;
			this->Q8->Visible = false;
			// 
			// NextQ8
			// 
			this->NextQ8->BackColor = System::Drawing::Color::GhostWhite;
			this->NextQ8->Location = System::Drawing::Point(342, 230);
			this->NextQ8->Name = L"NextQ8";
			this->NextQ8->Size = System::Drawing::Size(75, 23);
			this->NextQ8->TabIndex = 49;
			this->NextQ8->Text = L"Далее";
			this->NextQ8->UseVisualStyleBackColor = false;
			this->NextQ8->Visible = false;
			this->NextQ8->Click += gcnew System::EventHandler(this, &MyForm::NextQ8_Click);
			// 
			// Question8
			// 
			this->Question8->AutoSize = true;
			this->Question8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Question8->Location = System::Drawing::Point(7, 7);
			this->Question8->Name = L"Question8";
			this->Question8->Size = System::Drawing::Size(345, 32);
			this->Question8->TabIndex = 50;
			this->Question8->Text = L"Выберите слово, в котором допущена ошибка.\r\nВ текстовом поле ниже напишите слово "
				L"правильно.";
			this->Question8->Visible = false;
			// 
			// Que81
			// 
			this->Que81->AutoSize = true;
			this->Que81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Que81->Location = System::Drawing::Point(17, 58);
			this->Que81->Name = L"Que81";
			this->Que81->Size = System::Drawing::Size(392, 16);
			this->Que81->TabIndex = 51;
			this->Que81->Text = L"You don’t need a whole carton of eggs for this recipe – only a little.";
			this->Que81->Visible = false;
			// 
			// TextBox1Q8
			// 
			this->TextBox1Q8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextBox1Q8->Location = System::Drawing::Point(22, 115);
			this->TextBox1Q8->Name = L"TextBox1Q8";
			this->TextBox1Q8->Size = System::Drawing::Size(111, 22);
			this->TextBox1Q8->TabIndex = 53;
			this->TextBox1Q8->Visible = false;
			this->TextBox1Q8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox1Q8_KeyPress);
			// 
			// Que82
			// 
			this->Que82->AutoSize = true;
			this->Que82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Que82->Location = System::Drawing::Point(17, 147);
			this->Que82->Name = L"Que82";
			this->Que82->Size = System::Drawing::Size(372, 32);
			this->Que82->TabIndex = 51;
			this->Que82->Text = L"Should any issues arise, we encourage you to try to turn\r\nyour computer off and o"
				L"n again before calling the IT helpdesk.";
			this->Que82->Visible = false;
			// 
			// TextBox2Q8
			// 
			this->TextBox2Q8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextBox2Q8->Location = System::Drawing::Point(22, 217);
			this->TextBox2Q8->Name = L"TextBox2Q8";
			this->TextBox2Q8->Size = System::Drawing::Size(111, 22);
			this->TextBox2Q8->TabIndex = 53;
			this->TextBox2Q8->Visible = false;
			this->TextBox2Q8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox2Q8_KeyPress);
			// 
			// Q9
			// 
			this->Q9->BackColor = System::Drawing::Color::LightSteelBlue;
			this->Q9->Location = System::Drawing::Point(11, 9);
			this->Q9->Name = L"Q9";
			this->Q9->Size = System::Drawing::Size(405, 244);
			this->Q9->TabIndex = 54;
			this->Q9->TabStop = false;
			this->Q9->Visible = false;
			// 
			// NextQ9
			// 
			this->NextQ9->BackColor = System::Drawing::Color::GhostWhite;
			this->NextQ9->Location = System::Drawing::Point(342, 231);
			this->NextQ9->Name = L"NextQ9";
			this->NextQ9->Size = System::Drawing::Size(75, 23);
			this->NextQ9->TabIndex = 55;
			this->NextQ9->Text = L"Далее";
			this->NextQ9->UseVisualStyleBackColor = false;
			this->NextQ9->Visible = false;
			this->NextQ9->Click += gcnew System::EventHandler(this, &MyForm::NextQ9_Click);
			// 
			// Question9
			// 
			this->Question9->AutoSize = true;
			this->Question9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Question9->Location = System::Drawing::Point(17, 15);
			this->Question9->Name = L"Question9";
			this->Question9->Size = System::Drawing::Size(340, 32);
			this->Question9->TabIndex = 56;
			this->Question9->Text = L"Вопрос на время! Выберите предложение, которое\r\nможет дополнить текст по смыслу.";
			this->Question9->Visible = false;
			// 
			// TimeQ9
			// 
			this->TimeQ9->AutoSize = true;
			this->TimeQ9->Location = System::Drawing::Point(17, 235);
			this->TimeQ9->Name = L"TimeQ9";
			this->TimeQ9->Size = System::Drawing::Size(59, 13);
			this->TimeQ9->TabIndex = 57;
			this->TimeQ9->Text = L"Осталось:";
			this->TimeQ9->Visible = false;
			this->TimeQ9->VisibleChanged += gcnew System::EventHandler(this, &MyForm::TimeQ9_VisibleChanged);
			// 
			// Que91
			// 
			this->Que91->AutoSize = true;
			this->Que91->Location = System::Drawing::Point(14, 54);
			this->Que91->Name = L"Que91";
			this->Que91->Size = System::Drawing::Size(357, 26);
			this->Que91->TabIndex = 58;
			this->Que91->Text = L"It took me months to save up enough money, but now, after an exhausting\r\nfive-hou"
				L"r flight, I am finally on a well-deserved vacation in Turkey!\r\n";
			this->Que91->Visible = false;
			// 
			// Qp2Q9
			// 
			this->Qp2Q9->AutoSize = true;
			this->Qp2Q9->Location = System::Drawing::Point(22, 170);
			this->Qp2Q9->Name = L"Qp2Q9";
			this->Qp2Q9->Size = System::Drawing::Size(321, 30);
			this->Qp2Q9->TabIndex = 59;
			this->Qp2Q9->TabStop = true;
			this->Qp2Q9->Text = L"The room service menu looked promising, so I decided to order\r\nsomething for brea"
				L"kfast.";
			this->Qp2Q9->UseVisualStyleBackColor = true;
			this->Qp2Q9->Visible = false;
			// 
			// TimerQ9
			// 
			this->TimerQ9->Interval = 1000;
			this->TimerQ9->Tick += gcnew System::EventHandler(this, &MyForm::TimerQ9_Tick);
			// 
			// Que92
			// 
			this->Que92->AutoSize = true;
			this->Que92->Location = System::Drawing::Point(14, 117);
			this->Que92->Name = L"Que92";
			this->Que92->Size = System::Drawing::Size(408, 26);
			this->Que92->TabIndex = 58;
			this->Que92->Text = L"As I was piling food onto my plate, I met some other holidaymakers who had been\r\n"
				L"staying at this resort for a few days already. I asked them if they knew about a"
				L"ny local\r\n";
			this->Que92->Visible = false;
			// 
			// Que93
			// 
			this->Que93->AutoSize = true;
			this->Que93->Location = System::Drawing::Point(14, 85);
			this->Que93->Name = L"Que93";
			this->Que93->Size = System::Drawing::Size(339, 26);
			this->Que93->TabIndex = 58;
			this->Que93->Text = L"Let me tell you all about it.\r\nSo, the very first day got off to a great start. _"
				L"____________________";
			this->Que93->Visible = false;
			// 
			// Que94
			// 
			this->Que94->AutoSize = true;
			this->Que94->Location = System::Drawing::Point(17, 147);
			this->Que94->Name = L"Que94";
			this->Que94->Size = System::Drawing::Size(310, 13);
			this->Que94->TabIndex = 58;
			this->Que94->Text = L"gems worth seeing, and they suggested visiting the local market.\r\n";
			this->Que94->Visible = false;
			// 
			// Op1Q9
			// 
			this->Op1Q9->AutoSize = true;
			this->Op1Q9->Location = System::Drawing::Point(22, 202);
			this->Op1Q9->Name = L"Op1Q9";
			this->Op1Q9->Size = System::Drawing::Size(322, 30);
			this->Op1Q9->TabIndex = 59;
			this->Op1Q9->TabStop = true;
			this->Op1Q9->Text = L"I woke up hungrier than usual and decided to head downstairs,\r\nto the hotel resta"
				L"urant.";
			this->Op1Q9->UseVisualStyleBackColor = true;
			this->Op1Q9->Visible = false;
			// 
			// Op5Q8
			// 
			this->Op5Q8->AutoSize = true;
			this->Op5Q8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op5Q8->Location = System::Drawing::Point(22, 186);
			this->Op5Q8->Name = L"Op5Q8";
			this->Op5Q8->Size = System::Drawing::Size(68, 20);
			this->Op5Q8->TabIndex = 60;
			this->Op5Q8->Text = L"Should";
			this->Op5Q8->UseVisualStyleBackColor = true;
			this->Op5Q8->Visible = false;
			// 
			// Op6Q8
			// 
			this->Op6Q8->AutoSize = true;
			this->Op6Q8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op6Q8->Location = System::Drawing::Point(96, 187);
			this->Op6Q8->Name = L"Op6Q8";
			this->Op6Q8->Size = System::Drawing::Size(91, 20);
			this->Op6Q8->TabIndex = 60;
			this->Op6Q8->Text = L"encourage";
			this->Op6Q8->UseVisualStyleBackColor = true;
			this->Op6Q8->Visible = false;
			// 
			// Op7Q8
			// 
			this->Op7Q8->AutoSize = true;
			this->Op7Q8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op7Q8->Location = System::Drawing::Point(193, 186);
			this->Op7Q8->Name = L"Op7Q8";
			this->Op7Q8->Size = System::Drawing::Size(61, 20);
			this->Op7Q8->TabIndex = 60;
			this->Op7Q8->Text = L"to turn";
			this->Op7Q8->UseVisualStyleBackColor = true;
			this->Op7Q8->Visible = false;
			// 
			// Op8Q8
			// 
			this->Op8Q8->AutoSize = true;
			this->Op8Q8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op8Q8->Location = System::Drawing::Point(260, 187);
			this->Op8Q8->Name = L"Op8Q8";
			this->Op8Q8->Size = System::Drawing::Size(65, 20);
			this->Op8Q8->TabIndex = 60;
			this->Op8Q8->Text = L"calling";
			this->Op8Q8->UseVisualStyleBackColor = true;
			this->Op8Q8->Visible = false;
			// 
			// Op1Q8
			// 
			this->Op1Q8->AutoSize = true;
			this->Op1Q8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op1Q8->Location = System::Drawing::Point(22, 89);
			this->Op1Q8->Name = L"Op1Q8";
			this->Op1Q8->Size = System::Drawing::Size(61, 20);
			this->Op1Q8->TabIndex = 60;
			this->Op1Q8->Text = L"whole";
			this->Op1Q8->UseVisualStyleBackColor = true;
			this->Op1Q8->Visible = false;
			// 
			// Op2Q8
			// 
			this->Op2Q8->AutoSize = true;
			this->Op2Q8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op2Q8->Location = System::Drawing::Point(89, 89);
			this->Op2Q8->Name = L"Op2Q8";
			this->Op2Q8->Size = System::Drawing::Size(63, 20);
			this->Op2Q8->TabIndex = 60;
			this->Op2Q8->Text = L"carton";
			this->Op2Q8->UseVisualStyleBackColor = true;
			this->Op2Q8->Visible = false;
			// 
			// Op3Q8
			// 
			this->Op3Q8->AutoSize = true;
			this->Op3Q8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op3Q8->Location = System::Drawing::Point(156, 89);
			this->Op3Q8->Name = L"Op3Q8";
			this->Op3Q8->Size = System::Drawing::Size(64, 20);
			this->Op3Q8->TabIndex = 60;
			this->Op3Q8->Text = L"recipe";
			this->Op3Q8->UseVisualStyleBackColor = true;
			this->Op3Q8->Visible = false;
			// 
			// Op4Q8
			// 
			this->Op4Q8->AutoSize = true;
			this->Op4Q8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Op4Q8->Location = System::Drawing::Point(223, 89);
			this->Op4Q8->Name = L"Op4Q8";
			this->Op4Q8->Size = System::Drawing::Size(60, 20);
			this->Op4Q8->TabIndex = 60;
			this->Op4Q8->Text = L"a little";
			this->Op4Q8->UseVisualStyleBackColor = true;
			this->Op4Q8->Visible = false;
			// 
			// R
			// 
			this->R->BackColor = System::Drawing::Color::LightSteelBlue;
			this->R->Location = System::Drawing::Point(10, 9);
			this->R->Name = L"R";
			this->R->Size = System::Drawing::Size(405, 244);
			this->R->TabIndex = 61;
			this->R->TabStop = false;
			this->R->Visible = false;
			// 
			// Results
			// 
			this->Results->AutoSize = true;
			this->Results->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Results->Location = System::Drawing::Point(157, 15);
			this->Results->Name = L"Results";
			this->Results->Size = System::Drawing::Size(104, 20);
			this->Results->TabIndex = 62;
			this->Results->Text = L"Результаты:";
			this->Results->Visible = false;
			// 
			// Score1
			// 
			this->Score1->AutoSize = true;
			this->Score1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Score1->Location = System::Drawing::Point(82, 40);
			this->Score1->Name = L"Score1";
			this->Score1->Size = System::Drawing::Size(262, 16);
			this->Score1->TabIndex = 63;
			this->Score1->Text = L"Поздравляем! Вы набрали ___ балл/ов.";
			this->Score1->Visible = false;
			// 
			// Recommendations
			// 
			this->Recommendations->AutoSize = true;
			this->Recommendations->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Recommendations->Location = System::Drawing::Point(26, 70);
			this->Recommendations->Name = L"Recommendations";
			this->Recommendations->Size = System::Drawing::Size(104, 16);
			this->Recommendations->TabIndex = 64;
			this->Recommendations->Text = L"Рекомендации";
			this->Recommendations->Visible = false;
			// 
			// MainMenu
			// 
			this->MainMenu->BackColor = System::Drawing::Color::GhostWhite;
			this->MainMenu->Location = System::Drawing::Point(307, 226);
			this->MainMenu->Name = L"MainMenu";
			this->MainMenu->Size = System::Drawing::Size(102, 23);
			this->MainMenu->TabIndex = 65;
			this->MainMenu->Text = L"В главное меню";
			this->MainMenu->UseVisualStyleBackColor = false;
			this->MainMenu->Visible = false;
			this->MainMenu->Click += gcnew System::EventHandler(this, &MyForm::MainMenu_Click);
			// 
			// Restart
			// 
			this->Restart->BackColor = System::Drawing::Color::GhostWhite;
			this->Restart->Location = System::Drawing::Point(148, 226);
			this->Restart->Name = L"Restart";
			this->Restart->Size = System::Drawing::Size(131, 23);
			this->Restart->TabIndex = 65;
			this->Restart->Text = L"Пройти тест заново";
			this->Restart->UseVisualStyleBackColor = false;
			this->Restart->Visible = false;
			this->Restart->Click += gcnew System::EventHandler(this, &MyForm::Restart_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(429, 265);
			this->Controls->Add(this->Restart);
			this->Controls->Add(this->MainMenu);
			this->Controls->Add(this->Recommendations);
			this->Controls->Add(this->Score1);
			this->Controls->Add(this->Results);
			this->Controls->Add(this->R);
			this->Controls->Add(this->Que94);
			this->Controls->Add(this->NextQ9);
			this->Controls->Add(this->TimeQ9);
			this->Controls->Add(this->Qp2Q9);
			this->Controls->Add(this->Op1Q9);
			this->Controls->Add(this->Que93);
			this->Controls->Add(this->Que92);
			this->Controls->Add(this->Que91);
			this->Controls->Add(this->Question9);
			this->Controls->Add(this->Q9);
			this->Controls->Add(this->Op8Q8);
			this->Controls->Add(this->Op7Q8);
			this->Controls->Add(this->Op6Q8);
			this->Controls->Add(this->Op4Q8);
			this->Controls->Add(this->Op3Q8);
			this->Controls->Add(this->Op2Q8);
			this->Controls->Add(this->Op1Q8);
			this->Controls->Add(this->Op5Q8);
			this->Controls->Add(this->TextBox2Q8);
			this->Controls->Add(this->TextBox1Q8);
			this->Controls->Add(this->Que82);
			this->Controls->Add(this->Que81);
			this->Controls->Add(this->Question8);
			this->Controls->Add(this->NextQ8);
			this->Controls->Add(this->Q8);
			this->Controls->Add(this->Op6Q7);
			this->Controls->Add(this->Op5Q7);
			this->Controls->Add(this->Op9Q7);
			this->Controls->Add(this->Op3Q7);
			this->Controls->Add(this->Op8Q7);
			this->Controls->Add(this->Op4Q7);
			this->Controls->Add(this->Op7Q7);
			this->Controls->Add(this->Op2Q7);
			this->Controls->Add(this->Op1Q7);
			this->Controls->Add(this->Que72);
			this->Controls->Add(this->Que73);
			this->Controls->Add(this->Que71);
			this->Controls->Add(this->PicQ7);
			this->Controls->Add(this->Question7);
			this->Controls->Add(this->NextQ7);
			this->Controls->Add(this->Q7);
			this->Controls->Add(this->NextQ6);
			this->Controls->Add(this->Op2Q6);
			this->Controls->Add(this->Op3Q6);
			this->Controls->Add(this->Op1Q6);
			this->Controls->Add(this->PicQ6);
			this->Controls->Add(this->Question6);
			this->Controls->Add(this->Q6);
			this->Controls->Add(this->Op4Q5);
			this->Controls->Add(this->Op3Q5);
			this->Controls->Add(this->Op2Q5);
			this->Controls->Add(this->Op1Q5);
			this->Controls->Add(this->Que52);
			this->Controls->Add(this->Que51);
			this->Controls->Add(this->PicQ5);
			this->Controls->Add(this->Question5);
			this->Controls->Add(this->NextQ5);
			this->Controls->Add(this->Q5);
			this->Controls->Add(this->TextBoxQ4);
			this->Controls->Add(this->PicQ4);
			this->Controls->Add(this->Question4);
			this->Controls->Add(this->NextQ4);
			this->Controls->Add(this->Q4);
			this->Controls->Add(this->Que34);
			this->Controls->Add(this->ComboQ3);
			this->Controls->Add(this->NextQ3);
			this->Controls->Add(this->Que33);
			this->Controls->Add(this->Que32);
			this->Controls->Add(this->Que31);
			this->Controls->Add(this->Question3);
			this->Controls->Add(this->Q3);
			this->Controls->Add(this->NextQ2);
			this->Controls->Add(this->Op2Q2);
			this->Controls->Add(this->Op4Q2);
			this->Controls->Add(this->Op3Q2);
			this->Controls->Add(this->Op1Q2);
			this->Controls->Add(this->Question2);
			this->Controls->Add(this->PicQ2);
			this->Controls->Add(this->Q2);
			this->Controls->Add(this->PicQ1);
			this->Controls->Add(this->NextQ1);
			this->Controls->Add(this->Op3Q1);
			this->Controls->Add(this->Op2Q1);
			this->Controls->Add(this->Op1Q1);
			this->Controls->Add(this->Que1);
			this->Controls->Add(this->Question1);
			this->Controls->Add(this->Q1);
			this->Controls->Add(this->EngTextLabel);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Algorytm);
			this->Controls->Add(this->Start);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(445, 304);
			this->MinimumSize = System::Drawing::Size(445, 304);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Тестирование";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicQ1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicQ2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicQ4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicQ5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicQ6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicQ7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Q9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->R))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int score = 0;
		int TimeLeft = 16;
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void Algorytm_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("В тесте 9 вопросов.\n За каждый правильный ответ добавляется 1 балл.\n 1 - 5 баллов - начинающий уровень;\nВы понимаете, как использовать простые фразы и\nпонимаете лёгкие и простые темы.\n 6 - 10 баллов - средний уровень;\nВы понимаете основные мысли, хорошо общаетесь\nна знакомые темы, можете вести стандартный разговор;\n 11 - 15 баллов - продвинутый уровень;\nВы понимаете сложные тексты и диалоги,\nвыражаете глубокие и сложные мысли,\nумеете говорить на профессиональные темы");

	}
	private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {
		Start->Visible = false;
		Algorytm->Visible = false;
		Exit->Visible = false;
		EngTextLabel->Visible = false;

		Question1->Visible = true;
		PicQ1->Visible = true;
		Que1->Visible = true;
		Op1Q1->Visible = true;
		Op2Q1->Visible = true;
		Op3Q1->Visible = true;
		NextQ1->Visible = true;
		this->PicQ1->Image = System::Drawing::Image::FromFile("D:\\PicQ1.png");
	}
	private: System::Void NextQ1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Op1Q1->Checked)
			score += 1;
		Question1->Visible = false;
		PicQ1->Visible = false;
		Que1->Visible = false;
		Op1Q1->Visible = false;
		Op2Q1->Visible = false;
		Op3Q1->Visible = false;
		NextQ1->Visible = false;

		Question2->Visible = true;
		PicQ2->Visible = true;
		Op1Q2->Visible = true;
		Op2Q2->Visible = true;
		Op3Q2->Visible = true;
		Op4Q2->Visible = true;
		NextQ2->Visible = true;
		this->PicQ2->Image = System::Drawing::Image::FromFile("D:\\PicQ2.jpg");
	}
	private: System::Void NextQ2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Op3Q2->Checked)
			score += 1;
		Question2->Visible = false;
		PicQ2->Visible = false;
		Op1Q2->Visible = false;
		Op2Q2->Visible = false;
		Op3Q2->Visible = false;
		Op4Q2->Visible = false;
		NextQ2->Visible = false;

		Question3->Visible = true;
		Que31->Visible = true;
		Que32->Visible = true;
		Que33->Visible = true;
		Que34->Visible = true;
		ComboQ3->Visible = true;
		NextQ3->Visible = true;
	}
	private: System::Void NextQ3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ComboQ3->Text == "exiting")
			score += 1;

		Question3->Visible = false;
		Que31->Visible = false;
		Que32->Visible = false;
		Que33->Visible = false;
		Que34->Visible = false;
		ComboQ3->Visible = false;
		NextQ3->Visible = false;

		Question4->Visible = true;
		PicQ4->Visible = true;
		TextBoxQ4->Visible = true;
		NextQ4->Visible = true;
		this->PicQ4->Image = System::Drawing::Image::FromFile("D:\\PicQ4.png");

	}
	private: System::Void TextBoxQ4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= 'A' && e->KeyChar <= 'Z') ||
			(e->KeyChar >= 'a' && e->KeyChar <= 'z') ||
			Char::IsControl(e->KeyChar))) {
			e->Handled = true;
		}
		if (Char::IsControl(e->KeyChar)) {
			if (e->KeyChar == (char)Keys::Enter)
				NextQ4->Focus();
			return;
		}
	}
	private: System::Void NextQ4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TextBoxQ4->Text->Trim()->ToLower() == "plane")
			score += 1;

		Question4->Visible = false;
		PicQ4->Visible = false;
		TextBoxQ4->Visible = false;
		NextQ4->Visible = false;

		Question5->Visible = true;
		PicQ5->Visible = true;
		Que51->Visible = true;
		Que52->Visible = true;
		Op1Q5->Visible = true;
		Op2Q5->Visible = true;
		Op3Q5->Visible = true;
		Op4Q5->Visible = true;
		NextQ5->Visible = true;
		this->PicQ5->Image = System::Drawing::Image::FromFile("D:\\PicQ5.jpg");
	}
	private: System::Void NextQ5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Op1Q5->Checked && !Op2Q5->Checked && !Op3Q5->Checked && Op4Q5->Checked)
			score += 2;
		Question5->Visible = false;
		PicQ5->Visible = false;
		Que51->Visible = false;
		Que52->Visible = false;
		Op1Q5->Visible = false;
		Op2Q5->Visible = false;
		Op3Q5->Visible = false;
		Op4Q5->Visible = false;
		NextQ5->Visible = false;

		Question6->Visible = true;
		PicQ6->Visible = true;
		Op1Q6->Visible = true;
		Op2Q6->Visible = true;
		Op3Q6->Visible = true;
		NextQ6->Visible = true;
		this->PicQ6->Image = System::Drawing::Image::FromFile("D:\\PicQ6.jpg");
	}
	private: System::Void NextQ6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Op2Q6->Checked)
			score += 1;

		Question6->Visible = false;
		PicQ6->Visible = false;
		Op1Q6->Visible = false;
		Op2Q6->Visible = false;
		Op3Q6->Visible = false;
		NextQ6->Visible = false;

		Question7->Visible = true;
		PicQ7->Visible = true;
		Op1Q7->Visible = true;
		Op2Q7->Visible = true;
		Op3Q7->Visible = true;
		Op4Q7->Visible = true;
		Op5Q7->Visible = true;
		Op6Q7->Visible = true;
		Op7Q7->Visible = true;
		Op8Q7->Visible = true;
		Op9Q7->Visible = true;
		Que71->Visible = true;
		Que72->Visible = true;
		Que73->Visible = true;
		NextQ7->Visible = true;
		this->PicQ7->Image = System::Drawing::Image::FromFile("D:\\PicQ7.jpg");
	}
	private: System::Void NextQ7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Op2Q7->Checked && Op4Q7->Checked && Op9Q7->Checked && !Op1Q7->Checked && !Op3Q7->Checked && !Op5Q7->Checked && !Op6Q7->Checked && !Op7Q7->Checked && !Op8Q7->Checked)
			score += 3;

		Question7->Visible = false;
		PicQ7->Visible = false;
		Op1Q7->Visible = false;
		Op2Q7->Visible = false;
		Op3Q7->Visible = false;
		Op4Q7->Visible = false;
		Op5Q7->Visible = false;
		Op6Q7->Visible = false;
		Op7Q7->Visible = false;
		Op8Q7->Visible = false;
		Op9Q7->Visible = false;
		Que71->Visible = false;
		Que72->Visible = false;
		Que73->Visible = false;
		NextQ7->Visible = false;

		Question8->Visible = true;
		Que81->Visible = true;
		Que82->Visible = true;
		Op1Q8->Visible = true;
		Op2Q8->Visible = true;
		Op3Q8->Visible = true;
		Op4Q8->Visible = true;
		Op5Q8->Visible = true;
		Op6Q8->Visible = true;
		Op7Q8->Visible = true;
		Op8Q8->Visible = true;
		TextBox1Q8->Visible = true;
		TextBox2Q8->Visible = true;
		NextQ8->Visible = true;
	}
	private: System::Void TextBox1Q8_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= 'A' && e->KeyChar <= 'Z') ||
			(e->KeyChar >= 'a' && e->KeyChar <= 'z') || e->KeyChar == ' ' ||
			Char::IsControl(e->KeyChar))) {
			e->Handled = true;
		}
		if (Char::IsControl(e->KeyChar)) {
			if (e->KeyChar == (char)Keys::Enter)
				TextBox2Q8->Focus();
			return;
		}
	}
	private: System::Void TextBox2Q8_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= 'A' && e->KeyChar <= 'Z') ||
			(e->KeyChar >= 'a' && e->KeyChar <= 'z') || e->KeyChar == ' ' ||
			Char::IsControl(e->KeyChar))) {
			e->Handled = true;
		}
		if (Char::IsControl(e->KeyChar)) {
			if (e->KeyChar == (char)Keys::Enter)
				NextQ8->Focus();
			return;
		}
	}
	private: System::Void NextQ8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Op4Q8->Checked && !Op3Q8->Checked && !Op2Q8->Checked && !Op1Q8->Checked)
			score += 1;
		if (Op5Q8->Checked && !Op6Q8->Checked && !Op7Q8->Checked && !Op8Q8->Checked)
			score += 1;
		if (TextBox1Q8->Text->Trim()->ToLower() == "a few")
			score += 1;
		if (TextBox2Q8->Text->Trim()->ToLower() == "if")
			score += 1;

		Question8->Visible = false;
		Que81->Visible = false;
		Que82->Visible = false;
		Op1Q8->Visible = false;
		Op2Q8->Visible = false;
		Op3Q8->Visible = false;
		Op4Q8->Visible = false;
		Op5Q8->Visible = false;
		Op6Q8->Visible = false;
		Op7Q8->Visible = false;
		Op8Q8->Visible = false;
		TextBox1Q8->Visible = false;
		TextBox2Q8->Visible = false;
		NextQ8->Visible = false;

		Question9->Visible = true;
		Que91->Visible = true;
		Que92->Visible = true;
		Que93->Visible = true;
		Que94->Visible = true;
		Op1Q9->Visible = true;
		Qp2Q9->Visible = true;
		TimeQ9->Visible = true;
		NextQ9->Visible = true;
	}
	private: System::Void TimerQ9_Tick(System::Object^ sender, System::EventArgs^ e) {
		TimeLeft--;
		TimeQ9->Text = "Осталось: " + TimeLeft.ToString() + " сек";

		if (TimeLeft <= 0) {
			TimerQ9->Stop();
			NextQ9_Click(nullptr, nullptr);
		}
	}
	private: System::Void NextQ9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Qp2Q9->Checked)
			score += 1;

		Question9->Visible = false;
		Que91->Visible = false;
		Que92->Visible = false;
		Que93->Visible = false;
		Que94->Visible = false;
		Op1Q9->Visible = false;
		Qp2Q9->Visible = false;
		TimeQ9->Visible = false;
		NextQ9->Visible = false;

		Results->Visible = true;
		Score1->Visible = true;
		Recommendations->Visible = true;
		MainMenu->Visible = true;
		Restart->Visible = true;

		Score1->Text = "Поздравляем! Вы набрали " + score + " балл/ов.";
		if (score <= 5)
			Recommendations->Text = "Вы только начинаете изучать английский язык.\nВы можете понять простые слова и базовые предложения,\nно вам трудно поддержать обычный диалог.\nЧтобы улучшить свои знания, попробуйте смотреть\nфильмы на английском языке,\nчтобы привыкнуть к речи иностранцев,\nпопробуйте написать карточки\nс простыми словами и фразами";
		if (score >= 6 && score <= 10)
			Recommendations->Text = "Вы - пользователь со средним знанием английского языка.\nВы можете поддерживать беседу и составлять сложные\nпредложения, использовать сложные слова.\nЧтобы начать двигаться к продвинутым знаниям,\nначните читать профессиональные книги,\nнаписанные простым и понятным языком.";
		if (score >= 11 && score <= 16)
			Recommendations->Text = "Скорее всего вы приближены к продвинутому знанию\nанглийского языка,Вы способны поддерживать глубокие\nдискуссии и разговаривать на профессиональные темы,\nиспользовать английский сленг.\nЧтобы ещё больше улучшить свои знания,\nпопробуйте общаться с носителями\nна сложные темы, например политика или наука.";
	}
	private: System::Void TimeQ9_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		if (TimeQ9->Visible)
			TimerQ9->Start();
		else
			TimerQ9->Stop();
	}
	private: System::Void Restart_Click(System::Object^ sender, System::EventArgs^ e) {
		score = 0;

		Results->Visible = false;
		Score1->Visible = false;
		Recommendations->Visible = false;
		MainMenu->Visible = false;
		Restart->Visible = false;

		for each (Control ^ c in this->Controls) {
			CheckBox^ cb = dynamic_cast<CheckBox^>(c);
			RadioButton^ rb = dynamic_cast<RadioButton^>(c);

			if (cb != nullptr) cb->Checked = false;
			if (rb != nullptr) rb->Checked = false;
		}

		for each (Control ^ c in this->Controls) {
			TextBox^ tb = dynamic_cast<TextBox^>(c);
			if (tb != nullptr) tb->Clear();
		}

		for each (Control ^ c in this->Controls) {
			ComboBox^ cb = dynamic_cast<ComboBox^>(c);
			if (cb != nullptr) cb->SelectedIndex = -1;
		}

		TimeLeft = 16;

		Start_Click(nullptr, nullptr);
	}
	private: System::Void MainMenu_Click(System::Object^ sender, System::EventArgs^ e) {
		score = 0;

		Results->Visible = false;
		Score1->Visible = false;
		Recommendations->Visible = false;
		MainMenu->Visible = false;
		Restart->Visible = false;

		Start->Visible = true;
		Algorytm->Visible = true;
		Exit->Visible = true;
		EngTextLabel->Visible = true;

		for each (Control ^ c in this->Controls) {
			CheckBox^ cb = dynamic_cast<CheckBox^>(c);
			RadioButton^ rb = dynamic_cast<RadioButton^>(c);

			if (cb != nullptr) cb->Checked = false;
			if (rb != nullptr) rb->Checked = false;
		}

		for each (Control ^ c in this->Controls) {
			TextBox^ tb = dynamic_cast<TextBox^>(c);
			if (tb != nullptr) tb->Clear();
		}

		for each (Control ^ c in this->Controls) {
			ComboBox^ cb = dynamic_cast<ComboBox^>(c);
			if (cb != nullptr) cb->SelectedIndex = -1;
		}
		TimeLeft = 16;
	}
	};
}
