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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureIn))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureOut))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
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
			this->panel3->Location = System::Drawing::Point(744, 36);
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
			this->moveMaskButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F));
			this->moveMaskButton->ForeColor = System::Drawing::Color::White;
			this->moveMaskButton->Location = System::Drawing::Point(453, 119);
			this->moveMaskButton->Name = L"moveMaskButton";
			this->moveMaskButton->Size = System::Drawing::Size(111, 25);
			this->moveMaskButton->TabIndex = 5;
			this->moveMaskButton->Text = L"Move Mask";
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
			this->label1->Location = System::Drawing::Point(745, 12);
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
			this->label3->Location = System::Drawing::Point(1096, 447);
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
			this->inputMask->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->inputMask->ForeColor = System::Drawing::SystemColors::Window;
			this->inputMask->Location = System::Drawing::Point(2, 2);
			this->inputMask->Name = L"inputMask";
			this->inputMask->Size = System::Drawing::Size(73, 74);
			this->inputMask->TabIndex = 36;
			this->inputMask->Text = L"0 0 0\n0 1 0\n0 0 0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(451, 12);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 20);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Mask:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel2->Controls->Add(this->inputMask);
			this->panel2->Location = System::Drawing::Point(453, 35);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(77, 78);
			this->panel2->TabIndex = 38;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel4->Controls->Add(this->inputMaskX);
			this->panel4->Location = System::Drawing::Point(451, 197);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(77, 78);
			this->panel4->TabIndex = 42;
			// 
			// inputMaskX
			// 
			this->inputMaskX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->inputMaskX->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inputMaskX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->inputMaskX->ForeColor = System::Drawing::SystemColors::Window;
			this->inputMaskX->Location = System::Drawing::Point(2, 2);
			this->inputMaskX->Name = L"inputMaskX";
			this->inputMaskX->Size = System::Drawing::Size(73, 74);
			this->inputMaskX->TabIndex = 36;
			this->inputMaskX->Text = L"-1 0 1\n-1 0 1\n-1 0 1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(449, 174);
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
			this->panel5->Location = System::Drawing::Point(583, 197);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(77, 78);
			this->panel5->TabIndex = 44;
			// 
			// inputMaskY
			// 
			this->inputMaskY->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->inputMaskY->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inputMaskY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->inputMaskY->ForeColor = System::Drawing::SystemColors::Window;
			this->inputMaskY->Location = System::Drawing::Point(2, 2);
			this->inputMaskY->Name = L"inputMaskY";
			this->inputMaskY->Size = System::Drawing::Size(73, 74);
			this->inputMaskY->TabIndex = 36;
			this->inputMaskY->Text = L"1 1 1\n0 0 0\n-1 -1 -1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(581, 174);
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
			this->applyGradientButton->Location = System::Drawing::Point(451, 281);
			this->applyGradientButton->Name = L"applyGradientButton";
			this->applyGradientButton->Size = System::Drawing::Size(177, 25);
			this->applyGradientButton->TabIndex = 45;
			this->applyGradientButton->Text = L"Dedect Lines with Gradiant";
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
			this->applyCannyButton->Location = System::Drawing::Point(451, 312);
			this->applyCannyButton->Name = L"applyCannyButton";
			this->applyCannyButton->Size = System::Drawing::Size(177, 25);
			this->applyCannyButton->TabIndex = 46;
			this->applyCannyButton->Text = L"Dedect Lines with Canny";
			this->applyCannyButton->UseVisualStyleBackColor = false;
			this->applyCannyButton->Click += gcnew System::EventHandler(this, &MainForm::applyCannyButton_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(570, 421);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(44, 20);
			this->textBox1->TabIndex = 48;
			this->textBox1->Text = L"150";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(570, 454);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(44, 20);
			this->textBox2->TabIndex = 49;
			this->textBox2->Text = L"200";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(452, 424);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 13);
			this->label7->TabIndex = 50;
			this->label7->Text = L"Binary Image Treshold";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(463, 458);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(101, 13);
			this->label8->TabIndex = 51;
			this->label8->Text = L"Lines Vote Treshold";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(453, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 25);
			this->button1->TabIndex = 52;
			this->button1->Text = L"Dedect Circles with Gradiant";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(463, 491);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 13);
			this->label9->TabIndex = 54;
			this->label9->Text = L"Select Desired";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(570, 487);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(44, 20);
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
			this->button2->Location = System::Drawing::Point(451, 387);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(177, 25);
			this->button2->TabIndex = 55;
			this->button2->Text = L"Dedect Circles with Canny";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(1195, 518);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->applyCannyButton);
			this->Controls->Add(this->applyGradientButton);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->moveMaskButton);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
	int mask[9];

	System::String^ text = inputMask->Text;

	array<System::String^>^ tokens =
		text->Split(gcnew array<wchar_t>{' ', '\n', '\r', '\t'},
			System::StringSplitOptions::RemoveEmptyEntries);

	for (int i = 0; i < 9 && i < tokens->Length; i++)
	{
		mask[i] = System::Convert::ToInt32(tokens[i]);
	}

	ImageProcessLines img(inputImage);
	int* outPictureData = img.MoveMask_OneChannel(mask, 3,3);

	int w = inputImage->width - 2;
	int h = inputImage->height - 2;

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
	int mask_X[9];
	int mask_Y[9];

	System::String^ text_X = inputMaskX->Text;
	System::String^ text_Y = inputMaskY->Text;

	array<System::String^>^ tokens_x =
		text_X->Split(gcnew array<wchar_t>{' ', '\n', '\r', '\t'},
			System::StringSplitOptions::RemoveEmptyEntries);

	array<System::String^>^ tokens_y =
		text_Y->Split(gcnew array<wchar_t>{' ', '\n', '\r', '\t'},
			System::StringSplitOptions::RemoveEmptyEntries);

	for (int i = 0; i < 9 && i < tokens_x->Length; i++)
		mask_X[i] = System::Convert::ToInt32(tokens_x[i]);
	
	for (int i = 0; i < 9 && i < tokens_y->Length; i++)
		mask_Y[i] = System::Convert::ToInt32(tokens_y[i]);

	ImageProcessLines img(inputImage);

	ImageMatris* outPictureGradient = img.FindGradiant(mask_X, mask_Y); //gradyantý direkt binary olarak alýyor.
	ImageMatris* outPictureBin = img.BinaryImage(outPictureGradient, Convert::ToInt32(textBox1->Text));
	ImageMatris* outPictureHough = img.HoughLineSpace(outPictureBin);
	ImageMatris* outPicture = img.LinesImage(outPictureHough,outPictureBin->width, outPictureBin->height, Convert::ToInt32(textBox2->Text));

   /*  
    DrawOnNewWindow(outPictureGradient, "Gradient (from gradiant)");
    DrawOnNewWindow(outPictureBin, "Binary Edge Image (from gradiant)");
    DrawOnNewWindow(outPictureHough,"Hough line space");
	DrawOnNewWindow(outPicture,"Output Image");
	*/
	
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

	delete[] outPictureGradient;
	delete[] outPictureBin;
	delete[] outPictureHough;
	delete[] outPicture;
}
private: System::Void applyCannyButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int mask_X[9];
	int mask_Y[9];

	System::String^ text_X = inputMaskX->Text;
	System::String^ text_Y = inputMaskY->Text;

	array<System::String^>^ tokens_x =
		text_X->Split(gcnew array<wchar_t>{' ', '\n', '\r', '\t'},
			System::StringSplitOptions::RemoveEmptyEntries);

	array<System::String^>^ tokens_y =
		text_Y->Split(gcnew array<wchar_t>{' ', '\n', '\r', '\t'},
			System::StringSplitOptions::RemoveEmptyEntries);

	for (int i = 0; i < 9 && i < tokens_x->Length; i++)
		mask_X[i] = System::Convert::ToInt32(tokens_x[i]);

	for (int i = 0; i < 9 && i < tokens_y->Length; i++)
		mask_Y[i] = System::Convert::ToInt32(tokens_y[i]);


	ImageProcessLines img(inputImage);
	ImageMatris* cannyout = img.NonMaximumSuperession1(mask_X, mask_Y);
	ImageMatris* hysteries = img.HysteriesTresold(cannyout);
	ImageMatris* outPictureBin = img.BinaryImage(hysteries, Convert::ToInt32(textBox1->Text));
	ImageMatris* outPictureHough = img.HoughLineSpace(outPictureBin);
	ImageMatris* outPicture = img.LinesImage(outPictureHough, outPictureBin->width, outPictureBin->height, Convert::ToInt32(textBox2->Text));

	//DrawOnNewWindow(cannyout, "NonMaximumSupression");
	//DrawOnNewWindow(hysteries, "Hysteries Applied");
	//DrawOnNewWindow(outPictureBin, "Binary Edge Image (from canny)");
	//DrawOnNewWindow(outPictureHough, "Hough line space");
	//DrawOnNewWindow(outPicture, "Output Mask Image");


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
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int mask_X[9];
	int mask_Y[9];

	System::String^ text_X = inputMaskX->Text;
	System::String^ text_Y = inputMaskY->Text;

	array<System::String^>^ tokens_x =
		text_X->Split(gcnew array<wchar_t>{' ', '\n', '\r', '\t'},
			System::StringSplitOptions::RemoveEmptyEntries);

	array<System::String^>^ tokens_y =
		text_Y->Split(gcnew array<wchar_t>{' ', '\n', '\r', '\t'},
			System::StringSplitOptions::RemoveEmptyEntries);

	for (int i = 0; i < 9 && i < tokens_x->Length; i++)
		mask_X[i] = System::Convert::ToInt32(tokens_x[i]);

	for (int i = 0; i < 9 && i < tokens_y->Length; i++)
		mask_Y[i] = System::Convert::ToInt32(tokens_y[i]);

	ImageProcessLines img(inputImage);

	//circle dedection with gradient
	ImageMatris* outPictureGradient = img.FindGradiant(mask_X, mask_Y); //gradyantý direkt binary olarak alýyor.
	ImageMatris* outPictureBin = img.BinaryImage(outPictureGradient, Convert::ToInt32(textBox1->Text));
	TensorMatris* cirlchough = img.HoughCircleSpace(outPictureBin);
	ImageMatris* outPicture = img.PrintTopNCirclesDistinct(cirlchough, System::Convert::ToInt32(textBox3->Text));

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
				bmp->SetPixel(x+1, y, Color::Red);
				bmp->SetPixel(x, y+1, Color::Red);
				bmp->SetPixel(x+1, y+1, Color::Red);
			}


	pictureOut->Image = bmp;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int mask_X[9];
	int mask_Y[9];

	System::String^ text_X = inputMaskX->Text;
	System::String^ text_Y = inputMaskY->Text;

	array<System::String^>^ tokens_x =
		text_X->Split(gcnew array<wchar_t>{' ', '\n', '\r', '\t'},
			System::StringSplitOptions::RemoveEmptyEntries);

	array<System::String^>^ tokens_y =
		text_Y->Split(gcnew array<wchar_t>{' ', '\n', '\r', '\t'},
			System::StringSplitOptions::RemoveEmptyEntries);

	for (int i = 0; i < 9 && i < tokens_x->Length; i++)
		mask_X[i] = System::Convert::ToInt32(tokens_x[i]);

	for (int i = 0; i < 9 && i < tokens_y->Length; i++)
		mask_Y[i] = System::Convert::ToInt32(tokens_y[i]);

	ImageProcessLines img(inputImage);
	ImageMatris* cannyout = img.NonMaximumSuperession1(mask_X, mask_Y);
	ImageMatris* hysteries = img.HysteriesTresold(cannyout);
	ImageMatris* outPictureBin = img.BinaryImage(hysteries, Convert::ToInt32(textBox1->Text));

	TensorMatris* cirlchough = img.HoughCircleSpace(outPictureBin);
	ImageMatris* outPicture = img.PrintTopNCirclesDistinct(cirlchough, System::Convert::ToInt32(textBox3->Text));

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
}
};
}
