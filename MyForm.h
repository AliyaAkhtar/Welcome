#pragma once

namespace Welcome {

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
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Button^ btnsubmit;
	private: System::Windows::Forms::Label^ lbWelcome;
	private: System::Windows::Forms::TextBox^ tbName;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnsubmit = (gcnew System::Windows::Forms::Button());
			this->lbWelcome = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Your Name";
			// 
			// btnsubmit
			// 
			this->btnsubmit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnsubmit->BackColor = System::Drawing::Color::Moccasin;
			this->btnsubmit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnsubmit->Location = System::Drawing::Point(40, 242);
			this->btnsubmit->Name = L"btnsubmit";
			this->btnsubmit->Size = System::Drawing::Size(363, 37);
			this->btnsubmit->TabIndex = 2;
			this->btnsubmit->Text = L"SUBMIT";
			this->btnsubmit->UseVisualStyleBackColor = false;
			this->btnsubmit->Click += gcnew System::EventHandler(this, &MyForm::btnsubmit_Click);
			// 
			// lbWelcome
			// 
			this->lbWelcome->AutoSize = true;
			this->lbWelcome->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbWelcome->Location = System::Drawing::Point(40, 147);
			this->lbWelcome->Name = L"lbWelcome";
			this->lbWelcome->Size = System::Drawing::Size(0, 22);
			this->lbWelcome->TabIndex = 3;
			this->lbWelcome->Click += gcnew System::EventHandler(this, &MyForm::lbWelcome_Click);
			// 
			// tbName
			// 
			this->tbName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbName->Location = System::Drawing::Point(40, 68);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(363, 26);
			this->tbName->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Orange;
			this->ClientSize = System::Drawing::Size(433, 308);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->lbWelcome);
			this->Controls->Add(this->btnsubmit);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btnsubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Name = this->tbName->Text;
	this->lbWelcome->Text = "Welcome" + Name;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->lbWelcome->Text = "";
}

};
}
