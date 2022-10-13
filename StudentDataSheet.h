#pragma once
#include "StudentAttendance.h"
namespace attendancesystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for StudentDataSheet
	/// </summary>
	public ref class StudentDataSheet : public System::Windows::Forms::Form
	{
	public:
		StudentDataSheet(void)
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
		~StudentDataSheet()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentDataSheet::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 62);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Academic year :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 101);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Section :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(14, 145);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"First Name :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 183);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Second Name :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(14, 225);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Last Name :";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"first", L"second", L"third", L"fourth"});
			this->comboBox1->Location = System::Drawing::Point(192, 55);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(180, 24);
			this->comboBox1->TabIndex = 6;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10", L"11", L"12"});
			this->comboBox2->Location = System::Drawing::Point(192, 95);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(180, 24);
			this->comboBox2->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(192, 140);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 23);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(192, 178);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(180, 23);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(192, 220);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(180, 23);
			this->textBox3->TabIndex = 10;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(407, 15);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(610, 388);
			this->listBox1->TabIndex = 11;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentDataSheet::listBox1_SelectedIndexChanged_1);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(18, 318);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 28);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentDataSheet::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(140, 318);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 28);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StudentDataSheet::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(261, 318);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 28);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &StudentDataSheet::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(141, 354);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 28);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Save";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &StudentDataSheet::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(261, 354);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 28);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Load";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &StudentDataSheet::button5_Click_1);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(18, 389);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(112, 28);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Clear";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &StudentDataSheet::button6_Click_1);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(140, 389);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(112, 28);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Sheet";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(261, 389);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(112, 28);
			this->button8->TabIndex = 19;
			this->button8->Text = L"Close";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &StudentDataSheet::button8_Click_1);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(18, 354);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(112, 28);
			this->button10->TabIndex = 21;
			this->button10->Text = L"Search";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &StudentDataSheet::button10_Click_3);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(757, 414);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 22;
			this->button11->Text = L"Exit";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &StudentDataSheet::button11_Click);
			// 
			// StudentDataSheet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1030, 448);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"StudentDataSheet";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentDataSheet";
			this->Load += gcnew System::EventHandler(this, &StudentDataSheet::StudentDataSheet_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			if (listBox1->SelectedIndex!=-1)
			 {
			comboBox1->Text= "";
			comboBox2->Text= "";
			textBox1->Text="";
			textBox2->Text="";
			textBox3->Text="";
			String ^ updated_data= listBox1->SelectedItem->ToString();
			array<String^>^result;
			array<Char>^splitChars = {'\t',' '};
			result = updated_data->Split(splitChars);
			comboBox1->Text=result[0];
			comboBox2->Text=result[1];
			textBox1->Text=result[2];
		    textBox2->Text=result[3];
		    textBox3->Text=result[4];
			  }
			 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application :: Exit ();
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close ();
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 StudentAttendance^ stdattendance = gcnew StudentAttendance();
			 stdattendance -> ShowDialog();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ com1= Convert::ToString(comboBox1->SelectedItem);
			String^ com2= Convert::ToString(comboBox2->SelectedItem);
			String^ box1= Convert::ToString(textBox1->Text);
			String^ box2= Convert::ToString(textBox2->Text);
			String^ box3= Convert::ToString(textBox3->Text);
			String^ full_data = com1+"\t"+ com2 +"\t"+ box1 +" "+ box2+" "+ box3;
			listBox1->Items->Add(full_data);
			comboBox1->Text = "";
			comboBox2->Text="";
			textBox1->Text="";
			textBox2->Text="";
			textBox3->Text="";

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  listBox1->Items->Remove(listBox1->SelectedItem);
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			// String ^ updated_data ="";
			 String ^ fulldata = comboBox1->Text+"\t"+comboBox2->Text+"\t"+textBox1->Text +" "+ textBox2->Text +" "+ textBox3->Text;
		     int index=listBox1->SelectedIndex;
		     listBox1->Items[index]=fulldata;
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Items->Clear();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			  this->openFileDialog1->Filter = "Text Files|*.txt";
			openFileDialog1->Title="Select a Text File";
			 if (openFileDialog1->ShowDialog() == System :: Windows::Forms::DialogResult::OK)
			 {
			 StreamReader ^ readfile = gcnew  StreamReader(openFileDialog1->FileName);
			 while ( !readfile->EndOfStream)
			 {
			 listBox1 -> Items->Add(readfile->ReadLine());
			 }
			 readfile->Close();
			 } 
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
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




private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			  
		 }
		  
				 
		
private: System::Void button10_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
		 //function
		  int splite_string(String^ s)
		{
			 
				 
				 array<String^>^result;
				 array<Char>^splitChars = {'\t'};
				 result = s->Split(splitChars , StringSplitOptions::None );
				 if (result[0] == Convert::ToString(comboBox1->SelectedItem) &&result[1] == Convert::ToString(comboBox2->SelectedItem) )
				 {
					 textBox1->Text=result[2];
				 textBox2->Text=result[3];
				 textBox3->Text=result[4];
				 return 1;
				 }
				 
		}
		 
private: System::Void button10_Click_2(System::Object^  sender, System::EventArgs^  e) {
			


				
		 
		 }
private: System::Void StudentDataSheet_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button10_Click_3(System::Object^  sender, System::EventArgs^  e) {
			  this->openFileDialog1->Filter = "Text Files|*.txt";
			openFileDialog1->Title="Select a Text File";
			bool flag;
			 if (openFileDialog1->ShowDialog() == System :: Windows::Forms::DialogResult::OK)
			 {
			 StreamReader ^ readfile = gcnew  StreamReader(openFileDialog1->FileName);
			
			
			  
				 while (!readfile->EndOfStream)
				 {
					 if (splite_string(readfile->ReadLine()))
					 {
						 flag=true;
						 break;
                        
					 } 
				 }
				 
				 readfile->Close();
		 
			 }
if(flag==false)
{
 MessageBox::Show("The item doesn't found","Error",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
comboBox1->SelectedItem="";
comboBox2->SelectedItem="";
			}
		 }
private: System::Void button9_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Application :: Exit ();
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 String^ combo1=Convert::ToString(comboBox1->SelectedItem);
			String^ combo2=Convert::ToString(comboBox2->SelectedItem);
			 String^ box1= Convert::ToString(textBox1->Text);
			String^ box2= Convert::ToString(textBox2->Text);
			String^ box3= Convert::ToString(textBox3->Text);
			String^ full_name =combo1+"\t"+combo1+"\t"+ box1 + " " + box2 + " " + box3;
			listBox1->Items->Add(full_name);
			comboBox1->SelectedItem="";
			comboBox2->SelectedItem="";
			textBox1->Text="";
			textBox2->Text="";
			textBox3->Text="";

			
			
			
		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
listBox1->Items->Remove(listBox1->SelectedItem);
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application :: Exit ();
		 }
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
						 
		 }
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
				this->openFileDialog1->Filter = "Text Files|*.txt";
			openFileDialog1->Title="Select a Text File";
			 if (openFileDialog1->ShowDialog() == System :: Windows::Forms::DialogResult::OK)
			 {
			 StreamReader ^ readfile = gcnew  StreamReader(openFileDialog1->FileName);
			 while ( !readfile->EndOfStream)
			 {
			 listBox1 -> Items->Add(readfile->ReadLine());
			 }
			 readfile->Close();
			 } 
		 }
private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
textBox1->Text="";
			textBox2->Text="";
			textBox3->Text="";

			listBox1->Items->Clear();

		 }
private: System::Void listBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
			/* if(fullname->SelectedIndex !=-1)
			 {
				// ClearControls();
				 String ^ fullname= fullname->SelectedItem->ToString();
				 array<String^>^result;
				 array<Char>^splitChars = {''};
				 result = fullname->Split(splitChars);
				 //comboBox1->SelectedItem=result[0];
				// comboBox2->SelectedItem=result[1];
				 textBox1->Text=result[0];
				 textBox2->Text=result[1];
				 textBox3->Text=result[2];
				 
			 }*/
		 }
private: System::Void button8_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}
