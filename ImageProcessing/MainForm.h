#pragma once
#include <iostream>
#include "Utils.h"

namespace ImageProcessing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::RichTextBox^ inputMask;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::RichTextBox^ inputMaskX;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::RichTextBox^ inputMaskY;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ applyGradientButton;
	private: System::Windows::Forms::Button^ applyCannyButton;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ select_desired_checkbox;
	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Label^ label17;

	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox4;


	public:
	private:
		ImageMatris* inputImage = new ImageMatris();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureIn;
	protected:

	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ loadImageButton;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureOut;
	private: System::Windows::Forms::Button^ moveMaskButton;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;







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
			this->pictureIn = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->loadImageButton = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureOut = (gcnew System::Windows::Forms::PictureBox());
			this->moveMaskButton = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->inputMask = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->inputMaskX = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->inputMaskY = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->applyGradientButton = (gcnew System::Windows::Forms::Button());
			this->applyCannyButton = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->select_desired_checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureIn))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureOut))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureIn
			// 
			this->pictureIn->Location = System::Drawing::Point(4, 4);
			this->pictureIn->Name = L"pictureIn";
			this->pictureIn->Size = System::Drawing::Size(400, 400);
			this->pictureIn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureIn->TabIndex = 0;
			this->pictureIn->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel1->Controls->Add(this->pictureIn);
			this->panel1->Location = System::Drawing::Point(17, 33);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(408, 408);
			this->panel1->TabIndex = 1;
			// 
			// loadImageButton
			// 
			this->loadImageButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->loadImageButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->loadImageButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F));
			this->loadImageButton->ForeColor = System::Drawing::Color::White;
			this->loadImageButton->Location = System::Drawing::Point(17, 447);
			this->loadImageButton->Name = L"loadImageButton";
			this->loadImageButton->Size = System::Drawing::Size(111, 25);
			this->loadImageButton->TabIndex = 1;
			this->loadImageButton->Text = L"Load Image";
			this->loadImageButton->UseVisualStyleBackColor = false;
			this->loadImageButton->Click += gcnew System::EventHandler(this, &MainForm::loadImageButton_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel3->Controls->Add(this->pictureOut);
			this->panel3->Location = System::Drawing::Point(748, 32);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(408, 408);
			this->panel3->TabIndex = 4;
			// 
			// pictureOut
			// 
			this->pictureOut->Location = System::Drawing::Point(4, 4);
			this->pictureOut->Name = L"pictureOut";
			this->pictureOut->Size = System::Drawing::Size(400, 400);
			this->pictureOut->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureOut->TabIndex = 0;
			this->pictureOut->TabStop = false;
			// 
			// moveMaskButton
			// 
			this->moveMaskButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->moveMaskButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->moveMaskButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8));
			this->moveMaskButton->ForeColor = System::Drawing::Color::White;
			this->moveMaskButton->Location = System::Drawing::Point(209, 107);
			this->moveMaskButton->Name = L"moveMaskButton";
			this->moveMaskButton->Size = System::Drawing::Size(65, 22);
			this->moveMaskButton->TabIndex = 5;
			this->moveMaskButton->Text = L"Preview";
			this->moveMaskButton->UseVisualStyleBackColor = false;
			this->moveMaskButton->Click += gcnew System::EventHandler(this, &MainForm::moveMaskButton_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(18, 9);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(101, 20);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Input image:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(749, 8);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 20);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Output image:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(369, 444);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 17);
			this->label2->TabIndex = 34;
			this->label2->Text = L"400x400";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(1100, 443);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 17);
			this->label3->TabIndex = 35;
			this->label3->Text = L"400x400";
			// 
			// inputMask
			// 
			this->inputMask->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->inputMask->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inputMask->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->inputMask->ForeColor = System::Drawing::SystemColors::Window;
			this->inputMask->Location = System::Drawing::Point(2, 2);
			this->inputMask->Name = L"inputMask";
			this->inputMask->Size = System::Drawing::Size(59, 59);
			this->inputMask->TabIndex = 36;
			this->inputMask->Text = L"0 0 0\n0 1 0\n0 0 0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(209, 14);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 20);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Ex Mask:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel2->Controls->Add(this->inputMask);
			this->panel2->Location = System::Drawing::Point(211, 37);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(63, 64);
			this->panel2->TabIndex = 38;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel4->Controls->Add(this->inputMaskX);
			this->panel4->Location = System::Drawing::Point(10, 42);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(63, 65);
			this->panel4->TabIndex = 42;
			// 
			// inputMaskX
			// 
			this->inputMaskX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->inputMaskX->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inputMaskX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->inputMaskX->ForeColor = System::Drawing::SystemColors::Window;
			this->inputMaskX->Location = System::Drawing::Point(2, 2);
			this->inputMaskX->Name = L"inputMaskX";
			this->inputMaskX->Size = System::Drawing::Size(59, 62);
			this->inputMaskX->TabIndex = 36;
			this->inputMaskX->Text = L"-1 0 1\n-1 0 1\n-1 0 1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(8, 19);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 20);
			this->label5->TabIndex = 41;
			this->label5->Text = L"Mask X:";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel5->Controls->Add(this->inputMaskY);
			this->panel5->Location = System::Drawing::Point(103, 42);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(62, 66);
			this->panel5->TabIndex = 44;
			// 
			// inputMaskY
			// 
			this->inputMaskY->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->inputMaskY->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inputMaskY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->inputMaskY->ForeColor = System::Drawing::SystemColors::Window;
			this->inputMaskY->Location = System::Drawing::Point(2, 2);
			this->inputMaskY->Name = L"inputMaskY";
			this->inputMaskY->Size = System::Drawing::Size(59, 63);
			this->inputMaskY->TabIndex = 36;
			this->inputMaskY->Text = L"1 1 1\n0 0 0\n-1 -1 -1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(101, 19);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 20);
			this->label6->TabIndex = 43;
			this->label6->Text = L"Mask Y:";
			// 
			// applyGradientButton
			// 
			this->applyGradientButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->applyGradientButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->applyGradientButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F));
			this->applyGradientButton->ForeColor = System::Drawing::Color::White;
			this->applyGradientButton->Location = System::Drawing::Point(21, 17);
			this->applyGradientButton->Name = L"applyGradientButton";
			this->applyGradientButton->Size = System::Drawing::Size(97, 25);
			this->applyGradientButton->TabIndex = 45;
			this->applyGradientButton->Text = L"with Gradiant";
			this->applyGradientButton->UseVisualStyleBackColor = false;
			this->applyGradientButton->Click += gcnew System::EventHandler(this, &MainForm::applyGradientButton_Click);
			// 
			// applyCannyButton
			// 
			this->applyCannyButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->applyCannyButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->applyCannyButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F));
			this->applyCannyButton->ForeColor = System::Drawing::Color::White;
			this->applyCannyButton->Location = System::Drawing::Point(21, 48);
			this->applyCannyButton->Name = L"applyCannyButton";
			this->applyCannyButton->Size = System::Drawing::Size(97, 25);
			this->applyCannyButton->TabIndex = 46;
			this->applyCannyButton->Text = L"with Canny";
			this->applyCannyButton->UseVisualStyleBackColor = false;
			this->applyCannyButton->Click += gcnew System::EventHandler(this, &MainForm::applyCannyButton_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(137, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(31, 20);
			this->textBox1->TabIndex = 48;
			this->textBox1->Text = L"150";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(137, 39);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(31, 20);
			this->textBox2->TabIndex = 49;
			this->textBox2->Text = L"200";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(8, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 16);
			this->label7->TabIndex = 50;
			this->label7->Text = L"Binary Image Treshold";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(8, 39);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(117, 16);
			this->label8->TabIndex = 51;
			this->label8->Text = L"Hough Vote Treshold";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(21, 17);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 25);
			this->button1->TabIndex = 52;
			this->button1->Text = L"with Gradiant";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(8, 78);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(123, 16);
			this->label9->TabIndex = 54;
			this->label9->Text = L"Draw Desired Amount";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(147, 76);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(23, 20);
			this->textBox3->TabIndex = 53;
			this->textBox3->Text = L"2";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(21, 48);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 25);
			this->button2->TabIndex = 55;
			this->button2->Text = L"with Canny";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// select_desired_checkbox
			// 
			this->select_desired_checkbox->AutoSize = true;
			this->select_desired_checkbox->Location = System::Drawing::Point(131, 80);
			this->select_desired_checkbox->Name = L"select_desired_checkbox";
			this->select_desired_checkbox->Size = System::Drawing::Size(15, 14);
			this->select_desired_checkbox->TabIndex = 56;
			this->select_desired_checkbox->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(2, 1);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(104, 20);
			this->label10->TabIndex = 57;
			this->label10->Text = L"Dedect Lines";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Gray;
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Location = System::Drawing::Point(436, 354);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(141, 83);
			this->panel6->TabIndex = 60;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel7->Controls->Add(this->applyGradientButton);
			this->panel7->Controls->Add(this->applyCannyButton);
			this->panel7->Location = System::Drawing::Point(1, 1);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(139, 81);
			this->panel7->TabIndex = 61;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label10);
			this->panel8->Location = System::Drawing::Point(452, 345);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(106, 21);
			this->panel8->TabIndex = 61;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->label14);
			this->panel9->Location = System::Drawing::Point(452, 183);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(69, 21);
			this->panel9->TabIndex = 63;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(2, 1);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(65, 20);
			this->label14->TabIndex = 57;
			this->label14->Text = L"Options";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Gray;
			this->panel10->Controls->Add(this->panel11);
			this->panel10->Location = System::Drawing::Point(436, 192);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(290, 145);
			this->panel10->TabIndex = 62;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel11->Controls->Add(this->textBox5);
			this->panel11->Controls->Add(this->label21);
			this->panel11->Controls->Add(this->textBox4);
			this->panel11->Controls->Add(this->checkBox2);
			this->panel11->Controls->Add(this->label13);
			this->panel11->Controls->Add(this->checkBox1);
			this->panel11->Controls->Add(this->label11);
			this->panel11->Controls->Add(this->label7);
			this->panel11->Controls->Add(this->textBox1);
			this->panel11->Controls->Add(this->label8);
			this->panel11->Controls->Add(this->textBox2);
			this->panel11->Controls->Add(this->label9);
			this->panel11->Controls->Add(this->textBox3);
			this->panel11->Controls->Add(this->select_desired_checkbox);
			this->panel11->Location = System::Drawing::Point(1, 1);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(288, 143);
			this->panel11->TabIndex = 61;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(147, 116);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(23, 20);
			this->textBox5->TabIndex = 63;
			this->textBox5->Text = L"10";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label21->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label21->Location = System::Drawing::Point(8, 118);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(106, 16);
			this->label21->TabIndex = 62;
			this->label21->Text = L"Circle Treshold D/R";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(118, 116);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(23, 20);
			this->textBox4->TabIndex = 61;
			this->textBox4->Text = L"20";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(104, 60);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 60;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(8, 59);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(94, 16);
			this->label13->TabIndex = 59;
			this->label13->Text = L"Auto Tresholding";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(109, 98);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 58;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(8, 97);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(103, 16);
			this->label11->TabIndex = 57;
			this->label11->Text = L"Use Gaussian Blur ";
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->label15);
			this->panel12->Location = System::Drawing::Point(602, 345);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(119, 21);
			this->panel12->TabIndex = 65;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(2, 1);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(118, 20);
			this->label15->TabIndex = 57;
			this->label15->Text = L"Dedect Circles";
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::Gray;
			this->panel13->Controls->Add(this->panel14);
			this->panel13->Location = System::Drawing::Point(586, 354);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(141, 83);
			this->panel13->TabIndex = 64;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel14->Controls->Add(this->button2);
			this->panel14->Controls->Add(this->button1);
			this->panel14->Location = System::Drawing::Point(1, 1);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(139, 81);
			this->panel14->TabIndex = 61;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(819, 448);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 63;
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label17->Location = System::Drawing::Point(750, 446);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(67, 16);
			this->label17->TabIndex = 62;
			this->label17->Text = L"Gray Scale";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(920, 448);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 65;
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label18->Location = System::Drawing::Point(843, 446);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(77, 16);
			this->label18->TabIndex = 64;
			this->label18->Text = L"Binary Image";
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(1030, 448);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 67;
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label19->Location = System::Drawing::Point(945, 446);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(82, 16);
			this->label19->TabIndex = 66;
			this->label19->Text = L"Hough Space";
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->label20);
			this->panel15->Location = System::Drawing::Point(452, 28);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(106, 21);
			this->panel15->TabIndex = 67;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(2, 1);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(107, 20);
			this->label20->TabIndex = 57;
			this->label20->Text = L"Mask Settings";
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::Gray;
			this->panel16->Controls->Add(this->panel17);
			this->panel16->Location = System::Drawing::Point(436, 35);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(291, 137);
			this->panel16->TabIndex = 66;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel17->Controls->Add(this->label5);
			this->panel17->Controls->Add(this->moveMaskButton);
			this->panel17->Controls->Add(this->label4);
			this->panel17->Controls->Add(this->panel2);
			this->panel17->Controls->Add(this->panel4);
			this->panel17->Controls->Add(this->label6);
			this->panel17->Controls->Add(this->panel5);
			this->panel17->Location = System::Drawing::Point(1, 1);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(289, 135);
			this->panel17->TabIndex = 61;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(852, 466);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(15, 14);
			this->checkBox6->TabIndex = 69;
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label16->Location = System::Drawing::Point(750, 464);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(96, 16);
			this->label16->TabIndex = 68;
			this->label16->Text = L"Details for canny";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(1195, 484);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->panel15);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->panel16);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->panel13);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->loadImageButton);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->Text = L"Image Processing";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureIn))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureOut))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel14->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		MaskMatris* GetMaskFromTextBox(System::Windows::Forms::RichTextBox^ inputMask)
		{
			System::String^ text = inputMask->Text;

			array<System::String^>^ tokens =
				text->Split(gcnew array<wchar_t>{' ', '\n', '\r', '\t'},
					System::StringSplitOptions::RemoveEmptyEntries);

			int totalCount = tokens->Length;
			int maskSize = (int)System::Math::Sqrt((double)totalCount);

			if (maskSize * maskSize != totalCount)
			{
				MessageBox::Show("Mask must contain n*n numbers (for example 3x3, 5x5, 7x7).");
				return nullptr;
			}

			int* data = new int[totalCount];

			try
			{
				for (int i = 0; i < totalCount; i++)
				{
					data[i] = System::Convert::ToInt32(tokens[i]);
				}
			}
			catch (System::FormatException^)
			{
				MessageBox::Show("Mask contains invalid value.");
				delete[] data;
				return nullptr;
			}
			catch (System::OverflowException^)
			{
				MessageBox::Show("One of the mask values is too large or too small.");
				delete[] data;
				return nullptr;
			}

			MaskMatris* mask = new MaskMatris();
			mask->data = data;
			mask->len = maskSize;

			return mask;
		}
	    private: System::Void loadImageButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::OpenFileDialog^ openFileDialog1 =
			gcnew System::Windows::Forms::OpenFileDialog();

		openFileDialog1->Filter = "Image Files|*.jpg;*.jpeg;*.png;*.bmp";
		openFileDialog1->Title = "Bir resim seç";

		if (openFileDialog1->ShowDialog() ==
			System::Windows::Forms::DialogResult::OK)
		{
			pictureIn->Image = System::Drawing::Image::FromFile(openFileDialog1->FileName);

			int W = 400;
			int H = 400;
			inputImage->width = W;
			inputImage->height = H;


			System::Drawing::Bitmap^ scaled =
				gcnew System::Drawing::Bitmap(W, H);

			System::Drawing::Graphics^ g =
				System::Drawing::Graphics::FromImage(scaled);

			g->Clear(System::Drawing::Color::Black);

			g->InterpolationMode =
				System::Drawing::Drawing2D::InterpolationMode::HighQualityBicubic;

			g->DrawImage(pictureIn->Image, 0, 0, W, H);

			delete g;


			int* data = new int[W * H];
			for (int row = 0; row < H; row++)
			{
				for (int col = 0; col < W; col++)
				{
					System::Drawing::Color c = scaled->GetPixel(col, row);

					int gray = (int)(0.299 * c.R + 0.587 * c.G + 0.114 * c.B);

					data[row * W + col] = gray;
				}
			}

			if (inputImage->data != nullptr)
			{
				delete inputImage->data;
				inputImage->data = nullptr;
			}
			inputImage->data = data;
			delete scaled;
		}
	}
        private: System::Void moveMaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	MaskMatris* mask = GetMaskFromTextBox(inputMask);
	ImageProcess img;
	int* outPictureData = img.MoveMask_OneChannel(inputImage, mask);

	int offset = mask->len/2*2;
	int w = inputImage->width - offset;
	int h = inputImage->height - offset;

	System::Drawing::Bitmap^ bmp = gcnew System::Drawing::Bitmap(w, h, System::Drawing::Imaging::PixelFormat::Format24bppRgb);

	for (int row = 0; row < h; row++)
	{
		for (int col = 0; col < w; col++)
		{
			int pixel = outPictureData[row * w + col];

			if (pixel > 255) pixel = 255;
			if (pixel < 0) pixel = 0;

			System::Drawing::Color c =
				System::Drawing::Color::FromArgb(pixel, pixel, pixel);

			bmp->SetPixel(col, row, c);
		}
	}
	delete[] mask;
	pictureOut->Image = bmp;
}

private: void DrawOnNewWindow(ImageMatris* outPicture, System::String^ text)
	   {
		   System::Drawing::Bitmap^ bmp = gcnew System::Drawing::Bitmap(outPicture->width, outPicture->height, System::Drawing::Imaging::PixelFormat::Format24bppRgb);

		   for (int row = 0; row < outPicture->height; row++)
		   {
			   for (int col = 0; col < outPicture->width; col++)
			   {
				   int pixel = outPicture->data[row * outPicture->width + col];
				   if (pixel > 255) pixel = 255;

				   System::Drawing::Color c =
					   System::Drawing::Color::FromArgb(pixel, pixel, pixel);

				   bmp->SetPixel(col, row, c);
			   }
		   }

		   Form^ imgForm = gcnew Form();
		   imgForm->Text = text;
		   imgForm->Width = 400 + 20;
		   imgForm->Height = 400 + 40;

		   PictureBox^ pb = gcnew PictureBox();
		   pb->Dock = DockStyle::Fill;
		   pb->SizeMode = PictureBoxSizeMode::StretchImage;
		   pb->Image = bmp;

		   imgForm->Controls->Add(pb);
		   imgForm->Show();

	   }

private: System::Void applyGradientButton_Click(System::Object^ sender, System::EventArgs^ e) {

	MaskMatris* mask_X = GetMaskFromTextBox(inputMaskX);
	MaskMatris* mask_Y = GetMaskFromTextBox(inputMaskY);


	ImageProcess img;

	ImageMatris* startImage;
	if (checkBox1->Checked)
		startImage = img.GaussianBlur(inputImage,2);
	else
		startImage = inputImage;

	//circle dedection with gradient
	ImageMatris* outPictureGradient = img.FindGradiant(startImage, mask_X, mask_Y);
	ImageMatris* outPictureBin = img.BinaryImage(outPictureGradient, Convert::ToInt32(textBox1->Text));
	ImageMatris* outPictureHough = img.HoughLineSpace(outPictureBin);
	ImageMatris* outPicture = img.LinesImage(outPictureHough,outPictureBin->width, outPictureBin->height, Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text), select_desired_checkbox->Checked);
	
	Bitmap^ bmp = gcnew Bitmap(400, 400);
	Graphics^ g = Graphics::FromImage(bmp);
	g->InterpolationMode = System::Drawing::Drawing2D::InterpolationMode::HighQualityBicubic;
	g->DrawImage(pictureIn->Image, 0, 0, 400, 400);
	delete g;

	Pen^ pen = gcnew Pen(Color::Red, 1);

	for (int y = 0; y < outPicture->height; y++)
		for (int x = 0; x < outPicture->width; x++)
			if (outPicture->data[y * outPicture->width + x] == 255)
				bmp->SetPixel(x, y, Color::Red);


	pictureOut->Image = bmp;

	if (checkBox3->Checked)
		DrawOnNewWindow(inputImage, "Starting");
	if (checkBox4->Checked)
		DrawOnNewWindow(outPictureBin, "Binary Edge Image (from gradiant)");
	if (checkBox5->Checked)
		DrawOnNewWindow(outPictureHough, "Hough line space (from gradiant");

	delete[] outPictureGradient;
	delete[] outPictureBin;
	delete[] outPictureHough;
	delete[] outPicture;
}
private: System::Void applyCannyButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MaskMatris* mask_X = GetMaskFromTextBox(inputMaskX);
	MaskMatris* mask_Y = GetMaskFromTextBox(inputMaskY);

	ImageProcess img;

	ImageMatris* startImage;
	if (checkBox1->Checked)
		startImage = img.GaussianBlur(inputImage, 2);
	else
		startImage = inputImage;

	ImageMatris* cannyout = img.NonMaximumSuperession1(startImage, mask_X, mask_Y);
	ImageMatris* hysteries = img.HysteriesTresold(cannyout);
	ImageMatris* outPictureBin = img.BinaryImage(hysteries, Convert::ToInt32(textBox1->Text));

	ImageMatris* outPictureHough = img.HoughLineSpace(outPictureBin);
	ImageMatris* outPicture = img.LinesImage(outPictureHough, outPictureBin->width, outPictureBin->height, Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text), select_desired_checkbox->Checked);

	Bitmap^ bmp = gcnew Bitmap(400, 400);
	Graphics^ g = Graphics::FromImage(bmp);
	g->InterpolationMode = System::Drawing::Drawing2D::InterpolationMode::HighQualityBicubic;
	g->DrawImage(pictureIn->Image, 0, 0, 400, 400);
	delete g;

	Pen^ pen = gcnew Pen(Color::Red, 1);

	for (int y = 0; y < outPicture->height; y++)
		for (int x = 0; x < outPicture->width; x++)
			if (outPicture->data[y * outPicture->width + x] == 255)
				bmp->SetPixel(x, y, Color::Red);


	if (checkBox3->Checked)
		DrawOnNewWindow(inputImage, "Starting");
	if (checkBox4->Checked)
		DrawOnNewWindow(outPictureBin, "Binary Edge Image (from gradiant)");
	if (checkBox5->Checked)
		DrawOnNewWindow(outPictureHough, "Hough line space (from gradiant");
	if (checkBox6->Checked)
	{
		DrawOnNewWindow(cannyout, "NonMaximumSupression");
        DrawOnNewWindow(hysteries, "Hysteries Applied");
	}

	pictureOut->Image = bmp;
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MaskMatris* mask_X = GetMaskFromTextBox(inputMaskX);
	MaskMatris* mask_Y = GetMaskFromTextBox(inputMaskY);

	ImageProcess img;
	
	ImageMatris* startImage;
	if (checkBox1->Checked)
		startImage = img.GaussianBlur(inputImage, 2);
	else
		startImage = inputImage;

	//circle dedection with gradient
	ImageMatris* outPictureGradient = img.FindGradiant(startImage, mask_X, mask_Y); //gradyantý direkt binary olarak alýyor.
	ImageMatris* outPictureBin = img.BinaryImage(outPictureGradient, Convert::ToInt32(textBox1->Text));
	TensorMatris* cirlchough = img.HoughCircleSpace(outPictureBin);
	ImageMatris* outPicture = img.SelectNCircles(cirlchough, System::Convert::ToInt32(textBox3->Text), System::Convert::ToInt32(textBox4->Text), System::Convert::ToInt32(textBox5->Text));

	Bitmap^ bmp = gcnew Bitmap(400, 400);
	Graphics^ g = Graphics::FromImage(bmp);
	g->InterpolationMode = System::Drawing::Drawing2D::InterpolationMode::HighQualityBicubic;
	g->DrawImage(pictureIn->Image, 0, 0, 400, 400);
	delete g;

	Pen^ pen = gcnew Pen(Color::Red, 2);

	for (int y = 0; y < outPicture->height; y++)
		for (int x = 0; x < outPicture->width; x++)
			if (outPicture->data[y * outPicture->width + x] == 255) {
				bmp->SetPixel(x, y, Color::Red);
				bmp->SetPixel(x+1, y, Color::Red);
				bmp->SetPixel(x, y+1, Color::Red);
				bmp->SetPixel(x+1, y+1, Color::Red);
			}

	if (checkBox3->Checked)
		DrawOnNewWindow(inputImage, "Starting");
	if (checkBox4->Checked)
		DrawOnNewWindow(outPictureBin, "Binary Edge Image (from gradiant)");
	//circle hough cizemez cunku tensor!!! 3 boyutlu
	pictureOut->Image = bmp;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	MaskMatris* mask_X = GetMaskFromTextBox(inputMaskX);
	MaskMatris* mask_Y = GetMaskFromTextBox(inputMaskY);

	ImageProcess img;

	ImageMatris* startImage;
	if (checkBox1->Checked)
		startImage = img.GaussianBlur(inputImage, 2);
	else
		startImage = inputImage;

	ImageMatris* cannyout = img.NonMaximumSuperession1(startImage, mask_X, mask_Y);
	ImageMatris* hysteries = img.HysteriesTresold(cannyout);
	ImageMatris* outPictureBin = img.BinaryImage(hysteries, Convert::ToInt32(textBox1->Text));

	TensorMatris* cirlchough = img.HoughCircleSpace(outPictureBin);
	ImageMatris* outPicture = img.SelectNCircles(cirlchough, System::Convert::ToInt32(textBox3->Text), System::Convert::ToInt32(textBox4->Text), System::Convert::ToInt32(textBox5->Text));

	Bitmap^ bmp = gcnew Bitmap(400, 400);
	Graphics^ g = Graphics::FromImage(bmp);
	g->InterpolationMode = System::Drawing::Drawing2D::InterpolationMode::HighQualityBicubic;
	g->DrawImage(pictureIn->Image, 0, 0, 400, 400);
	delete g;

	Pen^ pen = gcnew Pen(Color::Red, 1);

	for (int y = 0; y < outPicture->height; y++)
		for (int x = 0; x < outPicture->width; x++)
			if (outPicture->data[y * outPicture->width + x] == 255) {
				bmp->SetPixel(x, y, Color::Red);
				bmp->SetPixel(x + 1, y, Color::Red);
				bmp->SetPixel(x, y + 1, Color::Red);
				bmp->SetPixel(x + 1, y + 1, Color::Red);
			}


	pictureOut->Image = bmp;

	if (checkBox3->Checked)
		DrawOnNewWindow(inputImage, "Starting");
	if (checkBox4->Checked)
		DrawOnNewWindow(outPictureBin, "Binary Edge Image (from gradiant)");
	if (checkBox6->Checked)
	{
		DrawOnNewWindow(cannyout, "NonMaximumSupression");
		DrawOnNewWindow(hysteries, "Hysteries Applied");
	}
}
};
}
