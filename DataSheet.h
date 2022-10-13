#pragma once
#include "AttendanceSheet.h"
namespace attendancesystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for DataSheet
	/// </summary>
	public ref class DataSheet : public System::Windows::Forms::Form
	{
	public:
		DataSheet(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DataSheet()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 

	protected: 

	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DataSheet::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(884, 469);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Controls->Add(this->button20);
			this->tabPage1->Controls->Add(this->button16);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(876, 440);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Attendance Data";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &DataSheet::tabPage1_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(257, 379);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(101, 23);
			this->button20->TabIndex = 15;
			this->button20->Text = L"Search";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &DataSheet::button20_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(769, 413);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(101, 23);
			this->button16->TabIndex = 14;
			this->button16->Text = L"Exit";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &DataSheet::button16_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(425, 6);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(448, 404);
			this->listBox1->TabIndex = 13;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DataSheet::listBox1_SelectedIndexChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(194, 124);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(164, 23);
			this->textBox3->TabIndex = 12;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(194, 86);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(164, 23);
			this->textBox2->TabIndex = 11;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(194, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(164, 23);
			this->textBox1->TabIndex = 1;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(662, 414);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(101, 23);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Back";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &DataSheet::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(151, 408);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(207, 23);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Sheet";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &DataSheet::button7_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(257, 350);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 23);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Clear";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &DataSheet::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(43, 408);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 23);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Update";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &DataSheet::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(151, 379);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Load";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &DataSheet::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(43, 379);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Save";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DataSheet::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(150, 350);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DataSheet::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(43, 350);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DataSheet::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(40, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Last Name :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(36, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Second Name :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(40, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name :";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button19);
			this->tabPage2->Controls->Add(this->button18);
			this->tabPage2->Controls->Add(this->button17);
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Controls->Add(this->button15);
			this->tabPage2->Controls->Add(this->button14);
			this->tabPage2->Controls->Add(this->button13);
			this->tabPage2->Controls->Add(this->button12);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(876, 440);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Vacation Data";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(254, 379);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(100, 23);
			this->button19->TabIndex = 16;
			this->button19->Text = L"Search";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &DataSheet::button19_Click_1);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(42, 379);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(100, 23);
			this->button18->TabIndex = 15;
			this->button18->Text = L"save";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &DataSheet::button18_Click_2);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(664, 414);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(100, 23);
			this->button17->TabIndex = 14;
			this->button17->Text = L"Back";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &DataSheet::button17_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(422, 6);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(448, 404);
			this->listBox2->TabIndex = 13;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &DataSheet::listBox2_SelectedIndexChanged);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(770, 414);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(100, 23);
			this->button15->TabIndex = 12;
			this->button15->Text = L"Exit";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &DataSheet::button15_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(254, 350);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(100, 23);
			this->button14->TabIndex = 11;
			this->button14->Text = L"Clear";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &DataSheet::button14_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(42, 408);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 23);
			this->button13->TabIndex = 10;
			this->button13->Text = L"Update";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &DataSheet::button13_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(148, 379);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 23);
			this->button12->TabIndex = 9;
			this->button12->Text = L"Load";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &DataSheet::button12_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(148, 408);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(206, 23);
			this->button11->TabIndex = 8;
			this->button11->Text = L"Report";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &DataSheet::button11_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(148, 350);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 23);
			this->button10->TabIndex = 7;
			this->button10->Text = L"Remove";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &DataSheet::button10_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(42, 350);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 23);
			this->button9->TabIndex = 6;
			this->button9->Text = L"Add";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &DataSheet::button9_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(190, 131);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(164, 23);
			this->textBox6->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(190, 98);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(164, 23);
			this->textBox5->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label6->Location = System::Drawing::Point(39, 138);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 16);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Last Name :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label5->Location = System::Drawing::Point(35, 98);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 16);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Second Name :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label4->Location = System::Drawing::Point(39, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"First Name :";
			this->label4->Click += gcnew System::EventHandler(this, &DataSheet::label4_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(190, 60);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(164, 23);
			this->textBox4->TabIndex = 0;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// DataSheet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(886, 468);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"DataSheet";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DataSheet";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ box1= Convert::ToString(textBox1->Text);
			String^ box2= Convert::ToString(textBox2->Text);
			String^ box3= Convert::ToString(textBox3->Text);
			String^ full_name=box1+" " +box2 + " " + box3;
			listBox1->Items->Add(full_name);
			textBox1->Text="";
			textBox2->Text="";
			textBox3->Text="";
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Items->Remove(listBox1->SelectedItem);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {


			 
			 String ^ fullname = textBox1->Text +" "+ textBox2->Text +" "+ textBox3->Text;
		     int index=listBox1->SelectedIndex;
		     listBox1->Items[index]=fullname;
			 textBox1->Text = "";
			 textBox2->Text ="";
			 textBox3->Text="";
				
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (listBox1->SelectedIndex!=-1)
			 {
			textBox1->Text="";
			textBox2->Text="";
			textBox3->Text="";
			String ^ updated_data= listBox1->SelectedItem->ToString();
			array<String^>^result;
			array<Char>^splitChars = {' '};
			result = updated_data->Split(splitChars);
			textBox1->Text=result[0];
		    textBox2->Text=result[1];
		    textBox3->Text=result[2];
			  }
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				listBox1->Items->Clear();
				/*textBox1->Text="";
				textBox2->Text="";
				textBox3->Text="";*/
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {

			 	 this -> Close ();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			   this-> saveFileDialog1->Filter="Text file|*.txt";
				saveFileDialog1->Title="Save A File";
				saveFileDialog1->ShowDialog();
				if(saveFileDialog1->FileName!="")
					{
						StreamWriter^ savefile= gcnew StreamWriter(saveFileDialog1->FileName);
				for(int i =0 ;i<listBox1->Items->Count;i++)
						savefile->WriteLine(listBox1->Items[i]);
						savefile->Close();
				}
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->openFileDialog1->Filter = "Text Files|*.txt";
			openFileDialog1->Title="Select a Text File";
			 if (openFileDialog1->ShowDialog() == System :: Windows::Forms::DialogResult::OK)
			 {
			 StreamReader^ readfile = gcnew  StreamReader(openFileDialog1->FileName);
			 while ( !readfile->EndOfStream)
			 {
			 listBox1 -> Items->Add(readfile->ReadLine());
			 }
			 readfile->Close();
			 } 
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ box1= Convert::ToString(textBox4->Text);
			String^ box2= Convert::ToString(textBox5->Text);
			String^ box3= Convert::ToString(textBox6->Text);
			String^ full_name=box1+" " +box2 + " " + box3;
			listBox2->Items->Add(full_name);
			textBox4->Text="";
			textBox5->Text="";
			textBox6->Text="";
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox2->Items->Remove(listBox2->SelectedItem);
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application :: Exit ();
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
				Application :: Exit ();
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
				 listBox2->Items->Clear();
				 textBox4->Text="";
				textBox5->Text="";
				textBox6->Text="";
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			   StreamWriter^ form = gcnew StreamWriter("Vacation Data.txt",true);
			 //form->WriteLine();
				for(int i=0;i<listBox2->Items->Count;i++)
				{
				 form->WriteLine(listBox2->Items[i]);
				}
				
				form->Close();
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {				
			 this->openFileDialog1->Filter = "Text Files|*.txt";
			openFileDialog1->Title="Select a Text File";
			 if (openFileDialog1->ShowDialog() == System :: Windows::Forms::DialogResult::OK)
			 {
			 StreamReader^ readfile = gcnew  StreamReader(openFileDialog1->FileName);
			 while ( !readfile->EndOfStream)
			 {
			 listBox2 -> Items->Add(readfile->ReadLine());
			 }
			 readfile->Close();
			 } 
		 }
private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			if (listBox2->SelectedIndex!=-1)
			 {
			textBox4->Text="";
			textBox5->Text="";
			textBox6->Text="";
			String ^ updated_data= listBox2->SelectedItem->ToString();
			array<String^>^result;
			array<Char>^splitChars = {' '};
			result = updated_data->Split(splitChars);
			textBox4->Text=result[0];
		    textBox5->Text=result[1];
		    textBox6->Text=result[2];
			  }
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			// String ^ updated_data =" ";
			 String^ fullname = textBox4->Text +" "+ textBox5->Text +" "+ textBox6->Text;
		     int index=listBox2->SelectedIndex;
		     listBox2->Items[index]=fullname;
			 textBox4->Text = "";
			 textBox5->Text ="";
			 textBox6->Text="";
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 AttendanceSheet^ attendance = gcnew AttendanceSheet();
			 attendance -> ShowDialog ();
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 this -> Close();
		 }
		
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
}
		 //function//
		 int splite_string2(String^ s)
		{
			 
				 
				 array<String^>^result;
				
				 result = s->Split(' ');
				 if (result[0]->ToLower()==textBox4->Text->ToLower() && result[1]->ToLower()==textBox5->Text->ToLower())
				 {
				 textBox4->Text=result[0];
				 textBox5->Text=result[1];
				 textBox6->Text=result[2];
				 return 1;
				 }
				 
		}
private: System::Void button18_Click_1(System::Object^  sender, System::EventArgs^  e) {
			/* StreamReader^ re=gcnew StreamReader("Holiday Data.txt");
			 String ^ reaad = re->ReadLine();
			  bool flag;
				 while (!re->EndOfStream)
				 {
					 if (splite_string(re->ReadLine()))
					 {
						 flag=true;
						 break;
                        
					 } 
				 }
			if(flag==false)
			{
			MessageBox::Show("The item doesn't found","Error",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			textBox4->Text="";
			textBox5->Text="";
			}
			re->Close();
			*/
		 }
		 //function//
		 /* int splite_string1(String^ s)
		{
			 
				 
				 array<String^>^result;
				
				 result = s->Split(' ');
				 if (result[0]->ToLower()==textBox1->Text->ToLower() && result[1]->ToLower()==textBox2->Text->ToLower())
				 {
				 textBox1->Text=result[0];
				 textBox2->Text=result[1];
				 textBox3->Text=result[2];
							 return 1;
				 }
				 
		}*/
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			/*this->openFileDialog1->Filter = "Text Files|*.txt";
			openFileDialog1->Title="Select a Text File";
			 if (openFileDialog1->ShowDialog() == System :: Windows::Forms::DialogResult::OK)
			 {
			 StreamReader ^ readfile = gcnew  StreamReader(openFileDialog1->FileName);
			
			
			  bool flag;
				 while (!readfile->EndOfStream)
				 {
					 if (splite_string1(readfile->ReadLine()))
					 {
						  flag=true;
						 break;
                        
					 } 
				 }
if(flag==false)
{
 MessageBox::Show("The item doesn't found","Error",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
textBox1->Text="";
textBox2->Text="";
			}


				 readfile->Close();
		 }*/
		 }
private: System::Void button18_Click_2(System::Object^  sender, System::EventArgs^  e) {

			  this-> saveFileDialog1->Filter="Text file|*.txt";
				saveFileDialog1->Title="Save A File";
				saveFileDialog1->ShowDialog();
				if(saveFileDialog1->FileName!="")
					{
						StreamWriter^ savefile= gcnew StreamWriter(saveFileDialog1->FileName);
					for(int i =0 ;i<listBox1->Items->Count;i++)
						savefile->WriteLine(listBox1->Items[i]);
						savefile->Close();
					}
		 }

		 //function
		  /*int splite_string(String^ s)
		{
			//array<String^>^result;
			//array<Char>^splitChars = {'\t',' '}; 
				 
				 array<String^>^result;
				 result = s->Split(' ');
				 if (result[0]->ToLower()==textBox4->Text->ToLower() && result[1]->ToLower()==textBox5->Text->ToLower() )
				 {
				 textBox4->Text=result[0];
				 textBox5->Text=result[1];
				 textBox6->Text=result[2];
							 return 1;
				 }
		 }*/

private: System::Void button19_Click_1(System::Object^  sender, System::EventArgs^  e) {
			bool flag;
			this->openFileDialog1->Filter = "Text Files|*.txt";
			openFileDialog1->Title="Select a Text File";
			 if (openFileDialog1->ShowDialog() == System :: Windows::Forms::DialogResult::OK)
			 {
			 StreamReader^ readfile = gcnew  StreamReader(openFileDialog1->FileName);
				 while (!readfile->EndOfStream)
				 {
					 if (splite_string2(readfile->ReadLine()))
					 {
						 flag=true;
						 break;
                        
					 } 
				 }
				 readfile->Close();
			 }	
			 if (flag == false)
				{
					MessageBox::Show("Item doesn't found","Error",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
					textBox4->Text = "";
					textBox5->Text ="";
				}
		 }
		 int splite_string1(String^ s)
		{
			//array<String^>^result;
			//array<Char>^splitChars = {'\t',' '}; 
				 
				 array<String^>^result;
				
				 result = s->Split(' ');
				 if (result[0]->ToLower()==textBox1->Text->ToLower() && result[1]->ToLower()==textBox2->Text->ToLower() )
				 {
				 textBox1->Text=result[0];
				 textBox2->Text=result[1];
				 textBox3->Text=result[2];
							 return 1;
				 }
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			bool flag;
			this->openFileDialog1->Filter = "Text Files|*.txt";
			openFileDialog1->Title="Select a Text File";
			 if (openFileDialog1->ShowDialog() == System :: Windows::Forms::DialogResult::OK)
			 {
			 StreamReader ^ readfile = gcnew  StreamReader(openFileDialog1->FileName);
				 while (!readfile->EndOfStream)
				 {
					 if (splite_string1(readfile->ReadLine()))
					 {
						 flag=true;
						 break;
                        
					 } 
				 }
				 readfile->Close();
			 }
			 if (flag == false)
				{
					MessageBox::Show("Item doesn't found","Error",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
					textBox1->Text = "";
					textBox2->Text ="";
			 }
		 }
};
}
