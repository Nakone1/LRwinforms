#pragma once

namespace LaboratorniyeR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Titul
	/// </summary>
	public ref class Titul : public System::Windows::Forms::Form
	{
	public:
		Titul(void)
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
		~Titul()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Titul::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(78, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(356, 117);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(432, 417);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Titul::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(29, 163);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 51);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Лабораторная работа №2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Titul::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(215, 438);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Москва 2018";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(412, 342);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 52);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Выполнил студент\r\nГруппы БСТ 1803\r\nГригорьев Ю.В.\r\nВариант №2";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(219, 163);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 51);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Лабораторная работа №3 Задание 2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Titul::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(124, 163);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(89, 51);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Лабораторная работа №3 Задание 1";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Titul::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(314, 163);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(89, 51);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Лабораторная работа №4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Titul::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(409, 163);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(89, 51);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Лабораторная работа №5 задание 1";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Titul::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(29, 220);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(89, 51);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Лабораторная работа №5 задание 2\r\n";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Titul::button7_Click_1);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(124, 220);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(89, 51);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Лабораторная работа №6";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Titul::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(219, 220);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(89, 51);
			this->button9->TabIndex = 11;
			this->button9->Text = L"Лабораторная работа №7\r\n";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Titul::button9_Click);
			// 
			// Titul
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 463);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Titul";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Titul";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		LR2^f1 = gcnew LR2;
		f1->Owner = this;
		f1->Show();
		this->Hide();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		LR3^f2 = gcnew LR3;
		f2->Owner = this;
		f2->Show();
		this->Hide();
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	LR3_1^f2_1 = gcnew LR3_1;
	f2_1->Owner = this;
	f2_1->Show();
	this->Hide();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	LR4^f3 = gcnew LR4;
	f3->Owner = this;
	f3->Show();
	this->Hide();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	LR5^f4 = gcnew LR5;
	f4->Owner = this;
	f4->Show();
	this->Hide();
}
private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e) {
	LR5_1^f4_1 = gcnew LR5_1;
	f4_1->Owner = this;
	f4_1->Show();
	this->Hide();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	LR6^f5 = gcnew LR6;
	f5->Owner = this;
	f5->Show();
	this->Hide();
}

private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	LR7^f6 = gcnew LR7;
	f6->Owner = this;
	f6->Show();
	this->Hide();
}
};
}
