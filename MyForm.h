#pragma once

namespace Pexel {

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnZoomIn;
	private: System::Windows::Forms::Button^ btnZoomOut;
	private: System::Windows::Forms::Button^ btnNext;
	private: System::Windows::Forms::Button^ btnPrevious;


	private: System::Windows::Forms::Button^ btnOpen;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnDefault;

	private: System::Windows::Forms::OpenFileDialog^ fileDialog;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lbEmpty;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnOpen = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnDefault = (gcnew System::Windows::Forms::Button());
			this->btnZoomIn = (gcnew System::Windows::Forms::Button());
			this->btnZoomOut = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnPrevious = (gcnew System::Windows::Forms::Button());
			this->fileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lbEmpty = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnOpen);
			this->panel1->Controls->Add(this->btnClose);
			this->panel1->Controls->Add(this->btnDefault);
			this->panel1->Controls->Add(this->btnZoomIn);
			this->panel1->Controls->Add(this->btnZoomOut);
			this->panel1->Controls->Add(this->btnNext);
			this->panel1->Controls->Add(this->btnPrevious);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(855, 67);
			this->panel1->TabIndex = 0;
			// 
			// btnOpen
			// 
			this->btnOpen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnOpen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->btnOpen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnOpen->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btnOpen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOpen->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOpen->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnOpen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOpen.Image")));
			this->btnOpen->Location = System::Drawing::Point(770, 12);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Size = System::Drawing::Size(70, 43);
			this->btnOpen->TabIndex = 7;
			this->btnOpen->UseVisualStyleBackColor = false;
			this->btnOpen->Click += gcnew System::EventHandler(this, &MyForm::btnOpen_Click);
			// 
			// btnClose
			// 
			this->btnClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->btnClose->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnClose.Image")));
			this->btnClose->Location = System::Drawing::Point(694, 12);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(70, 43);
			this->btnClose->TabIndex = 6;
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnDefault
			// 
			this->btnDefault->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnDefault->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->btnDefault->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btnDefault->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDefault->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDefault->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDefault->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDefault.Image")));
			this->btnDefault->Location = System::Drawing::Point(468, 12);
			this->btnDefault->Name = L"btnDefault";
			this->btnDefault->Size = System::Drawing::Size(70, 43);
			this->btnDefault->TabIndex = 5;
			this->btnDefault->UseVisualStyleBackColor = false;
			this->btnDefault->Click += gcnew System::EventHandler(this, &MyForm::btnDefault_Click);
			// 
			// btnZoomIn
			// 
			this->btnZoomIn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnZoomIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->btnZoomIn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnZoomIn->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btnZoomIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnZoomIn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnZoomIn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnZoomIn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnZoomIn.Image")));
			this->btnZoomIn->Location = System::Drawing::Point(392, 12);
			this->btnZoomIn->Name = L"btnZoomIn";
			this->btnZoomIn->Size = System::Drawing::Size(70, 43);
			this->btnZoomIn->TabIndex = 4;
			this->btnZoomIn->UseVisualStyleBackColor = false;
			this->btnZoomIn->Click += gcnew System::EventHandler(this, &MyForm::btnZoomIn_Click);
			// 
			// btnZoomOut
			// 
			this->btnZoomOut->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnZoomOut->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->btnZoomOut->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btnZoomOut->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btnZoomOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnZoomOut->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnZoomOut->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnZoomOut->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnZoomOut.Image")));
			this->btnZoomOut->Location = System::Drawing::Point(316, 12);
			this->btnZoomOut->Name = L"btnZoomOut";
			this->btnZoomOut->Size = System::Drawing::Size(70, 43);
			this->btnZoomOut->TabIndex = 3;
			this->btnZoomOut->UseVisualStyleBackColor = false;
			this->btnZoomOut->Click += gcnew System::EventHandler(this, &MyForm::btnZoomOut_Click);
			// 
			// btnNext
			// 
			this->btnNext->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->btnNext->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNext->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNext->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnNext->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNext.Image")));
			this->btnNext->Location = System::Drawing::Point(91, 12);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(70, 43);
			this->btnNext->TabIndex = 2;
			this->btnNext->UseVisualStyleBackColor = false;
			this->btnNext->Click += gcnew System::EventHandler(this, &MyForm::btnNext_Click);
			// 
			// btnPrevious
			// 
			this->btnPrevious->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->btnPrevious->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->btnPrevious->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrevious->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrevious->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnPrevious->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPrevious.Image")));
			this->btnPrevious->Location = System::Drawing::Point(15, 12);
			this->btnPrevious->Name = L"btnPrevious";
			this->btnPrevious->Size = System::Drawing::Size(70, 43);
			this->btnPrevious->TabIndex = 1;
			this->btnPrevious->UseVisualStyleBackColor = false;
			this->btnPrevious->Click += gcnew System::EventHandler(this, &MyForm::btnPrevious_Click);
			// 
			// fileDialog
			// 
			this->fileDialog->Filter = L"\"JPEG|*.jpg|All Files|*.*\"";
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->Controls->Add(this->lbEmpty);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(0, 73);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(855, 438);
			this->panel2->TabIndex = 1;
			// 
			// lbEmpty
			// 
			this->lbEmpty->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbEmpty->BackColor = System::Drawing::Color::Transparent;
			this->lbEmpty->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEmpty->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lbEmpty->Location = System::Drawing::Point(15, 3);
			this->lbEmpty->Name = L"lbEmpty";
			this->lbEmpty->Size = System::Drawing::Size(825, 426);
			this->lbEmpty->TabIndex = 8;
			this->lbEmpty->Text = L"Image not selected";
			this->lbEmpty->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Location = System::Drawing::Point(15, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(825, 426);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(855, 514);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(871, 553);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pexel";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


		array<String^>^ files;
		String^ path;
		int currentIndex;
		const int zoomLevel = 100;
		int Zooms = 0;
		bool fileOpened = false;

	 
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->ImageLocation = "";
	fileOpened = false;
	this->lbEmpty->Show();

}

private: System::Void btnOpen_Click(System::Object^ sender, System::EventArgs^ e) {
	if (fileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		this->lbEmpty->Hide();
		fileOpened = true;
		pictureBox1->ImageLocation = fileDialog->FileName;
		path = System::IO::Path::GetDirectoryName(fileDialog->FileName);
		files = System::IO::Directory::GetFiles(path);
		for (int i = 0; i < files->Length; i++)
		{
			if (files[i] == fileDialog->FileName)
			{
				currentIndex = i;
				break;
			}
		}
	}
}
private: System::Void btnNext_Click(System::Object^ sender, System::EventArgs^ e) {
	if (fileOpened)
	{
		if (currentIndex != files->Length - 1)
		{
			currentIndex++;
		}
		pictureBox1->ImageLocation = files[currentIndex];
	}
	else
	{
		MessageBox::Show("Image is not opened.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void btnPrevious_Click(System::Object^ sender, System::EventArgs^ e) {
	if (fileOpened)
	{
		if (currentIndex != 0)
		{
			currentIndex--;
		}
		pictureBox1->ImageLocation = files[currentIndex];
	}
	else
	{
		MessageBox::Show("Image is not opened.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void btnZoomIn_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Top -= zoomLevel / 2;
	pictureBox1->Left -= zoomLevel / 2;
	pictureBox1->Height += zoomLevel;
	pictureBox1->Width += zoomLevel;
	Zooms++;
}
private: System::Void btnZoomOut_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Top += zoomLevel / 2;
	pictureBox1->Left += zoomLevel / 2;
	pictureBox1->Height -= zoomLevel;
	pictureBox1->Width -= zoomLevel;
	Zooms--;
}
private: System::Void btnDefault_Click(System::Object^ sender, System::EventArgs^ e) {
			int newZoom = Zooms;
			if (Zooms > 0)
			{
				for (int i = 0; i < newZoom; i++)
				{
					btnZoomOut->PerformClick();
				}
			}
			if (Zooms < 0)
			{
				for (int i = 0; i > newZoom; i--)
				{
					btnZoomIn->PerformClick();
				}
			}
			Zooms = 0;
		}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (currentIndex != 0)
	{
		currentIndex--;
	}
	pictureBox1->ImageLocation = files[currentIndex];
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (currentIndex != files->Length - 1)
	{
		currentIndex++;
	}
	pictureBox1->ImageLocation = files[currentIndex];
}
private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Left)
	{
		if (currentIndex != 0)
		{
			currentIndex--;
		}
		pictureBox1->ImageLocation = files[currentIndex];
	}
}

};
}
