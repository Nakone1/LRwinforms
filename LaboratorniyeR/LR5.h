#pragma once

namespace LaboratorniyeR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

#include <math.h>
	/// <summary>
	/// Сводка для LR5
	/// </summary>
	public ref class LR5 : public System::Windows::Forms::Form
	{
	public:
		LR5(void)
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
		~LR5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox5;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LR5::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 250);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LR5::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 279);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 55);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Назад к титульному листу";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LR5::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(155, 134);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 47);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Построить таблицу значений функции ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &LR5::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(290, 52);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(279, 264);
			this->listBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 72);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(152, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 26);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Наибольшее значение \r\nфункции y=f(x)";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(525, 26);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Задание : Постройте таблицу значений функции y=f(x) и найдите наибольшее значение"
				L" функции y=f(x) \r\n                  при изменении x на отрезке [a;b]c шагом h.";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(326, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(141, 23);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 122);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(56, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"H";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(56, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"A";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 170);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(56, 151);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"B";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(155, 100);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(112, 20);
			this->textBox5->TabIndex = 14;
			// 
			// LR5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(591, 342);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"LR5";
			this->Text = L"LR5";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double rez(double x)
		{
			double r = 3 * pow(cos(2 * x + 1), 2);
			return r;
		}

		void fun(double h, double a, double b, double &max)
		{
			double x, z;
			int i, n;
			max = -4;
			x = a;
			n = Convert::ToInt32(round((b - a) / h) + 1);
			for (i=1;i<=n;i++)
			{
				z = rez(x);
				listBox1->Items->Add("  "+"x="+x+ "  " + "y="+z);
				if (z > max)
					max = z;
				x = x + h;
			}
		}
#pragma endregion

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		double h, a, b, max;
		try 
		{
		h = Convert::ToDouble(textBox2->Text);
		a = Convert::ToDouble(textBox3->Text);
		b = Convert::ToDouble(textBox4->Text);
		}
		catch (System::FormatException^e5_1)
		{
			MessageBox::Show("Вы ввели неверные данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		fun(h, a, b, max);
		textBox5->Text=Convert::ToString(max);

	}	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Owner->Show();
		this->Close();
	}
};
}
