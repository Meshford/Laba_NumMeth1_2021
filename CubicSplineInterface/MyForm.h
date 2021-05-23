#pragma once

#include <vector>
#include <string>
#include <fstream>
#include "SplineInterpolate.h"



namespace CubicSplineInterface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	SplineInterpolate* Method;
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;




	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Val1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Val2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Val3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Val4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Val5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Val6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Val7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vak1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vak2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vak3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vak4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vak5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vak6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vak7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vak8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vak9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vak10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vak11;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Val1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Val2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Val3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Val4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Val5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Val6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Val7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Vak1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vak2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vak3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vak4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vak5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vak6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vak7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vak8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vak9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vak10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vak11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(18, 18);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(421, 628);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->AllowDrop = true;
			this->tabPage2->AutoScroll = true;
			this->tabPage2->BackColor = System::Drawing::Color::PowderBlue;
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 31);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(413, 593);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Решение";
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(7, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(319, 374);
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(7, 566);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(194, 123);
			this->groupBox2->TabIndex = 19;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Граничные условия";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(105, 79);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(85, 30);
			this->textBox4->TabIndex = 20;
			this->textBox4->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 22);
			this->label4->TabIndex = 19;
			this->label4->Text = L"S\'\'(Справа)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(105, 36);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(85, 30);
			this->textBox3->TabIndex = 18;
			this->textBox3->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 22);
			this->label3->TabIndex = 17;
			this->label3->Text = L"S\'\'(Слева)";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Функции", L"Первой производной", L"Второй производной" });
			this->comboBox1->Location = System::Drawing::Point(207, 457);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(177, 30);
			this->comboBox1->TabIndex = 16;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(207, 515);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 83);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(3, 420);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(194, 140);
			this->groupBox1->TabIndex = 15;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выберите задачу";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(13, 95);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(174, 26);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Вторая основная";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(13, 66);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(174, 26);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Первая основная";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(13, 37);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(111, 26);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Тестовая ";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(264, 431);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 23);
			this->label6->TabIndex = 13;
			this->label6->Text = L"График:";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(207, 642);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(177, 34);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Показать";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(254, 616);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 23);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Справка:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(207, 387);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(96, 30);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"4";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 395);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(217, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Размерность осн. сетки:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::PowderBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Val1, this->Val2,
					this->Val3, this->Val4, this->Val5, this->Val6, this->Val7
			});
			this->dataGridView1->Location = System::Drawing::Point(446, 49);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(897, 288);
			this->dataGridView1->TabIndex = 1;
			// 
			// Val1
			// 
			this->Val1->HeaderText = L"i";
			this->Val1->MinimumWidth = 6;
			this->Val1->Name = L"Val1";
			this->Val1->Width = 125;
			// 
			// Val2
			// 
			this->Val2->HeaderText = L"xi-1";
			this->Val2->MinimumWidth = 6;
			this->Val2->Name = L"Val2";
			this->Val2->Width = 125;
			// 
			// Val3
			// 
			this->Val3->HeaderText = L"xi";
			this->Val3->MinimumWidth = 6;
			this->Val3->Name = L"Val3";
			this->Val3->Width = 125;
			// 
			// Val4
			// 
			this->Val4->HeaderText = L"ai";
			this->Val4->MinimumWidth = 6;
			this->Val4->Name = L"Val4";
			this->Val4->Width = 125;
			// 
			// Val5
			// 
			this->Val5->HeaderText = L"bi";
			this->Val5->MinimumWidth = 6;
			this->Val5->Name = L"Val5";
			this->Val5->Width = 125;
			// 
			// Val6
			// 
			this->Val6->HeaderText = L"ci";
			this->Val6->MinimumWidth = 6;
			this->Val6->Name = L"Val6";
			this->Val6->Width = 125;
			// 
			// Val7
			// 
			this->Val7->HeaderText = L"di";
			this->Val7->MinimumWidth = 6;
			this->Val7->Name = L"Val7";
			this->Val7->Width = 125;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::PowderBlue;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Vak1, this->Vak2,
					this->Vak3, this->Vak4, this->Vak5, this->Vak6, this->Vak7, this->Vak8, this->Vak9, this->Vak10, this->Vak11
			});
			this->dataGridView2->Location = System::Drawing::Point(446, 343);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(897, 288);
			this->dataGridView2->TabIndex = 2;
			// 
			// Vak1
			// 
			this->Vak1->HeaderText = L"j";
			this->Vak1->MinimumWidth = 6;
			this->Vak1->Name = L"Vak1";
			this->Vak1->Width = 50;
			// 
			// Vak2
			// 
			this->Vak2->HeaderText = L"xj";
			this->Vak2->MinimumWidth = 6;
			this->Vak2->Name = L"Vak2";
			this->Vak2->Width = 80;
			// 
			// Vak3
			// 
			this->Vak3->HeaderText = L"Fj";
			this->Vak3->MinimumWidth = 6;
			this->Vak3->Name = L"Vak3";
			this->Vak3->Width = 80;
			// 
			// Vak4
			// 
			this->Vak4->HeaderText = L"Sj";
			this->Vak4->MinimumWidth = 6;
			this->Vak4->Name = L"Vak4";
			this->Vak4->Width = 80;
			// 
			// Vak5
			// 
			this->Vak5->HeaderText = L"Fj-Sj";
			this->Vak5->MinimumWidth = 6;
			this->Vak5->Name = L"Vak5";
			this->Vak5->Width = 80;
			// 
			// Vak6
			// 
			this->Vak6->HeaderText = L"F\'j";
			this->Vak6->MinimumWidth = 6;
			this->Vak6->Name = L"Vak6";
			this->Vak6->Width = 80;
			// 
			// Vak7
			// 
			this->Vak7->HeaderText = L"S\'j";
			this->Vak7->MinimumWidth = 6;
			this->Vak7->Name = L"Vak7";
			this->Vak7->Width = 80;
			// 
			// Vak8
			// 
			this->Vak8->HeaderText = L"F\'j-S\'j";
			this->Vak8->MinimumWidth = 6;
			this->Vak8->Name = L"Vak8";
			this->Vak8->Width = 80;
			// 
			// Vak9
			// 
			this->Vak9->HeaderText = L"F\'\'j";
			this->Vak9->MinimumWidth = 6;
			this->Vak9->Name = L"Vak9";
			this->Vak9->Width = 80;
			// 
			// Vak10
			// 
			this->Vak10->HeaderText = L"S\'\'j";
			this->Vak10->MinimumWidth = 6;
			this->Vak10->Name = L"Vak10";
			this->Vak10->Width = 80;
			// 
			// Vak11
			// 
			this->Vak11->HeaderText = L"F\'\'j-S\'\'j";
			this->Vak11->MinimumWidth = 6;
			this->Vak11->Name = L"Vak11";
			this->Vak11->Width = 80;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightCyan;
			this->ClientSize = System::Drawing::Size(1354, 649);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		//Тестовая задача
		int n;
		int TaskNumber; //выбор задачи
		vector<double> Section(2), BorderConds(2);
		vector<double> error(6);
		n = (int)Convert::ToDouble(textBox1->Text);
		BorderConds[0] = Convert::ToDouble(textBox3->Text);
		BorderConds[1] = Convert::ToDouble(textBox4->Text);
		double pi = 3.1415926535;
		if (radioButton1->Checked)
		{
			TaskNumber = 1;
			//задаем границы  для тестовой задачи
			Section[0] = -1; 
			Section[1] = 1;
		}
		else
		{
			//задаем границы для двух основных задач
			Section[0] = 1.0;
			Section[1] = pi;
			if (radioButton2->Checked)
				TaskNumber = 2;
			else
				TaskNumber = 3;
		}

		Method = new SplineInterpolate(n, TaskNumber, Section, BorderConds);
		error = Method->Comparison();

		ofstream file("error.txt");
		for (int i = 0; i < error.size(); i++)
		{
			file << error[i] << endl;
		}
		file.close();

		//Вывод данных в таблицу
		OutToDataGrid();

		//Вызов справки
		OutToMessageBox();
		
	}
	
	
	private: void OutToDataGrid()
	{
		dataGridView1->Rows->Clear();
		dataGridView2->Rows->Clear();

		vector<double> Section = Method->GetSection();
		vector<double> a = Method->GetAOdds(), b = Method->GetBOdds();
		vector<double> c = Method->GetCOdds(), d = Method->GetDOdds();

		int n = Method->GetGridDimension();
		double k = 0.005;
		int N = (Section[1] - Section[0]) / k;

		double x = Section[0];
		double h = (Section[1] - Section[0]) / n; //k = (Section[1] - Section[0]) / N;

		dataGridView1->Rows->Add(n);

		for (int i = 1; i <= n; i++)
		{
			dataGridView1->Rows[i-1]->Cells[0]->Value = i;
			dataGridView1->Rows[i - 1]->Cells[1]->Value = round(x * pow(10, 3)) / pow(10, 3);
			dataGridView1->Rows[i - 1]->Cells[2]->Value = round((x + h) * pow(10, 3)) / pow(10, 3);
			dataGridView1->Rows[i - 1]->Cells[3]->Value = round(a[i] * pow(10, 3)) / pow(10, 3);
			dataGridView1->Rows[i - 1]->Cells[4]->Value = round(b[i - 1] * pow(10, 3)) / pow(10, 3);
			dataGridView1->Rows[i - 1]->Cells[5]->Value = round(c[i] * pow(10, 3)) / pow(10, 3);
			dataGridView1->Rows[i - 1]->Cells[6]->Value = round(d[i - 1] * pow(10, 3)) / pow(10, 3);
			x += h;
		}

		a = vector<double>(0);
		b = vector<double>(0);
		c = vector<double>(0);
		d = vector<double>(0);

		x = Section[0];
		dataGridView2->Rows->Add(N + 1);

		vector<vector<double> > Data(6);
		for (int i = 0; i < 6; i++)
			Data[i] = vector<double>(N + 1);
		
		ifstream file("Spline.txt");
		for (int j = 0; j <= N; j++)
		{
			file >> Data[0][j] >> Data[0][j];
		}
		file.close();
		file.open("Spline1.txt");
		for (int j = 0; j <= N; j++)
		{
			file >> Data[1][j] >> Data[1][j];
		}
		file.close();
		file.open("Spline2.txt");
		for (int j = 0; j <= N; j++)
		{
			file >> Data[2][j] >> Data[2][j];
		}
		file.close();
		file.open("Function.txt");
		for (int j = 0; j <= N; j++)
		{
			file >> Data[3][j] >> Data[3][j];
		}
		file.close();
		file.open("Function1.txt");
		for (int j = 0; j <= N; j++)
		{
			file >> Data[4][j] >> Data[4][j];
		}
		file.close();
		file.open("Function2.txt");
		for (int j = 0; j <= N; j++)
		{
			file >> Data[5][j] >> Data[5][j];
		}
		file.close();

		for (int j = 0; j <= N; j++)
		{
			dataGridView2->Rows[j]->Cells[0]->Value = j;
			dataGridView2->Rows[j]->Cells[1]->Value = round(x * pow(10, 3)) / pow(10, 3);
			dataGridView2->Rows[j]->Cells[2]->Value = round(Data[3][j] * pow(10, 3)) / pow(10, 3);
			dataGridView2->Rows[j]->Cells[3]->Value = round(Data[0][j] * pow(10, 3)) / pow(10, 3);
			dataGridView2->Rows[j]->Cells[4]->Value = round(fabs(Data[3][j] - Data[0][j]) * pow(10, 3)) / pow(10, 3);
			dataGridView2->Rows[j]->Cells[5]->Value = round(Data[4][j] * pow(10, 3)) / pow(10, 3);
			dataGridView2->Rows[j]->Cells[6]->Value = round(Data[1][j] * pow(10, 3)) / pow(10, 3);
			dataGridView2->Rows[j]->Cells[7]->Value = round(fabs(Data[4][j] - Data[1][j]) * pow(10, 3)) / pow(10, 3);
			dataGridView2->Rows[j]->Cells[8]->Value = round(Data[5][j] * pow(10, 3)) / pow(10, 3);
			dataGridView2->Rows[j]->Cells[9]->Value = round(Data[2][j] * pow(10, 3)) / pow(10, 3);
			dataGridView2->Rows[j]->Cells[10]->Value = round(fabs(Data[5][j] - Data[2][j]) * pow(10, 3)) / pow(10, 3);
			x += k;
		}
	}
	
	//вывод погрещностей на экраны
	private: void OutToMessageBox()
	{
		//Справка
		ifstream file("error.txt");
		vector<double> error(6);
		for (int i = 0; i < error.size(); i++)
			file >> error[i];
		file.close();

		int n = Method->GetGridDimension();

		String^ s;
		s = "Сетка сплайна: n = " + Convert::ToString(n) + "\n\n";
		s += "Погрешность сплайна на контрольной сетке\n\n";
		s += "max|F-S| = " + Convert::ToString(error[0]) + " при x = " + Convert::ToString(error[3]) + "\n\n";
		s += "Погрешность производной на контрольной сетке\n\n";
		s += "max|F'-S'| = " + Convert::ToString(error[1]) + " при x = " + Convert::ToString(error[4]) + "\n\n";
		s += "Погрешность второй производной на контрольной сетке\n\n";
		s += "max|F''-S''| = " + Convert::ToString(error[2]) + " при x = " + Convert::ToString(error[5]) + "\n\n";

		MessageBox::Show(s, "Справка");
	}
	
	
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		//Вызов справки
		OutToMessageBox();

	}
	
	
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		//График
		//Команды для gnuplot
		FILE* gpipe = _popen("C:\\ProgramData\\gnuplot\\bin\\gnuplot.exe -persist", "w");
		string s = "'C:\\CubicSplineInterface\\CubicSplineInterface\\";

		//w l - with lines
		
		//ofstream command("commands");

		switch (comboBox1->SelectedIndex)
		{
		case 0:
			s = "plot " + s + "Spline.txt' w l title 'S', " + s + "Function.txt' w l title 'F'\n";
			break;
		case 1:
			s = "plot " + s + "Spline1.txt' w l title 'S1', " + s + "Function1.txt' w l title 'F1'\n";
			break;
		case 2:
			s = "plot " + s + "Spline2.txt' w l title 'S2', " + s + "Function2.txt' w l title 'F2'\n";
			break;
		default:
			s = "plot" + s + "Spline.txt' w l title 'S'," + s + "Function.txt' w l title 'S'\n";
		}
		

		//command << "set terminal wxt\n";
		//command << "set grid\n";
		//command << s;
		//system("\"C:\\ProgramData\\gnuplot\\bin\\wgnuplot.exe\" commands");
		fprintf(gpipe, "set terminal wxt persist\n");
		fprintf(gpipe, "set grid\n");
		fprintf(gpipe, s.c_str());
		_pclose(gpipe);
	}
	
	

private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
