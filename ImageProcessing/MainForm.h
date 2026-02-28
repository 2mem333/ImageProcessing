#pragma once
#include <iostream>

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
	public:
	private:
		int *inputImage = new int[400*400];

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureIn))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureOut))->BeginInit();
			this->panel2->SuspendLayout();
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
			this->panel3->Location = System::Drawing::Point(555, 33);
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
			this->moveMaskButton->Location = System::Drawing::Point(134, 447);
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
			this->label1->Location = System::Drawing::Point(556, 9);
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
			this->label3->Location = System::Drawing::Point(907, 444);
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
			this->label4->Location = System::Drawing::Point(460, 12);
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
			this->panel2->Location = System::Drawing::Point(455, 33);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(77, 78);
			this->panel2->TabIndex = 38;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->ClientSize = System::Drawing::Size(984, 486);
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
			pictureIn->Image =
				System::Drawing::Image::FromFile(openFileDialog1->FileName);

			int W = 400;
			int H = 400;

			System::Drawing::Bitmap^ scaled =
				gcnew System::Drawing::Bitmap(W, H);

			System::Drawing::Graphics^ g =
				System::Drawing::Graphics::FromImage(scaled);

			g->Clear(System::Drawing::Color::Black);

			g->InterpolationMode =
				System::Drawing::Drawing2D::InterpolationMode::HighQualityBicubic;

			g->DrawImage(pictureIn->Image, 0, 0, W, H);

			delete g;

			for (int row = 0; row < W; row++)
			{
				for (int col = 0; col < H; col++)
				{
					System::Drawing::Color c = scaled->GetPixel(row, col);

					//griye çevir
					int gray = (int)(0.299 * c.R + 0.587 * c.G + 0.114 * c.B);

					inputImage[col + row*400] = gray;
				}
			}

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


	int rowCount = 400;
	int colCount = 400;

	int maskRowCount = 3;
	int maskColCount = 3;

	//MASK matrisinin orta hücresinin kenarlara uzaklýðýný çýkartýrýz.
	int outRowCount = rowCount - 2;
	int outColCount = colCount - 2;

	//MASK'IN EDGE PROBLEMÝ YUZUNDEN BELLI BÝR MÝKTAR BOSLUK BIRAKMAK ZORUNDAYIZ GEZINIRKEN!

	int *outPicture = new int[outRowCount*outColCount];

	for (int r = 0; r < outRowCount; r++)
	{
		for (int c = 0; c < outColCount; c++)
		{
			int sum = 0;
			for (int i = 0; i < 3; i++)
				for (int a = 0; a < 3; a++)
					sum += inputImage[(c + a) + (r+i)*400] * mask[a + i*3];

			if (sum < 0) sum = 0;
			if (sum > 255) sum = 255;
			outPicture[c + r * (outColCount)] = sum;
			
		}
	}

//DRAW THE OUTPUT PICTURE
	System::Drawing::Bitmap^ bmp =
		gcnew System::Drawing::Bitmap(
			outRowCount,
			outColCount,
			System::Drawing::Imaging::PixelFormat::Format24bppRgb
		);

	for (int row = 0; row < outRowCount; row++)
	{
		for (int col = 0; col < outColCount; col++)
		{
			int gray = outPicture[row * outColCount + col];

			if (gray < 0) gray = 0;
			if (gray > 255) gray = 255;

			System::Drawing::Color c =
				System::Drawing::Color::FromArgb(gray, gray, gray);

			bmp->SetPixel(row, col, c);
		}
	}

	pictureOut->SizeMode =
		System::Windows::Forms::PictureBoxSizeMode::Normal;

	pictureOut->Image = bmp;

}
};
}
