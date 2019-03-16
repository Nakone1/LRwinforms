#pragma once
#include "LibraryLR6/header.h"
namespace LaboratorniyeR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
#include <math.h>
	/// <summary>
	/// Сводка для LR6
	/// </summary>
	public ref class LR6 : public System::Windows::Forms::Form
	{
	public:
		LR6(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~LR6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LR6::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(38, 232);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Назад к титульному листу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LR6::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(80, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"X";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(38, 110);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(101, 20);
			this->textBox1->TabIndex = 2;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(188, 94);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(462, 251);
			this->listBox1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(38, 288);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 46);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LR6::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(52, 200);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 26);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Вычислить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &LR6::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(38, 158);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(101, 20);
			this->textBox2->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(80, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"E";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(35, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(454, 36);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Задание:Вычислите и выведите те члены последовательности:\r\nзначения, которых боль"
				L"ше ε = 0.001 при x = 0.2\r\n";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(495, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(174, 59);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// LR6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 359);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"LR6";
			this->Text = L"Лабораторная работа №6";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void fact(double E, double x)
		{
			double a, b;
			int n;
			a = x;
			n = 1;
			listBox1->Items->Clear();
			while (a > E)
			{
				listBox1->Items->Add("  "+"n=" + n + "  " + "a=" +a);
				MathOperation::LR6::fact(x, b, a, n);
			}
		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Owner->Show();
	this->Close();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	double x, E;
	try
	{
	x = Convert::ToDouble(textBox1->Text);
	E = Convert::ToDouble(textBox2->Text);
	}
	catch (System::FormatException^e)
	{
		MessageBox::Show("Вы ввели неверные данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	fact(E, x);
}
};
}
