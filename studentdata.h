#pragma once
#include"StudentAttendance.h"
namespace attendancesystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for studentdata
	/// </summary>
	public ref class studentdata : public System::Windows::Forms::Form
	{
	public:
		studentdata(void)
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
		~studentdata()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(studentdata::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(580, 7);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(458, 420);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &studentdata::listBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(60, 364);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &studentdata::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(300, 127);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 23);
			this->textBox1->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"first", L"second", L"third", L"fourth"});
			this->comboBox1->Location = System::Drawing::Point(300, 26);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(180, 24);
			this->comboBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(56, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Academic year :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(56, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Section ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(56, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"First Name :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(56, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Second Name :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(56, 227);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Last name :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(300, 177);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(180, 23);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(300, 227);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(180, 23);
			this->textBox3->TabIndex = 10;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10", L"11", L"12"});
			this->comboBox2->Location = System::Drawing::Point(300, 75);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(180, 24);
			this->comboBox2->TabIndex = 11;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(180, 364);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 28);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &studentdata::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(420, 363);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 28);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Save";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &studentdata::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(60, 399);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 28);
			this->button4->TabIndex = 14;
			this->button4->Text = L"load";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &studentdata::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(300, 399);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 28);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Update";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &studentdata::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(300, 363);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(112, 28);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Clear";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &studentdata::button6_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &studentdata::openFileDialog1_FileOk);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(419, 399);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(113, 28);
			this->button7->TabIndex = 17;
			this->button7->Text = L"Sheet";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &studentdata::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(806, 435);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(112, 28);
			this->button8->TabIndex = 18;
			this->button8->Text = L"Back";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &studentdata::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(926, 435);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(112, 28);
			this->button9->TabIndex = 19;
			this->button9->Text = L"Exit";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &studentdata::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(180, 399);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(112, 28);
			this->button10->TabIndex = 20;
			this->button10->Text = L"Search";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &studentdata::button10_Click);
			// 
			// studentdata
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1040, 468);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"studentdata";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"studentdata";
			this->Load += gcnew System::EventHandler(this, &studentdata::studentdata_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ combo1= Convert::ToString(comboBox1->SelectedItem);
			String^ combo2= Convert::ToString(comboBox2->SelectedItem);
			String^ box1= Convert::ToString(textBox1->Text);
			String^ box2= Convert::ToString(textBox2->Text);
			String^ box3= Convert::ToString(textBox3->Text);
			String^ full_data=combo1 + "\t"+combo2+"\t"+ box1+" " +box2 + " " + box3;
			listBox1->Items->Add(full_data);
			comboBox1->SelectedItem="";
			comboBox2->SelectedItem="";
			textBox1->Text="";
			textBox2->Text="";
			textBox3->Text="";
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Items->Remove(listBox1->SelectedItem);
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
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox1->Items->Clear();
			
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 StudentAttendance^ stdattend = gcnew StudentAttendance();
			 stdattend -> ShowDialog();		 
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application :: Exit ();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ fulldata =comboBox1->SelectedItem +"\t"+comboBox2->SelectedItem+"\t"+ textBox1->Text +" "+ textBox2->Text +" "+ textBox3->Text;
		     int index=listBox1->SelectedIndex;
		     listBox1->Items[index]=fulldata;	
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (listBox1->SelectedIndex!=-1)
			 {
			/*comboBox1->SelectedItem = "";
			comboBox2->SelectedItem = "";
			textBox1->Text="";
			textBox2->Text="";
			textBox3->Text="";*/
			String ^ updated_data= listBox1->SelectedItem->ToString();
			array<String^>^result;
			array<Char>^splitChars = {'\t',' '};         // array<String^>^result;    result = updated_data->Split('\t');   
			result = updated_data->Split(splitChars);
			comboBox1->SelectedItem= result [0];
			comboBox2->SelectedItem= result [1];
			textBox1->Text=result[2];
		    textBox2->Text=result[3];
		    textBox3->Text=result[4];

			  }
		 }
		 int splite_string(String^ s)
		{
			array<String^>^result;
			array<Char>^splitChars = {'\t',' '}; 
				 
				// array<String^>^result;
				
				// result = s->Split(' ');
				 if (result[0]==comboBox1->SelectedItem && result[1]==comboBox2->SelectedItem)
				 {
			     comboBox1->SelectedItem = result[0];
				 comboBox2->SelectedItem = result[1];
				 textBox1->Text=result[2];
				 textBox2->Text=result[3];
				 textBox3->Text=result[4];
				 return 1;
				 }
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 bool flag;
			this->openFileDialog1->Filter = "Text Files|*.txt";
			openFileDialog1->Title="Select a Text File";
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
			 if (flag == false)
				{
					MessageBox::Show("Item doesn't found","Error",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
					textBox1->Text = "";
					textBox2->Text ="";
			 }
		 }
private: System::Void studentdata_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
