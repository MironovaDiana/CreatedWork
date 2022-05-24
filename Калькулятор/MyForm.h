#pragma once
#include <math.h>

namespace Калькулятор {

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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;










	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		///содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Woman", L"Man" });
			this->comboBox1->Location = System::Drawing::Point(14, 61);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(145, 27);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L"Gender";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(47) {
				L"14", L"15", L"16", L"17", L"18", L"19", L"20",
					L"21", L"22", L"23", L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38",
					L"39", L"40", L"41", L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56",
					L"57", L"58", L"59", L"60"
			});
			this->comboBox2->Location = System::Drawing::Point(12, 102);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(147, 27);
			this->comboBox2->TabIndex = 2;
			this->comboBox2->Text = L"Age";
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(51) {
				L"150", L"151", L"152", L"153", L"154", L"155",
					L"156", L"157", L"158", L"159", L"160", L"161", L"162", L"163", L"164", L"165", L"166", L"167", L"168", L"169", L"170", L"171",
					L"172", L"173", L"174", L"175", L"176", L"177", L"178", L"179", L"180", L"181", L"182", L"183", L"184", L"185", L"186", L"187",
					L"188", L"189", L"190", L"191", L"192", L"193", L"194", L"195", L"196", L"197", L"198", L"199", L"200"
			});
			this->comboBox3->Location = System::Drawing::Point(13, 145);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(146, 27);
			this->comboBox3->TabIndex = 3;
			this->comboBox3->Text = L"Height,  cm";
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(51) {
				L"50", L"51", L"52", L"53", L"54", L"55", L"56",
					L"57", L"58", L"59", L"60", L"61", L"62", L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74",
					L"75", L"76", L"77", L"78", L"79", L"80", L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92",
					L"93", L"94", L"95", L"96", L"97", L"98", L"99", L"100"
			});
			this->comboBox4->Location = System::Drawing::Point(12, 187);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(147, 27);
			this->comboBox4->TabIndex = 4;
			this->comboBox4->Text = L"Weight, kg";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"ColorTube", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(190, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(244, 24);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Daily calorie intake:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"ColorTube", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(210, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 24);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Normal weight:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"ColorTube", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(440, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(157, 29);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"ColorTube", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(440, 101);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(157, 28);
			this->textBox2->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"ColorTube", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 31);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Go!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"ColorTube", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(126, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 31);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Want", L"Running 3 km/h", L"Running 8 km/h",
					L"Running up the stairs", L"Cycling 20 km/h", L"Jumping rope", L"Strength training", L"Skiing", L"Swimming is calm", L"Swimming is fast",
					L"Football", L"Dancing of medium intensity", L"High intensity dancing", L"Hiking", L"Walking with the dog", L"Roller skating",
					L"Yoga", L"Hockey", L"Basketball", L"Volleyball", L"Tenis"
			});
			this->comboBox5->Location = System::Drawing::Point(13, 324);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 27);
			this->comboBox5->TabIndex = 11;
			this->comboBox5->Text = L"Activity";
			// 
			// comboBox6
			// 
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44",
					L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60"
			});
			this->comboBox6->Location = System::Drawing::Point(12, 368);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(121, 27);
			this->comboBox6->TabIndex = 12;
			this->comboBox6->Text = L"Time, min";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"ColorTube", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(284, 368);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(150, 28);
			this->textBox3->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label3->Font = (gcnew System::Drawing::Font(L"ColorTube", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(175, 326);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(323, 24);
			this->label3->TabIndex = 14;
			this->label3->Text = L"How many calories burned:";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"ColorTube", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(14, 414);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 31);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Go!";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(358, 335);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(270, 196);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"ColorTube", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(285, 34);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Your parametrs:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"ColorTube", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 276);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(280, 34);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Some exercises:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumAquamarine;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(629, 529);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"Êàëüêóëÿòîð ôèçè÷åñêèõ íàãðóçîê";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double weight; double height;double age; bool human;  double norkkal; double bestweight; bool flag = false; 
	if ((comboBox2->Text->Length == 0) || (comboBox3->Text->Length == 0) || (comboBox4->Text->Length == 0)) {
		MessageBox::Show("Incorrect input!");

	}

		for (int i = 0;i < comboBox2->Text->Length; i++) {
			if ((comboBox2->Text[i] >= '0') && (comboBox2->Text[i] <= '9')) { flag = true; }
			else {
				flag = false;
				MessageBox::Show("Incorrect input!");
				comboBox2->Text = "Age";
				i = comboBox2->Text->Length;
			}
		}
		for (int i = 0;i < comboBox3->Text->Length; i++) {
			if ((comboBox3->Text[i] >= '0') && (comboBox3->Text[i] <= '9')) { flag = true; }
			else {
				flag = false;
				MessageBox::Show("Incorrect input!");
				comboBox3->Text = "Height,  cm";
				i = comboBox3->Text->Length;
			}
		}
		for (int i = 0;i < comboBox4->Text->Length; i++) {
			if ((comboBox4->Text[i] >= '0') && (comboBox4->Text[i] <= '9')) { flag = true; }
			else {
				flag = false;
				MessageBox::Show("Incorrect input!");
				comboBox4->Text = "Weight, kg";
				i = comboBox4->Text->Length;
			}
		}
	
	
	if (Check()) {
		weight = System::Convert::ToDouble(comboBox4->Text);
		height = System::Convert::ToDouble(comboBox3->Text);
		age = System::Convert::ToDouble(comboBox2->Text);
		if (comboBox1->Text == "Man") { human = 1; }
		if (comboBox1->Text == "Woman") { human = 0; }
		if (comboBox1->Text != "Man" && comboBox1->Text != "Woman") { MessageBox::Show("Choose your gender!"); }


		if (comboBox1->Text == "Man") {//ìóæ
			norkkal = floor((9.99 * weight + 6.25 * height - 4.92 * age + 5) * 1.375);//íîðìà êêàë
			bestweight = floor((height - 110) * 1.15);//èäåàëüíûé âåñ

		}
		else if (human == 0) {//æåí
			norkkal = floor((9.99 * weight + 6.25 * height - 4.92 * age - 161) * 1.375);//íîðìà êêàë
			bestweight = floor((height - 110) * 1.15);//èäåàëüíûé âåñ

		}
		else  MessageBox::Show("Choose your gender!");
		textBox1->Text = System::Convert::ToString(norkkal);
		textBox2->Text = System::Convert::ToString(bestweight);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	comboBox1->Text = "Gender"; comboBox2->Text = "Age"; comboBox3->Text = "Hight, ñì"; comboBox4->Text = "Wight, êã";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	double weight; double height;double age; double time;double kkal=weight; double res;
	if (Check()) {
		weight = System::Convert::ToDouble(comboBox4->Text);
		height = System::Convert::ToDouble(comboBox3->Text);
		age = System::Convert::ToDouble(comboBox2->Text);
		time = System::Convert::ToDouble(comboBox6->Text);
		//ïðîïèñûâàåì êêàë çà îòäåëüíûå óïðàæíåíèÿ
		if (comboBox5->Text == "Want") {
			res = ((0.035 * weight) + (8 / height) * 0.029 * weight) * time;
		}
		else if (comboBox5->Text == "Running 3 km/h") {
			res = 3 * weight * (time / 60);
		}
		else if (comboBox5->Text == "Running 8 km/h") {
			res = 8 * weight * (time / 60);
		}
		else if (comboBox5->Text == "Running up the stairs") {
			res = ((12.5 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "Cycling 20 km/h") {
			res = ((7.7 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "Jumping rope") {
			res = ((8 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "Strength training") {
			res = ((8.4 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "Skiing") {
			res = ((7 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "Swimming is calm") {
			res = ((4 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "Swimming is fast") {
			res = ((7 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "Football") {
			res = ((6 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "Dancing of medium intensity") {
			res = ((5 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "High intensity dancing") {
			res = ((6 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "Hiking") {
			res = ((5 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "Walking with the dog") {
			res = ((3 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "Roller skating") {
			res = ((4 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "Yoga") {
			res = ((3 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "Hockey") {
			res = ((4 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "Basketball") {
			res = ((5 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "Volleyball") {
			res = ((4 * weight) / 60) * time;
		}
		else if (comboBox5->Text == "Tenis") {
			res = ((6 * weight) / 60) * time;
		}
		else { MessageBox::Show("Incorrect input! /nindicated combustion at rest"); }
		kkal = weight;
		kkal = floor(kkal + res);
		textBox3->Text = System::Convert::ToString(kkal);

	}
	else { MessageBox::Show("Imput you parametrs!"); }
}
	   bool Check()
	   {
		   int k = 0; 
		   bool fl;
		   
		   if ((comboBox2->Text->Length == 0) || (comboBox3->Text->Length == 0) || (comboBox4->Text->Length == 0)) { return false; MessageBox::Show("Incorrect input!"); }
		   for (int i = 0; i < comboBox2->Text->Length; i++)
		   {
			   if (comboBox2->Text[i] == ',') { k++; }
			   else if ((comboBox2->Text[i] >= '0') && (comboBox2->Text[i] <= '9') && (k == 0 || k == 1) && fl == false) {}
			   else { 
				   return false;
			   }
		   }
		   k = 0;
		   for (int i = 0; i < comboBox3->Text->Length; i++)
		   {
			   if (comboBox3->Text[i] == ',') { k++; }
			   else if ((comboBox3->Text[i] >= '0') && (comboBox3->Text[i] <= '9') && (k == 0 || k == 1) && fl == false) {}
			   else { return false;
			   }
		   }
		   k = 0;
		   for (int i = 0; i < comboBox4->Text->Length; i++)
		   {
			   if (comboBox4->Text[i] == ',') { k++; }
			   else if ((comboBox4->Text[i] >= '0') && (comboBox4->Text[i] <= '9') && (k == 0 || k == 1) && fl == false) {}
			   else { return false;}
		   }
		   return true;
	   }



};
}
