#pragma once

namespace FIRSTGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblFirstName;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::Label^ lblSecondName;
	protected:

	protected:

	protected:


	private: System::Windows::Forms::TextBox^ txtSecondName;
	private: System::Windows::Forms::Label^ lbMessage;


	private: System::Windows::Forms::Button^ OKbutton;



	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ RESETbutton;


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
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lblSecondName = (gcnew System::Windows::Forms::Label());
			this->txtSecondName = (gcnew System::Windows::Forms::TextBox());
			this->lbMessage = (gcnew System::Windows::Forms::Label());
			this->OKbutton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->RESETbutton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblFirstName
			// 
			this->lblFirstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblFirstName->AutoSize = true;
			this->lblFirstName->Location = System::Drawing::Point(13, 39);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(86, 20);
			this->lblFirstName->TabIndex = 0;
			this->lblFirstName->Text = L"First Name";
			this->lblFirstName->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// txtFirstName
			// 
			this->txtFirstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtFirstName->Location = System::Drawing::Point(17, 78);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(366, 26);
			this->txtFirstName->TabIndex = 1;
			this->txtFirstName->Text = L"First Name";
			// 
			// lblSecondName
			// 
			this->lblSecondName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblSecondName->AutoSize = true;
			this->lblSecondName->Location = System::Drawing::Point(13, 123);
			this->lblSecondName->Name = L"lblSecondName";
			this->lblSecondName->Size = System::Drawing::Size(110, 20);
			this->lblSecondName->TabIndex = 2;
			this->lblSecondName->Text = L"Second Name";
			// 
			// txtSecondName
			// 
			this->txtSecondName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtSecondName->Location = System::Drawing::Point(17, 155);
			this->txtSecondName->Name = L"txtSecondName";
			this->txtSecondName->Size = System::Drawing::Size(366, 26);
			this->txtSecondName->TabIndex = 3;
			this->txtSecondName->Text = L"Second Name";
			// 
			// lbMessage
			// 
			this->lbMessage->AutoSize = true;
			this->lbMessage->Location = System::Drawing::Point(13, 195);
			this->lbMessage->Name = L"lbMessage";
			this->lbMessage->Size = System::Drawing::Size(107, 20);
			this->lbMessage->TabIndex = 4;
			this->lbMessage->Text = L"labelMessage";
			// 
			// OKbutton
			// 
			this->OKbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->OKbutton->Location = System::Drawing::Point(3, 3);
			this->OKbutton->Name = L"OKbutton";
			this->OKbutton->Size = System::Drawing::Size(162, 51);
			this->OKbutton->TabIndex = 5;
			this->OKbutton->Text = L"OK";
			this->OKbutton->UseVisualStyleBackColor = true;
			this->OKbutton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->OKbutton, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->RESETbutton, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 218);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(336, 60);
			this->tableLayoutPanel1->TabIndex = 7;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint);
			// 
			// RESETbutton
			// 
			this->RESETbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->RESETbutton->Location = System::Drawing::Point(171, 3);
			this->RESETbutton->Name = L"RESETbutton";
			this->RESETbutton->Size = System::Drawing::Size(162, 51);
			this->RESETbutton->TabIndex = 6;
			this->RESETbutton->Text = L"RESET";
			this->RESETbutton->UseVisualStyleBackColor = true;
			this->RESETbutton->Click += gcnew System::EventHandler(this, &MyForm::RESETbutton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(575, 543);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->lbMessage);
			this->Controls->Add(this->txtSecondName);
			this->Controls->Add(this->lblSecondName);
			this->Controls->Add(this->txtFirstName);
			this->Controls->Add(this->lblFirstName);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->lbMessage->Text = "";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ firstName = this->txtFirstName->Text;
	String^ secondName = this->txtSecondName->Text;
	this->lbMessage->Text = "Hello " + firstName + " " + secondName;
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void RESETbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txtFirstName->Text = "";
	this->txtSecondName->Text = "";
	this->lbMessage->Text = "";
}
};
}
