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
	/// Сводка для LR3_1
	/// </summary>
	public ref class LR3_1 : public System::Windows::Forms::Form
	{
	public:
		LR3_1(void)
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
		~LR3_1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button3;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LR3_1::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(403, 233);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 50);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &LR3_1::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(328, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(121, 58);
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(391, 130);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(113, 20);
			this->textBox3->TabIndex = 19;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(243, 146);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(86, 146);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(363, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(181, 26);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Значение выражения, найденного\r\n с помощью функции 1-го типа";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(288, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Y";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(125, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"X";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(86, 233);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 50);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Найти значение выражения";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LR3_1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(245, 232);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 51);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Назад к титульному листу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LR3_1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(112, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Задание: Найдите значение выражения";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(363, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(181, 26);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Значение выражения, найденного\r\n с помощью функции 2-го типа\r\n";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(391, 198);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(113, 20);
			this->textBox4->TabIndex = 23;
			// 
			// LR3_1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(586, 295);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"LR3_1";
			this->Text = L"LR3_1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double Dfun1(double x, double y)
		 {
			 double d = (pow(1 - exp(x*y), 2)) / (0.7*log10(fabs(1 - pow(x, 2))));
			 return d;
		 }
		 void Dfun2(double x, double y, double &d)
		 {
			 d=(pow(1 - exp(x*y), 2)) / (0.7*log10(fabs(1 - pow(x, 2))));
		 }
#pragma endregion

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Owner->Show();
	this->Close();
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	double x, y, d;

	x = Convert::ToDouble(textBox1->Text);
	y = Convert::ToDouble(textBox2->Text);
	Dfun2(x, y, d);
	textBox3->Text = Convert::ToString(Dfun1(x, y));
	textBox4->Text = Convert::ToString(d);
}
};
}
