#pragma once
#include <sstream>
#include <string>
#include <iostream>
#include <stack>


namespace ADDNUMBERS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;
	using namespace System::Text;


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
	private:
		   
		

	private: System::Windows::Forms::Button^ five;

	protected:


	protected:

	protected:




















	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ Eight;


	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ F_our;




	private: System::Windows::Forms::Button^ six;
	private: System::Windows::Forms::Button^ three;
	private: System::Windows::Forms::Button^ R_oot;



	private: System::Windows::Forms::Button^ divide;


	private: System::Windows::Forms::Button^ multiply;

	private: System::Windows::Forms::Button^ nine;
	private: System::Windows::Forms::Button^ zero;






	private: System::Windows::Forms::Button^ dot;



	private: System::Windows::Forms::Button^ minus;

	private: System::Windows::Forms::Button^ equals;

	private: System::Windows::Forms::Button^ clear;

	private: System::Windows::Forms::Button^ square;

	private: System::Windows::Forms::Button^ power;

	private: System::Windows::Forms::Label^ Display;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ ANSWER;
	private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->five = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->Eight = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->F_our = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->R_oot = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->dot = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->equals = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->square = (gcnew System::Windows::Forms::Button());
			this->power = (gcnew System::Windows::Forms::Button());
			this->Display = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ANSWER = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// five
			// 
			this->five->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->five->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->five->Location = System::Drawing::Point(183, 333);
			this->five->MaximumSize = System::Drawing::Size(163, 50);
			this->five->MinimumSize = System::Drawing::Size(113, 50);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(113, 50);
			this->five->TabIndex = 22;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = true;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::five_Click);
			// 
			// two
			// 
			this->two->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->two->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->two->Location = System::Drawing::Point(183, 412);
			this->two->MaximumSize = System::Drawing::Size(163, 50);
			this->two->MinimumSize = System::Drawing::Size(113, 50);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(113, 50);
			this->two->TabIndex = 23;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = true;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::two_Click);
			// 
			// Eight
			// 
			this->Eight->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Eight->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Eight->Location = System::Drawing::Point(183, 258);
			this->Eight->MaximumSize = System::Drawing::Size(163, 50);
			this->Eight->MinimumSize = System::Drawing::Size(113, 50);
			this->Eight->Name = L"Eight";
			this->Eight->Size = System::Drawing::Size(113, 50);
			this->Eight->TabIndex = 24;
			this->Eight->Text = L"8";
			this->Eight->UseVisualStyleBackColor = true;
			this->Eight->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// one
			// 
			this->one->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->one->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->one->Location = System::Drawing::Point(5, 406);
			this->one->MaximumSize = System::Drawing::Size(163, 50);
			this->one->MinimumSize = System::Drawing::Size(113, 50);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(113, 50);
			this->one->TabIndex = 25;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = true;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::one_Click);
			// 
			// F_our
			// 
			this->F_our->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->F_our->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->F_our->Location = System::Drawing::Point(5, 334);
			this->F_our->MaximumSize = System::Drawing::Size(163, 50);
			this->F_our->MinimumSize = System::Drawing::Size(113, 50);
			this->F_our->Name = L"F_our";
			this->F_our->Size = System::Drawing::Size(113, 50);
			this->F_our->TabIndex = 26;
			this->F_our->Text = L"4";
			this->F_our->UseVisualStyleBackColor = true;
			this->F_our->Click += gcnew System::EventHandler(this, &MyForm::F_our_Click);
			// 
			// six
			// 
			this->six->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->six->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->six->Location = System::Drawing::Point(362, 334);
			this->six->MaximumSize = System::Drawing::Size(163, 50);
			this->six->MinimumSize = System::Drawing::Size(113, 50);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(113, 50);
			this->six->TabIndex = 32;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = true;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// three
			// 
			this->three->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->three->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->three->Location = System::Drawing::Point(362, 406);
			this->three->MaximumSize = System::Drawing::Size(163, 50);
			this->three->MinimumSize = System::Drawing::Size(113, 50);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(113, 50);
			this->three->TabIndex = 31;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = true;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// R_oot
			// 
			this->R_oot->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->R_oot->BackColor = System::Drawing::SystemColors::Window;
			this->R_oot->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R_oot->ForeColor = System::Drawing::Color::DarkOrchid;
			this->R_oot->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"R_oot.Image")));
			this->R_oot->Location = System::Drawing::Point(5, 189);
			this->R_oot->MaximumSize = System::Drawing::Size(163, 50);
			this->R_oot->MinimumSize = System::Drawing::Size(113, 50);
			this->R_oot->Name = L"R_oot";
			this->R_oot->Size = System::Drawing::Size(113, 50);
			this->R_oot->TabIndex = 30;
			this->R_oot->UseVisualStyleBackColor = false;
			this->R_oot->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// divide
			// 
			this->divide->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->divide->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divide->Location = System::Drawing::Point(546, 406);
			this->divide->MaximumSize = System::Drawing::Size(163, 50);
			this->divide->MinimumSize = System::Drawing::Size(113, 50);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(113, 50);
			this->divide->TabIndex = 29;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = true;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// multiply
			// 
			this->multiply->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->multiply->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiply->Location = System::Drawing::Point(546, 334);
			this->multiply->MaximumSize = System::Drawing::Size(163, 50);
			this->multiply->MinimumSize = System::Drawing::Size(113, 50);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(113, 50);
			this->multiply->TabIndex = 28;
			this->multiply->Text = L"X";
			this->multiply->UseVisualStyleBackColor = true;
			this->multiply->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// nine
			// 
			this->nine->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->nine->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nine->Location = System::Drawing::Point(362, 258);
			this->nine->MaximumSize = System::Drawing::Size(163, 50);
			this->nine->MinimumSize = System::Drawing::Size(113, 50);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(113, 50);
			this->nine->TabIndex = 27;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = true;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// zero
			// 
			this->zero->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->zero->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zero->Location = System::Drawing::Point(5, 481);
			this->zero->MaximumSize = System::Drawing::Size(163, 50);
			this->zero->MinimumSize = System::Drawing::Size(113, 50);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(113, 50);
			this->zero->TabIndex = 33;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::zero_Click);
			// 
			// dot
			// 
			this->dot->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dot->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dot->Location = System::Drawing::Point(183, 481);
			this->dot->MaximumSize = System::Drawing::Size(163, 50);
			this->dot->MinimumSize = System::Drawing::Size(113, 50);
			this->dot->Name = L"dot";
			this->dot->Size = System::Drawing::Size(113, 50);
			this->dot->TabIndex = 35;
			this->dot->Text = L".";
			this->dot->UseVisualStyleBackColor = true;
			this->dot->Click += gcnew System::EventHandler(this, &MyForm::dot_Click);
			// 
			// minus
			// 
			this->minus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->minus->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minus->Location = System::Drawing::Point(362, 481);
			this->minus->MaximumSize = System::Drawing::Size(163, 50);
			this->minus->MinimumSize = System::Drawing::Size(113, 50);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(113, 50);
			this->minus->TabIndex = 36;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// equals
			// 
			this->equals->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->equals->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equals->ForeColor = System::Drawing::Color::Red;
			this->equals->Location = System::Drawing::Point(546, 481);
			this->equals->MaximumSize = System::Drawing::Size(163, 50);
			this->equals->MinimumSize = System::Drawing::Size(113, 50);
			this->equals->Name = L"equals";
			this->equals->Size = System::Drawing::Size(113, 50);
			this->equals->TabIndex = 40;
			this->equals->Text = L"=";
			this->equals->UseVisualStyleBackColor = true;
			this->equals->Click += gcnew System::EventHandler(this, &MyForm::equals_Click);
			// 
			// clear
			// 
			this->clear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->clear->BackColor = System::Drawing::Color::LightSteelBlue;
			this->clear->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->ForeColor = System::Drawing::Color::DarkOrchid;
			this->clear->Location = System::Drawing::Point(546, 189);
			this->clear->MaximumSize = System::Drawing::Size(163, 50);
			this->clear->MinimumSize = System::Drawing::Size(113, 50);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(113, 50);
			this->clear->TabIndex = 39;
			this->clear->Text = L"CLR";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// square
			// 
			this->square->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->square->BackColor = System::Drawing::SystemColors::Window;
			this->square->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->square->ForeColor = System::Drawing::Color::DarkOrchid;
			this->square->Location = System::Drawing::Point(362, 189);
			this->square->MaximumSize = System::Drawing::Size(163, 50);
			this->square->MinimumSize = System::Drawing::Size(113, 50);
			this->square->Name = L"square";
			this->square->Size = System::Drawing::Size(113, 50);
			this->square->TabIndex = 38;
			this->square->Text = L")";
			this->square->UseVisualStyleBackColor = false;
			this->square->Click += gcnew System::EventHandler(this, &MyForm::square_Click);
			// 
			// power
			// 
			this->power->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->power->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power->ForeColor = System::Drawing::Color::DarkOrchid;
			this->power->Location = System::Drawing::Point(183, 189);
			this->power->MaximumSize = System::Drawing::Size(163, 50);
			this->power->MinimumSize = System::Drawing::Size(113, 50);
			this->power->Name = L"power";
			this->power->Size = System::Drawing::Size(113, 50);
			this->power->TabIndex = 37;
			this->power->Text = L"(";
			this->power->UseVisualStyleBackColor = true;
			this->power->Click += gcnew System::EventHandler(this, &MyForm::power_Click);
			// 
			// Display
			// 
			this->Display->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Display->AutoSize = true;
			this->Display->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Display->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Display->Location = System::Drawing::Point(9, 18);
			this->Display->MaximumSize = System::Drawing::Size(900, 70);
			this->Display->MinimumSize = System::Drawing::Size(650, 70);
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(650, 70);
			this->Display->TabIndex = 41;
			this->Display->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(56, 56);
			this->label1->MaximumSize = System::Drawing::Size(900, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 37);
			this->label1->TabIndex = 42;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// ANSWER
			// 
			this->ANSWER->AutoSize = true;
			this->ANSWER->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ANSWER->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ANSWER->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->ANSWER->Location = System::Drawing::Point(9, 88);
			this->ANSWER->MinimumSize = System::Drawing::Size(650, 70);
			this->ANSWER->Name = L"ANSWER";
			this->ANSWER->Size = System::Drawing::Size(650, 70);
			this->ANSWER->TabIndex = 43;
			this->ANSWER->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->ANSWER->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(546, 258);
			this->button1->MaximumSize = System::Drawing::Size(163, 50);
			this->button1->MinimumSize = System::Drawing::Size(113, 50);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 50);
			this->button1->TabIndex = 44;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(5, 258);
			this->button2->MaximumSize = System::Drawing::Size(163, 50);
			this->button2->MinimumSize = System::Drawing::Size(113, 50);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 50);
			this->button2->TabIndex = 45;
			this->button2->Text = L"7";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(183, 334);
			this->button3->MaximumSize = System::Drawing::Size(163, 50);
			this->button3->MinimumSize = System::Drawing::Size(113, 50);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 50);
			this->button3->TabIndex = 46;
			this->button3->Text = L"5";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Turquoise;
			this->ClientSize = System::Drawing::Size(678, 544);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ANSWER);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Display);
			this->Controls->Add(this->equals);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->square);
			this->Controls->Add(this->power);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->dot);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->six);
			this->Controls->Add(this->three);
			this->Controls->Add(this->R_oot);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->F_our);
			this->Controls->Add(this->one);
			this->Controls->Add(this->Eight);
			this->Controls->Add(this->two);
			this->MaximumSize = System::Drawing::Size(700, 600);
			this->MinimumSize = System::Drawing::Size(670, 600);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Valfirst_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;

	this->Display->Text = currentdisplay + "8";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;

	this->Display->Text = currentdisplay + "9";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;

	this->Display->Text = currentdisplay + "3";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;
	this->Display->Text = currentdisplay + "(3.14159265)";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;

	this->Display->Text = currentdisplay + "/";
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;

	this->Display->Text = currentdisplay + "*";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;

	this->Display->Text = currentdisplay + "6";
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void seven_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;
	float seven;
	seven = System::Single::Parse(currentdisplay);
	
	this->Display->Text = currentdisplay + "7";

}
private: System::Void equals_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ express = this->Display->Text;
	/// <summary>
	/// /
	/// </summary>
	

	StringReader^ reader = gcnew StringReader(express);
	stack<float> nums;
	stack<wchar_t> ops;

	int ch;
	while ((ch = reader->Read()) != -1) {
		wchar_t c = static_cast<wchar_t>(ch);
		if (Char::IsDigit(c) || c == '.') {
			StringBuilder^ sb = gcnew StringBuilder();
			sb->Append(c);
			while (Char::IsDigit(reader->Peek()) || reader->Peek() == '.') {
				sb->Append(static_cast<wchar_t>(reader->Read()));
			}
			float num = Convert::ToSingle(sb->ToString());
			nums.push(num);
		}
		else if (c == '(') {
			ops.push(c);
		}
		else if (c == ')') {
			while (ops.top() != L'(') {
				float b = nums.top();
				nums.pop();
				float a = nums.top();
				nums.pop();
				wchar_t op = ops.top();
				ops.pop();
				if (op == L'+') nums.push(a + b);
				else if (op == L'-') nums.push(a - b);
				else if (op == L'*') nums.push(a * b);
				else if (op == L'/') nums.push(a / b);
			}
			ops.pop(); // pop '('
		}
		else if (c == L'+' || c == L'-' || c == L'*' || c == L'/') {
			while (!ops.empty() && ((c == L'+' || c == L'-') && (ops.top() == L'*' || ops.top() == L'/'))) {
				float b = nums.top();
				nums.pop();
				float a = nums.top();
				nums.pop();
				wchar_t op = ops.top();
				ops.pop();
				if (op == L'+') nums.push(a + b);
				else if (op == L'-') nums.push(a - b);
				else if (op == L'*') nums.push(a * b);
				else if (op == L'/') nums.push(a / b);
			}
			ops.push(c);
		}
	}

	while (!ops.empty()) {
		float b = nums.top();
		nums.pop();
		float a = nums.top();
		nums.pop();
		wchar_t op = ops.top();
		ops.pop();
		if (op == L'+') nums.push(a + b);
		else if (op == L'-') nums.push(a - b);
		else if (op == L'*') nums.push(a * b);
		else if (op == L'/') nums.push(a / b);
	}

	float result = nums.top();;
	String^ result1 = result.ToString();

	this->ANSWER->Text = result1;
}
private: System::Void zero_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;

	this->Display->Text = currentdisplay + "0";
}
private: System::Void five_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;

	this->Display->Text = currentdisplay + "5";
}
private: System::Void F_our_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;

	this->Display->Text = currentdisplay + "4";
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void one_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;

	this->Display->Text = currentdisplay + "1";
}
private: System::Void two_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;

	this->Display->Text = currentdisplay + "2";
}
private: System::Void dot_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;

	this->Display->Text = currentdisplay + ".";
}
private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;

	this->Display->Text = currentdisplay + "-";
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;

	this->Display->Text = currentdisplay + "+";

}
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Display->Text = "";

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;
	this->Display->Text = currentdisplay + "7";
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;
	this->Display->Text = currentdisplay + "5";
}
private: System::Void power_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;
	this->Display->Text = currentdisplay + "(";

}
private: System::Void square_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ currentdisplay = this->Display->Text;
	this->Display->Text = currentdisplay + ")";
}
};
}
