#pragma once
#include <string>
#include <stack>
#include <math.h>

namespace MyCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  ExprText;
	protected:
	private: System::Windows::Forms::Button^  DigitOneBtn;
	private: System::Windows::Forms::Button^  DigitTwoBtn;
	private: System::Windows::Forms::Button^  DigitTreeBtn;
	private: System::Windows::Forms::Button^  FourDigitBtn;
	private: System::Windows::Forms::Button^  FiveDigitBtn;
	private: System::Windows::Forms::Button^  SixDigitBtn;
	private: System::Windows::Forms::Button^  SevenDigitBtn;
	private: System::Windows::Forms::Button^  EightDigitBtn;
	private: System::Windows::Forms::Button^  NineDigitBtn;
	private: System::Windows::Forms::Button^  ZeroDigitBtn;
	private: System::Windows::Forms::Button^  ClearBtn;
	private: System::Windows::Forms::Button^  ClearAllBtn;
	private: System::Windows::Forms::Button^  AddBtn;
	private: System::Windows::Forms::Button^  SubBtn;
	private: System::Windows::Forms::Button^  MultBtn;
	private: System::Windows::Forms::Button^  DivBtn;
	private: System::Windows::Forms::Button^  ResultBtn;
	private: System::Windows::Forms::Button^  SinBtn;
	private: System::Windows::Forms::Button^  CosBtn;
	private: System::Windows::Forms::Button^  TgBtn;
	private: System::Windows::Forms::Button^  CtgBtn;
	private: System::Windows::Forms::Button^  PointBtn;








	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ExprText = (gcnew System::Windows::Forms::TextBox());
			this->DigitOneBtn = (gcnew System::Windows::Forms::Button());
			this->DigitTwoBtn = (gcnew System::Windows::Forms::Button());
			this->DigitTreeBtn = (gcnew System::Windows::Forms::Button());
			this->FourDigitBtn = (gcnew System::Windows::Forms::Button());
			this->FiveDigitBtn = (gcnew System::Windows::Forms::Button());
			this->SixDigitBtn = (gcnew System::Windows::Forms::Button());
			this->SevenDigitBtn = (gcnew System::Windows::Forms::Button());
			this->EightDigitBtn = (gcnew System::Windows::Forms::Button());
			this->NineDigitBtn = (gcnew System::Windows::Forms::Button());
			this->ZeroDigitBtn = (gcnew System::Windows::Forms::Button());
			this->ClearBtn = (gcnew System::Windows::Forms::Button());
			this->ClearAllBtn = (gcnew System::Windows::Forms::Button());
			this->AddBtn = (gcnew System::Windows::Forms::Button());
			this->SubBtn = (gcnew System::Windows::Forms::Button());
			this->MultBtn = (gcnew System::Windows::Forms::Button());
			this->DivBtn = (gcnew System::Windows::Forms::Button());
			this->ResultBtn = (gcnew System::Windows::Forms::Button());
			this->SinBtn = (gcnew System::Windows::Forms::Button());
			this->CosBtn = (gcnew System::Windows::Forms::Button());
			this->TgBtn = (gcnew System::Windows::Forms::Button());
			this->CtgBtn = (gcnew System::Windows::Forms::Button());
			this->PointBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ExprText
			// 
			this->ExprText->Location = System::Drawing::Point(12, 12);
			this->ExprText->Name = L"ExprText";
			this->ExprText->ReadOnly = true;
			this->ExprText->Size = System::Drawing::Size(294, 20);
			this->ExprText->TabIndex = 0;
			// 
			// DigitOneBtn
			// 
			this->DigitOneBtn->Location = System::Drawing::Point(12, 38);
			this->DigitOneBtn->Name = L"DigitOneBtn";
			this->DigitOneBtn->Size = System::Drawing::Size(44, 36);
			this->DigitOneBtn->TabIndex = 1;
			this->DigitOneBtn->Text = L"1";
			this->DigitOneBtn->UseVisualStyleBackColor = true;
			this->DigitOneBtn->Click += gcnew System::EventHandler(this, &MyForm::DigitOneBtn_Click);
			// 
			// DigitTwoBtn
			// 
			this->DigitTwoBtn->Location = System::Drawing::Point(62, 38);
			this->DigitTwoBtn->Name = L"DigitTwoBtn";
			this->DigitTwoBtn->Size = System::Drawing::Size(44, 36);
			this->DigitTwoBtn->TabIndex = 2;
			this->DigitTwoBtn->Text = L"2";
			this->DigitTwoBtn->UseVisualStyleBackColor = true;
			this->DigitTwoBtn->Click += gcnew System::EventHandler(this, &MyForm::DigitTwoBtn_Click);
			// 
			// DigitTreeBtn
			// 
			this->DigitTreeBtn->Location = System::Drawing::Point(112, 38);
			this->DigitTreeBtn->Name = L"DigitTreeBtn";
			this->DigitTreeBtn->Size = System::Drawing::Size(44, 36);
			this->DigitTreeBtn->TabIndex = 3;
			this->DigitTreeBtn->Text = L"3";
			this->DigitTreeBtn->UseVisualStyleBackColor = true;
			this->DigitTreeBtn->Click += gcnew System::EventHandler(this, &MyForm::DigitTreeBtn_Click);
			// 
			// FourDigitBtn
			// 
			this->FourDigitBtn->Location = System::Drawing::Point(12, 80);
			this->FourDigitBtn->Name = L"FourDigitBtn";
			this->FourDigitBtn->Size = System::Drawing::Size(44, 36);
			this->FourDigitBtn->TabIndex = 4;
			this->FourDigitBtn->Text = L"4";
			this->FourDigitBtn->UseVisualStyleBackColor = true;
			this->FourDigitBtn->Click += gcnew System::EventHandler(this, &MyForm::FourDigitBtn_Click);
			// 
			// FiveDigitBtn
			// 
			this->FiveDigitBtn->Location = System::Drawing::Point(62, 80);
			this->FiveDigitBtn->Name = L"FiveDigitBtn";
			this->FiveDigitBtn->Size = System::Drawing::Size(44, 36);
			this->FiveDigitBtn->TabIndex = 5;
			this->FiveDigitBtn->Text = L"5";
			this->FiveDigitBtn->UseVisualStyleBackColor = true;
			this->FiveDigitBtn->Click += gcnew System::EventHandler(this, &MyForm::FiveDigitBtn_Click);
			// 
			// SixDigitBtn
			// 
			this->SixDigitBtn->Location = System::Drawing::Point(112, 80);
			this->SixDigitBtn->Name = L"SixDigitBtn";
			this->SixDigitBtn->Size = System::Drawing::Size(44, 36);
			this->SixDigitBtn->TabIndex = 6;
			this->SixDigitBtn->Text = L"6";
			this->SixDigitBtn->UseVisualStyleBackColor = true;
			this->SixDigitBtn->Click += gcnew System::EventHandler(this, &MyForm::SixDigitBtn_Click);
			// 
			// SevenDigitBtn
			// 
			this->SevenDigitBtn->Location = System::Drawing::Point(12, 122);
			this->SevenDigitBtn->Name = L"SevenDigitBtn";
			this->SevenDigitBtn->Size = System::Drawing::Size(44, 36);
			this->SevenDigitBtn->TabIndex = 7;
			this->SevenDigitBtn->Text = L"7";
			this->SevenDigitBtn->UseVisualStyleBackColor = true;
			this->SevenDigitBtn->Click += gcnew System::EventHandler(this, &MyForm::SevenDigitBtn_Click);
			// 
			// EightDigitBtn
			// 
			this->EightDigitBtn->Location = System::Drawing::Point(62, 122);
			this->EightDigitBtn->Name = L"EightDigitBtn";
			this->EightDigitBtn->Size = System::Drawing::Size(44, 36);
			this->EightDigitBtn->TabIndex = 8;
			this->EightDigitBtn->Text = L"8";
			this->EightDigitBtn->UseVisualStyleBackColor = true;
			this->EightDigitBtn->Click += gcnew System::EventHandler(this, &MyForm::EightDigitBtn_Click);
			// 
			// NineDigitBtn
			// 
			this->NineDigitBtn->Location = System::Drawing::Point(112, 122);
			this->NineDigitBtn->Name = L"NineDigitBtn";
			this->NineDigitBtn->Size = System::Drawing::Size(44, 36);
			this->NineDigitBtn->TabIndex = 9;
			this->NineDigitBtn->Text = L"9";
			this->NineDigitBtn->UseVisualStyleBackColor = true;
			this->NineDigitBtn->Click += gcnew System::EventHandler(this, &MyForm::NineDigitBtn_Click);
			// 
			// ZeroDigitBtn
			// 
			this->ZeroDigitBtn->Location = System::Drawing::Point(62, 164);
			this->ZeroDigitBtn->Name = L"ZeroDigitBtn";
			this->ZeroDigitBtn->Size = System::Drawing::Size(44, 36);
			this->ZeroDigitBtn->TabIndex = 10;
			this->ZeroDigitBtn->Text = L"0";
			this->ZeroDigitBtn->UseVisualStyleBackColor = true;
			this->ZeroDigitBtn->Click += gcnew System::EventHandler(this, &MyForm::ZeroDigitBtn_Click);
			// 
			// ClearBtn
			// 
			this->ClearBtn->Location = System::Drawing::Point(112, 164);
			this->ClearBtn->Name = L"ClearBtn";
			this->ClearBtn->Size = System::Drawing::Size(44, 36);
			this->ClearBtn->TabIndex = 11;
			this->ClearBtn->Text = L"C";
			this->ClearBtn->UseVisualStyleBackColor = true;
			this->ClearBtn->Click += gcnew System::EventHandler(this, &MyForm::ClearBtn_Click);
			// 
			// ClearAllBtn
			// 
			this->ClearAllBtn->Location = System::Drawing::Point(12, 164);
			this->ClearAllBtn->Name = L"ClearAllBtn";
			this->ClearAllBtn->Size = System::Drawing::Size(44, 36);
			this->ClearAllBtn->TabIndex = 12;
			this->ClearAllBtn->Text = L"CE";
			this->ClearAllBtn->UseVisualStyleBackColor = true;
			this->ClearAllBtn->Click += gcnew System::EventHandler(this, &MyForm::ClearAllBtn_Click);
			// 
			// AddBtn
			// 
			this->AddBtn->Location = System::Drawing::Point(162, 38);
			this->AddBtn->Name = L"AddBtn";
			this->AddBtn->Size = System::Drawing::Size(44, 36);
			this->AddBtn->TabIndex = 13;
			this->AddBtn->Text = L"+";
			this->AddBtn->UseVisualStyleBackColor = true;
			this->AddBtn->Click += gcnew System::EventHandler(this, &MyForm::AddBtn_Click);
			// 
			// SubBtn
			// 
			this->SubBtn->Location = System::Drawing::Point(162, 80);
			this->SubBtn->Name = L"SubBtn";
			this->SubBtn->Size = System::Drawing::Size(44, 36);
			this->SubBtn->TabIndex = 14;
			this->SubBtn->Text = L"-";
			this->SubBtn->UseVisualStyleBackColor = true;
			this->SubBtn->Click += gcnew System::EventHandler(this, &MyForm::SubBtn_Click);
			// 
			// MultBtn
			// 
			this->MultBtn->Location = System::Drawing::Point(162, 122);
			this->MultBtn->Name = L"MultBtn";
			this->MultBtn->Size = System::Drawing::Size(44, 36);
			this->MultBtn->TabIndex = 15;
			this->MultBtn->Text = L"*";
			this->MultBtn->UseVisualStyleBackColor = true;
			this->MultBtn->Click += gcnew System::EventHandler(this, &MyForm::MultBtn_Click);
			// 
			// DivBtn
			// 
			this->DivBtn->Location = System::Drawing::Point(162, 164);
			this->DivBtn->Name = L"DivBtn";
			this->DivBtn->Size = System::Drawing::Size(44, 36);
			this->DivBtn->TabIndex = 16;
			this->DivBtn->Text = L"/";
			this->DivBtn->UseVisualStyleBackColor = true;
			this->DivBtn->Click += gcnew System::EventHandler(this, &MyForm::DivBtn_Click);
			// 
			// ResultBtn
			// 
			this->ResultBtn->Location = System::Drawing::Point(212, 38);
			this->ResultBtn->Name = L"ResultBtn";
			this->ResultBtn->Size = System::Drawing::Size(44, 36);
			this->ResultBtn->TabIndex = 17;
			this->ResultBtn->Text = L"=";
			this->ResultBtn->UseVisualStyleBackColor = true;
			this->ResultBtn->Click += gcnew System::EventHandler(this, &MyForm::ResultBtn_Click);
			// 
			// SinBtn
			// 
			this->SinBtn->Location = System::Drawing::Point(212, 80);
			this->SinBtn->Name = L"SinBtn";
			this->SinBtn->Size = System::Drawing::Size(44, 36);
			this->SinBtn->TabIndex = 18;
			this->SinBtn->Text = L"sin";
			this->SinBtn->UseVisualStyleBackColor = true;
			this->SinBtn->Click += gcnew System::EventHandler(this, &MyForm::SinBtn_Click);
			// 
			// CosBtn
			// 
			this->CosBtn->Location = System::Drawing::Point(212, 122);
			this->CosBtn->Name = L"CosBtn";
			this->CosBtn->Size = System::Drawing::Size(44, 36);
			this->CosBtn->TabIndex = 19;
			this->CosBtn->Text = L"cos";
			this->CosBtn->UseVisualStyleBackColor = true;
			this->CosBtn->Click += gcnew System::EventHandler(this, &MyForm::CosBtn_Click);
			// 
			// TgBtn
			// 
			this->TgBtn->Location = System::Drawing::Point(212, 164);
			this->TgBtn->Name = L"TgBtn";
			this->TgBtn->Size = System::Drawing::Size(44, 36);
			this->TgBtn->TabIndex = 20;
			this->TgBtn->Text = L"tg";
			this->TgBtn->UseVisualStyleBackColor = true;
			this->TgBtn->Click += gcnew System::EventHandler(this, &MyForm::TgBtn_Click);
			// 
			// CtgBtn
			// 
			this->CtgBtn->Location = System::Drawing::Point(262, 38);
			this->CtgBtn->Name = L"CtgBtn";
			this->CtgBtn->Size = System::Drawing::Size(44, 36);
			this->CtgBtn->TabIndex = 21;
			this->CtgBtn->Text = L"ctg";
			this->CtgBtn->UseVisualStyleBackColor = true;
			this->CtgBtn->Click += gcnew System::EventHandler(this, &MyForm::CtgBtn_Click);
			// 
			// PointBtn
			// 
			this->PointBtn->Location = System::Drawing::Point(262, 80);
			this->PointBtn->Name = L"PointBtn";
			this->PointBtn->Size = System::Drawing::Size(44, 36);
			this->PointBtn->TabIndex = 22;
			this->PointBtn->Text = L".";
			this->PointBtn->UseVisualStyleBackColor = true;
			this->PointBtn->Click += gcnew System::EventHandler(this, &MyForm::PointBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(314, 207);
			this->Controls->Add(this->PointBtn);
			this->Controls->Add(this->CtgBtn);
			this->Controls->Add(this->TgBtn);
			this->Controls->Add(this->CosBtn);
			this->Controls->Add(this->SinBtn);
			this->Controls->Add(this->ResultBtn);
			this->Controls->Add(this->DivBtn);
			this->Controls->Add(this->MultBtn);
			this->Controls->Add(this->SubBtn);
			this->Controls->Add(this->AddBtn);
			this->Controls->Add(this->ClearAllBtn);
			this->Controls->Add(this->ClearBtn);
			this->Controls->Add(this->ZeroDigitBtn);
			this->Controls->Add(this->NineDigitBtn);
			this->Controls->Add(this->EightDigitBtn);
			this->Controls->Add(this->SevenDigitBtn);
			this->Controls->Add(this->SixDigitBtn);
			this->Controls->Add(this->FiveDigitBtn);
			this->Controls->Add(this->FourDigitBtn);
			this->Controls->Add(this->DigitTreeBtn);
			this->Controls->Add(this->DigitTwoBtn);
			this->Controls->Add(this->DigitOneBtn);
			this->Controls->Add(this->ExprText);
			this->Name = L"MyForm";
			this->Text = L"MyCalc";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		private:
			float f_operand, s_operand;
			bool add = false, sub = false, mult = false, div = false;
			String ^ buf = "";

private:
	System::Void DigitOneBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "1";
	}
private: 
	System::Void DigitTwoBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "2";
	}
private: 
	System::Void DigitTreeBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "3";
	}
private: 
	System::Void FourDigitBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "4";
	}
private: 
	System::Void FiveDigitBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "5";
	}
private: 
	System::Void SixDigitBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "6";
	}
private: 
	System::Void SevenDigitBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "7";
	}
private: 
	System::Void EightDigitBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "8";
	}
private: 
	System::Void NineDigitBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "9";
	}
private: 
	System::Void ZeroDigitBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "0";
	}
private: 
	System::Void ClearBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		String ^ buf = ExprText->Text;
		ExprText->Text = buf->Substring(0, buf->Length - 1);
	}
private: 
	System::Void ClearAllBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text = "";
		buf = "";
	}
private: 
	System::Void PointBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += ",";
	}
private: 
	System::Void AddBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		String ^ expr_buf = ExprText->Text;

		ExprText->Text = "";
		buf = expr_buf;
		add = true;

		//float a = atof(expr_buf->ToCharArray);

		//f_operand = a;

	}
private: 
	System::Void ResultBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (buf == "inf")
			buf = "0";
		if (add)
		{
			float a = System::Double::Parse(buf);

			float b = System::Double::Parse(ExprText->Text);

			float s = a + b;

			ExprText->Text = "" + s;
		}
		if (sub)
		{
			float a = System::Double::Parse(buf);

			float b = System::Double::Parse(ExprText->Text);

			float s = a - b;

			ExprText->Text = "" + s;
		}
		if (mult)
		{
			double a = System::Double::Parse(buf);

			double b = System::Double::Parse(ExprText->Text);

			double s = a * b;

			ExprText->Text = "" + s;
		}
		if (div)
		{
			float a = System::Double::Parse(buf);

			float b = System::Double::Parse(ExprText->Text);

			if (b != 0)
			{
				float s = a / b;
				ExprText->Text = "" + s;
			}
			else
			{
				//float s = a + b;

				ExprText->Text = "inf";
			}
		}

		add = sub = mult = div = false;
	}
private: 
	System::Void SubBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (ExprText->Text == "")
			ExprText->Text = "-";
		else
		{

			String ^ expr_buf = ExprText->Text;

			ExprText->Text = "";
			buf = expr_buf;
			sub = true;
		}

	}
private: 
	System::Void MultBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		String ^ expr_buf = ExprText->Text;

		ExprText->Text = "";
		buf = expr_buf;
		mult = true;
	}
private: 
	System::Void DivBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		String ^ expr_buf = ExprText->Text;

		ExprText->Text = "";
		buf = expr_buf;
		div = true;
	}
private: 
	System::Void SinBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		double a = System::Double::Parse(ExprText->Text);
		ExprText->Text = "" + sin(a);
	}
private: 
	System::Void CosBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		double a = System::Double::Parse(ExprText->Text);
		ExprText->Text = "" + cos(a);
	}
private: 
	System::Void TgBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		double a = System::Double::Parse(ExprText->Text);
		ExprText->Text = "" + tan(a);
	}
private: 
	System::Void CtgBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		double a = System::Double::Parse(ExprText->Text);
		ExprText->Text = "" + (1/tan(a));
	}
};
}
