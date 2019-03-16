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
	/// Сводка для LR4
	/// </summary>
	public ref class LR4 : public System::Windows::Forms::Form
	{
	public:
		LR4(void)
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
		~LR4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LR4::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(406, 220);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Назад к титульному листу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LR4::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(314, 220);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 48);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LR4::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Задание : Найдите значение Z:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(222, 221);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 47);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Вычислить значение Z";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &LR4::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(84, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"X";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(190, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Y";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(294, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"A";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(402, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"B";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(61, 219);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Значение Z";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(41, 137);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(147, 137);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(253, 137);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(359, 137);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(41, 235);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 13;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(222, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(229, 99);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// LR4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(504, 280);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"LR4";
			this->Text = L"LR4";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void rez(double a, double b, double x, double y, double &z)
		{
			double min, max;
			if (x*y > 0)
			{
				z = 1 - exp(a*b+x*y);
				MessageBox::Show("Программа выполнила 1-е ветвление", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else
			{
				if (x*y==0)
				{
					min = a * x;
					if (min > y)
						min = y;
					z = b - min;
					MessageBox::Show("Программа выполнила 2-е ветвление", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else
				{
					if (pow(x,3)>exp(y))
					{
						if (pow(x,3)>sqrt(log(pow(x, 2))))
							z = pow(x, 3);
						else	
							z = sqrt(log(pow(x, 2)));
					}
					else
					{
						if (exp(y) > sqrt(log(pow(x, 2))))
							z = exp(y);
						else
							z = sqrt(log(pow(x, 2)));
					}
					MessageBox::Show("Программа выполнила 3-е ветвление", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}

		}
#pragma endregion
		//переход на титул
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Owner->Show();
		this->Close();
	}
		//Закрытие формы
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		double a, b, x, y, z;
		try {
			a = Convert::ToDouble(textBox3->Text);
			b = Convert::ToDouble(textBox4->Text);
			x = Convert::ToDouble(textBox1->Text);
			y = Convert::ToDouble(textBox2->Text);
		}
		catch (System::FormatException^e4)
		{
			MessageBox::Show("Вы ввели неверные данные","Внимание", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		rez(a, b, x, y, z);
		textBox5->Text = Convert::ToString(z);
	}
};
}