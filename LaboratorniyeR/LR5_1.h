#pragma once

namespace LaboratorniyeR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
#include <math.h>
	const double Pi = 3.141592;
	/// <summary>
	/// Сводка для LR5_1
	/// </summary>
	public ref class LR5_1 : public System::Windows::Forms::Form
	{
	public:
		LR5_1(void)
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
		~LR5_1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label8;
	protected:
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	protected:


















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LR5_1::typeid));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 348);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(124, 26);
			this->label8->TabIndex = 35;
			this->label8->Text = L"Сумма положительных\r\n значений функции";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(11, 289);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(149, 26);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Количество положительных\r\n значений функции";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(34, 377);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 33;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(34, 318);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 32;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(34, 254);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 31;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(34, 217);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 30;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(34, 172);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 29;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(34, 136);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 28;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(34, 99);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 27;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(34, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 26;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(177, 62);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(529, 485);
			this->listBox1->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(75, 238);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 13);
			this->label6->TabIndex = 24;
			this->label6->Text = L"H2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(75, 201);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 13);
			this->label5->TabIndex = 23;
			this->label5->Text = L"H1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(77, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"D";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(77, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"C";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(77, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"B";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(77, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 19;
			this->label1->Text = L"A";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(38, 406);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 67);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Построить таблицу\r\nзначений функции ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LR5_1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(49, 479);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 36;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LR5_1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(38, 508);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 58);
			this->button3->TabIndex = 37;
			this->button3->Text = L"Назад к титульному листу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &LR5_1::button3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(97, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(622, 26);
			this->label9->TabIndex = 38;
			this->label9->Text = resources->GetString(L"label9.Text");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(601, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(127, 32);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 39;
			this->pictureBox1->TabStop = false;
			// 
			// LR5_1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(755, 616);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"LR5_1";
			this->Text = L"LR5_1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		double findz(double x, double y)
		{
			double z;
			z = 1 / (x + 2 * Pi - y) - sin(x);
			return z;
		}

		void fun(double a, double b, double c, double d, double h1, double h2, double &sum, int &k)
		{
			double x, y, z;
			int n1, n2, i, j;
			n1 = Convert::ToInt32(round((b - a) / h1) + 1);
			n2 = Convert::ToInt32(round((d - c) / h2) + 1);

			sum = 0;
			k = 0;

			listBox1->Items->Clear();
			x = a;
			for (i = 1; i <= n1; i++)
			{
				y = c;
				for (j = 1; j <= n2; j++)
				{
					z = findz(x, y);

					listBox1->Items->Add("        " + "x=" + Convert::ToString(x) + "   " + "y=" + Convert::ToString(y) + "   " + "z=" + Convert::ToString(z));
					y = y + h2;
					if (z > 0)
					{
						k = k + 1;
						sum = sum + z;
					}
				}
				x = x + h1;
			}
		}

#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		double a, b, c, d, h1, h2, sum;
		int k;
		try {

			a = Convert::ToDouble(textBox1->Text);
			b = Convert::ToDouble(textBox2->Text);
			c = Convert::ToDouble(textBox3->Text);
			d = Convert::ToDouble(textBox4->Text);
			h1 = Convert::ToDouble(textBox5->Text);
			h2 = Convert::ToDouble(textBox6->Text);
		}
		catch (System::FormatException^e5)
		{
			MessageBox::Show("Вы ввели неверные данные", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		fun(a, b, c, d, h1, h2, sum, k);
		textBox7->Text = Convert::ToString(k);
		textBox8->Text = Convert::ToString(sum);
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Owner->Show();
	this->Close();
}
};
}
