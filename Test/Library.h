#pragma once
#include "SqlPart.h"

namespace Test 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Library
	/// </summary>
	public ref class Library : public System::Windows::Forms::Form
	{
	public:
		Library(void)
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
		~Library()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteByToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ allFieldsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ titleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ publisherToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ yearToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sectionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ratingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aviableToolStripMenuItem;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::Button^ button3;






	private: System::Windows::Forms::Label^ label15;






	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TabPage^ tabPage4;





	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label18;


	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ findByToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ titleToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ authorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ publisherToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ yearToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ sectionToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ratingToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ aviableToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ iDToolStripMenuItem;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::ListBox^ listBox1;
private: System::Windows::Forms::ToolStripMenuItem^ deleteAllToolStripMenuItem;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TabPage^ tabPage5;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::ListBox^ listBox3;
private: System::Windows::Forms::ListBox^ listBox2;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label22;


































	private: System::ComponentModel::IContainer^ components;

	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Library::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->deleteByToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->allFieldsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->titleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->publisherToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sectionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ratingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aviableToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->findByToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->titleToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->authorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->publisherToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yearToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sectionToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ratingToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aviableToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->iDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1130, 362);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->Click += gcnew System::EventHandler(this, &Library::tabControl1_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::AliceBlue;
			this->tabPage1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->progressBar1);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1036, 336);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"INSERT";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(353, 44);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(277, 26);
			this->label12->TabIndex = 19;
			this->label12->Text = L"This Title already exists!!!";
			this->label12->Visible = false;
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::SystemColors::Highlight;
			this->progressBar1->Location = System::Drawing::Point(422, 205);
			this->progressBar1->MarqueeAnimationSpeed = 30;
			this->progressBar1->Maximum = 2401;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(195, 23);
			this->progressBar1->TabIndex = 18;
			this->progressBar1->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(335, 44);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 27);
			this->label9->TabIndex = 17;
			this->label9->Visible = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(436, 234);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 51);
			this->button1->TabIndex = 16;
			this->button1->Text = L"INSERT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Library::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(858, 106);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 24);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Aviable";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(736, 106);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 24);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Rating";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(592, 106);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 24);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Section";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(475, 106);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 24);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Year";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(315, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 24);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Publisher";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(194, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 24);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Author";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Default;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(77, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 24);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Title";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(848, 133);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 26);
			this->textBox8->TabIndex = 7;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(716, 133);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 26);
			this->textBox7->TabIndex = 6;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(580, 133);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 26);
			this->textBox6->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(450, 133);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(303, 133);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(114, 26);
			this->textBox4->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(177, 133);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(50, 133);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 1;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::AliceBlue;
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1036, 336);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"SELECT";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(45, 45);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(955, 25);
			this->comboBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(431, 174);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(253, 57);
			this->button2->TabIndex = 1;
			this->button2->Text = L"SELECT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Library::button2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::AliceBlue;
			this->tabPage3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Controls->Add(this->progressBar2);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->textBox14);
			this->tabPage3->Controls->Add(this->menuStrip1);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1036, 336);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"DELETE";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(413, 119);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(226, 70);
			this->button5->TabIndex = 37;
			this->button5->Text = L"DELETE ALL";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &Library::button5_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(222, 131);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(591, 32);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Сhoose which of the table fields you will delete ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(409, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 24);
			this->label1->TabIndex = 35;
			// 
			// progressBar2
			// 
			this->progressBar2->BackColor = System::Drawing::SystemColors::Highlight;
			this->progressBar2->Location = System::Drawing::Point(378, 166);
			this->progressBar2->MarqueeAnimationSpeed = 30;
			this->progressBar2->Maximum = 2401;
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(261, 23);
			this->progressBar2->TabIndex = 34;
			this->progressBar2->Visible = false;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(378, 216);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(261, 55);
			this->button3->TabIndex = 33;
			this->button3->Text = L"DELETE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Library::button3_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Cursor = System::Windows::Forms::Cursors::Default;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(489, 61);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(32, 24);
			this->label15->TabIndex = 26;
			this->label15->Text = L"ID";
			this->label15->Visible = false;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(378, 104);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(261, 41);
			this->textBox14->TabIndex = 19;
			this->textBox14->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::AliceBlue;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->deleteByToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(130, 34);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// deleteByToolStripMenuItem
			// 
			this->deleteByToolStripMenuItem->AutoSize = false;
			this->deleteByToolStripMenuItem->BackColor = System::Drawing::Color::Gray;
			this->deleteByToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->deleteByToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->deleteByToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->allFieldsToolStripMenuItem,
					this->titleToolStripMenuItem, this->publisherToolStripMenuItem, this->yearToolStripMenuItem, this->sectionToolStripMenuItem,
					this->ratingToolStripMenuItem, this->aviableToolStripMenuItem, this->deleteAllToolStripMenuItem
			});
			this->deleteByToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->deleteByToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Transparent;
			this->deleteByToolStripMenuItem->Name = L"deleteByToolStripMenuItem";
			this->deleteByToolStripMenuItem->Size = System::Drawing::Size(122, 30);
			this->deleteByToolStripMenuItem->Text = L"Delete by";
			this->deleteByToolStripMenuItem->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			// 
			// allFieldsToolStripMenuItem
			// 
			this->allFieldsToolStripMenuItem->Name = L"allFieldsToolStripMenuItem";
			this->allFieldsToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->allFieldsToolStripMenuItem->Text = L"ID";
			this->allFieldsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Library::allFieldsToolStripMenuItem_Click);
			// 
			// titleToolStripMenuItem
			// 
			this->titleToolStripMenuItem->ImageTransparentColor = System::Drawing::SystemColors::Highlight;
			this->titleToolStripMenuItem->Name = L"titleToolStripMenuItem";
			this->titleToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->titleToolStripMenuItem->Text = L"Title";
			this->titleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Library::titleToolStripMenuItem_Click);
			// 
			// publisherToolStripMenuItem
			// 
			this->publisherToolStripMenuItem->Name = L"publisherToolStripMenuItem";
			this->publisherToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->publisherToolStripMenuItem->Text = L"Publisher";
			this->publisherToolStripMenuItem->Click += gcnew System::EventHandler(this, &Library::publisherToolStripMenuItem_Click);
			// 
			// yearToolStripMenuItem
			// 
			this->yearToolStripMenuItem->Name = L"yearToolStripMenuItem";
			this->yearToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->yearToolStripMenuItem->Text = L"Year";
			this->yearToolStripMenuItem->Click += gcnew System::EventHandler(this, &Library::yearToolStripMenuItem_Click);
			// 
			// sectionToolStripMenuItem
			// 
			this->sectionToolStripMenuItem->Name = L"sectionToolStripMenuItem";
			this->sectionToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->sectionToolStripMenuItem->Text = L"Section";
			this->sectionToolStripMenuItem->Click += gcnew System::EventHandler(this, &Library::sectionToolStripMenuItem_Click);
			// 
			// ratingToolStripMenuItem
			// 
			this->ratingToolStripMenuItem->Name = L"ratingToolStripMenuItem";
			this->ratingToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->ratingToolStripMenuItem->Text = L"Rating";
			this->ratingToolStripMenuItem->Click += gcnew System::EventHandler(this, &Library::ratingToolStripMenuItem_Click);
			// 
			// aviableToolStripMenuItem
			// 
			this->aviableToolStripMenuItem->Name = L"aviableToolStripMenuItem";
			this->aviableToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->aviableToolStripMenuItem->Text = L"Aviable";
			this->aviableToolStripMenuItem->Click += gcnew System::EventHandler(this, &Library::aviableToolStripMenuItem_Click);
			// 
			// deleteAllToolStripMenuItem
			// 
			this->deleteAllToolStripMenuItem->Name = L"deleteAllToolStripMenuItem";
			this->deleteAllToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->deleteAllToolStripMenuItem->Text = L"Delete All";
			this->deleteAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &Library::deleteAllToolStripMenuItem_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::AliceBlue;
			this->tabPage4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage4->Controls->Add(this->listBox1);
			this->tabPage4->Controls->Add(this->label20);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->label11);
			this->tabPage4->Controls->Add(this->textBox1);
			this->tabPage4->Controls->Add(this->label18);
			this->tabPage4->Controls->Add(this->menuStrip2);
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1122, 336);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Search By Field";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 17;
			this->listBox1->Location = System::Drawing::Point(239, 14);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(878, 293);
			this->listBox1->TabIndex = 14;
			this->listBox1->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::Red;
			this->label20->Location = System::Drawing::Point(0, 179);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(227, 27);
			this->label20->TabIndex = 13;
			this->label20->Text = L"You didn\'t fill the field";
			this->label20->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(440, 179);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 19);
			this->label19->TabIndex = 12;
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(16, 209);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(189, 43);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Find";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &Library::button4_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(240, 139);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(561, 32);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Сhoose which of the table fields you will find";
			this->label11->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(117, 110);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(116, 26);
			this->textBox1->TabIndex = 8;
			this->textBox1->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold));
			this->label18->Location = System::Drawing::Point(1, 110);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(121, 22);
			this->label18->TabIndex = 7;
			this->label18->Text = L"Write Aviable";
			this->label18->Visible = false;
			// 
			// menuStrip2
			// 
			this->menuStrip2->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->findByToolStripMenuItem });
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(91, 30);
			this->menuStrip2->TabIndex = 9;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// findByToolStripMenuItem
			// 
			this->findByToolStripMenuItem->BackColor = System::Drawing::Color::DarkGray;
			this->findByToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->titleToolStripMenuItem1,
					this->authorToolStripMenuItem, this->publisherToolStripMenuItem1, this->yearToolStripMenuItem1, this->sectionToolStripMenuItem1,
					this->ratingToolStripMenuItem1, this->aviableToolStripMenuItem1, this->iDToolStripMenuItem
			});
			this->findByToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold));
			this->findByToolStripMenuItem->Name = L"findByToolStripMenuItem";
			this->findByToolStripMenuItem->Size = System::Drawing::Size(83, 26);
			this->findByToolStripMenuItem->Text = L"Find by";
			// 
			// titleToolStripMenuItem1
			// 
			this->titleToolStripMenuItem1->Name = L"titleToolStripMenuItem1";
			this->titleToolStripMenuItem1->Size = System::Drawing::Size(157, 26);
			this->titleToolStripMenuItem1->Text = L"Title";
			this->titleToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Library::titleToolStripMenuItem1_Click);
			// 
			// authorToolStripMenuItem
			// 
			this->authorToolStripMenuItem->Name = L"authorToolStripMenuItem";
			this->authorToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->authorToolStripMenuItem->Text = L"Author";
			this->authorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Library::authorToolStripMenuItem_Click);
			// 
			// publisherToolStripMenuItem1
			// 
			this->publisherToolStripMenuItem1->Name = L"publisherToolStripMenuItem1";
			this->publisherToolStripMenuItem1->Size = System::Drawing::Size(157, 26);
			this->publisherToolStripMenuItem1->Text = L"Publisher";
			this->publisherToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Library::publisherToolStripMenuItem1_Click);
			// 
			// yearToolStripMenuItem1
			// 
			this->yearToolStripMenuItem1->Name = L"yearToolStripMenuItem1";
			this->yearToolStripMenuItem1->Size = System::Drawing::Size(157, 26);
			this->yearToolStripMenuItem1->Text = L"Year";
			this->yearToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Library::yearToolStripMenuItem1_Click);
			// 
			// sectionToolStripMenuItem1
			// 
			this->sectionToolStripMenuItem1->Name = L"sectionToolStripMenuItem1";
			this->sectionToolStripMenuItem1->Size = System::Drawing::Size(157, 26);
			this->sectionToolStripMenuItem1->Text = L"Section";
			this->sectionToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Library::sectionToolStripMenuItem1_Click);
			// 
			// ratingToolStripMenuItem1
			// 
			this->ratingToolStripMenuItem1->Name = L"ratingToolStripMenuItem1";
			this->ratingToolStripMenuItem1->Size = System::Drawing::Size(157, 26);
			this->ratingToolStripMenuItem1->Text = L"Rating";
			this->ratingToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Library::ratingToolStripMenuItem1_Click);
			// 
			// aviableToolStripMenuItem1
			// 
			this->aviableToolStripMenuItem1->Name = L"aviableToolStripMenuItem1";
			this->aviableToolStripMenuItem1->Size = System::Drawing::Size(157, 26);
			this->aviableToolStripMenuItem1->Text = L"Aviable";
			this->aviableToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Library::aviableToolStripMenuItem1_Click);
			// 
			// iDToolStripMenuItem
			// 
			this->iDToolStripMenuItem->Name = L"iDToolStripMenuItem";
			this->iDToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->iDToolStripMenuItem->Text = L"ID";
			this->iDToolStripMenuItem->Click += gcnew System::EventHandler(this, &Library::iDToolStripMenuItem_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label23);
			this->tabPage5->Controls->Add(this->label22);
			this->tabPage5->Controls->Add(this->button7);
			this->tabPage5->Controls->Add(this->button6);
			this->tabPage5->Controls->Add(this->textBox12);
			this->tabPage5->Controls->Add(this->textBox11);
			this->tabPage5->Controls->Add(this->label21);
			this->tabPage5->Controls->Add(this->label17);
			this->tabPage5->Controls->Add(this->label16);
			this->tabPage5->Controls->Add(this->textBox10);
			this->tabPage5->Controls->Add(this->textBox9);
			this->tabPage5->Controls->Add(this->label14);
			this->tabPage5->Controls->Add(this->label13);
			this->tabPage5->Controls->Add(this->listBox3);
			this->tabPage5->Controls->Add(this->listBox2);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(1036, 336);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Advanced Search";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::Color::Red;
			this->label23->Location = System::Drawing::Point(374, 256);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(299, 19);
			this->label23->TabIndex = 15;
			this->label23->Text = L"Value (from) can\'t be less than Value (to) !!!";
			this->label23->Visible = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::Red;
			this->label22->Location = System::Drawing::Point(374, 98);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(299, 19);
			this->label22->TabIndex = 14;
			this->label22->Text = L"Value (from) can\'t be less than Value (to) !!!";
			this->label22->Visible = false;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(100, 256);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(195, 43);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Search";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Library::button7_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(100, 109);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(195, 41);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Search";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Library::button6_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(267, 212);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(38, 20);
			this->textBox12->TabIndex = 11;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(267, 53);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(38, 20);
			this->textBox11->TabIndex = 10;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold));
			this->label21->Location = System::Drawing::Point(237, 212);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(26, 22);
			this->label21->TabIndex = 9;
			this->label21->Text = L"to";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold));
			this->label17->Location = System::Drawing::Point(235, 50);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(26, 22);
			this->label17->TabIndex = 8;
			this->label17->Text = L"to";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold));
			this->label16->Location = System::Drawing::Point(8, 50);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(182, 22);
			this->label16->TabIndex = 7;
			this->label16->Text = L"Year\'s range:     from";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(191, 212);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(40, 20);
			this->textBox10->TabIndex = 6;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(191, 53);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(38, 20);
			this->textBox9->TabIndex = 5;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold));
			this->label14->Location = System::Drawing::Point(8, 212);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(184, 22);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Rating\'s range:  from";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(25, 50);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 13);
			this->label13->TabIndex = 3;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(364, 178);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(664, 108);
			this->listBox3->TabIndex = 2;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(364, 21);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(664, 108);
			this->listBox2->TabIndex = 0;
			// 
			// timer1
			// 
			this->timer1->Interval = 3;
			this->timer1->Tick += gcnew System::EventHandler(this, &Library::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 3;
			this->timer2->Tick += gcnew System::EventHandler(this, &Library::timer2_Tick);
			// 
			// Library
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(1130, 362);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Library";
			this->Text = L"Library";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)

	{
		SqlPart object;
		bool b, a, c, z;
		SqlPart^ n = gcnew SqlPart();
		n->Title = textBox2->Text;
		n->Author = textBox3->Text;
		n->Publisher = textBox4->Text;
		n->Year = textBox5->Text;
		n->Section = textBox6->Text;
		n->Rating = textBox7->Text;
		n->Aviable = textBox8->Text;
		b = object.Checker(n);
		if (b == 1)
		{
			a = object.Check(textBox2->Text);
			if (a == true)
			{
				c = object.Checker1(textBox7->Text);
					if (c == true)
					{
						z = object.Checker2(textBox8->Text);
						if (z == true)
						{
							n->Title = textBox2->Text;
							this->label12->Visible = false;
							this->progressBar1->Value = 0;
							this->label9->Visible = false;
							this->progressBar1->Visible = true;
							this->timer1->Start();
							object.Insert(n);
							textBox2->Text="";
							textBox3->Text="";
							textBox4->Text="";
							textBox5->Text="";
							textBox6->Text="";
							textBox7->Text="";
							textBox8->Text="";
							
						}
						else
						{
							this->label12->Visible = false;
							this->label9->Visible = false;
							this->label12->Visible = true;
							this->label12->Text = "Aviable field should have Yes/No !!!";

						}
					}
					else
					{
						this->label9->Visible = false;
						this->label12->Visible = true;
						this->label12->Text = "Rating field should have a value from 1 to 10 !!!";
					}
			}
			else
			{
				this->label9->Visible = false;
				this->progressBar1->Visible = false;
				this->label12->Visible = true;
				this->label12->Text = "This Title already exists !!!";
			}
		}
		else
		{
			this->label12->Visible = false;
			this->progressBar1->Visible = false;
			this->label9->Visible = true;
			this->label9->Text = "All fields must be filled !!!";
		}
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		if (progressBar1->Value ==2401)
		{
			this->timer1->Stop();
			this->progressBar1->Visible = false;

		}
		else
		{
			this->progressBar1->Visible = true;
			this->progressBar1->Value = progressBar1->Value + 7;

		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)

	{
		SqlPart object2;
		comboBox1->DataSource = object2.DB();
	}


private: System::Void allFieldsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->textBox14->Visible = true;
	this->button5->Visible = false;
	this->label15->Visible = true;
	this->button3->Visible = true;
	this->label10->Visible = false;
	this->label15->Text = "ID";
	
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ txt;
	txt = label15->Text;
	if (txt == "ID")
	{
		SqlPart object3;
		SqlPart^ n = gcnew SqlPart();
		bool b;
		String^ o = textBox14->Text;
		b = object3.CheckerD(o);

		if (b == 1)
		{
			this->label1->Visible = false;
			this->progressBar2->Value = 0;
			this->progressBar2->Visible = true;
			this->timer2->Start();
			n->ID = Convert::ToInt32(textBox14->Text);
			object3.Delete(n);

		}
		else
		{
			this->progressBar2->Visible = false;
			this->label1->Visible = true;
			this->label1->Text = "Field must be filled !!!";
		}
	}
	if (txt == "Title")
	{
		SqlPart object3;
		SqlPart^ n = gcnew SqlPart();
		bool b;
		bool c;
		String^ o = textBox14->Text;
		b = object3.CheckerD(o);

		if (b == 1)
		{
			c = object3.CheckDelete(textBox14->Text);
			if (c == true)
			{
				this->label1->Visible = false;
				this->progressBar2->Value = 0;
				this->progressBar2->Visible = true;
				this->timer2->Start();
				n->Title = Convert::ToString(textBox14->Text);
				object3.DeleteByTitle(n);
			}
			else
			{
				this->label1->Visible = true;
				this->label1->Text = "So does not exist !!!";

			}
		}
		else
		{
			this->progressBar2->Visible = false;
			this->label1->Visible = true;
			this->label1->Text = "Field must be filled !!!";
		}
	}

	if (txt == "Publisher")
	{
		SqlPart object3;
		SqlPart^ n = gcnew SqlPart();
		bool b;
		String^ o = textBox14->Text;
		b = object3.CheckerD(o);

		if (b == 1)
		{
			bool c;
			c = object3.CheckDeletePublisher(textBox14->Text);
			if (c == true)
			{
				this->label1->Visible = false;
				this->progressBar2->Value = 0;
				this->progressBar2->Visible = true;
				this->timer2->Start();
				n->Publisher = Convert::ToString(textBox14->Text);
				object3.DeleteByPublisher(n);
			}
			else
			{
				this->label1->Visible = true;
				this->label1->Text = "So does not exist !!!";
			}
		}
		else
		{
			this->progressBar2->Visible = false;
			this->label1->Visible = true;
			this->label1->Text = "Field must be filled !!!";
		}
	}

	if (txt == "Year")
	{
		SqlPart object3;
		SqlPart^ n = gcnew SqlPart();
		bool b;
		bool c;
		String^ o = textBox14->Text;
		b = object3.CheckerD(o);

		if (b == 1)
		{
			c = object3.CheckDeleteYear(textBox14->Text);
			if (c == true)
			{
				this->label1->Visible = false;
				this->progressBar2->Value = 0;
				this->progressBar2->Visible = true;
				this->timer2->Start();
				n->Year = Convert::ToString(textBox14->Text);
				object3.DeleteByYear(n);
			}
			else
			{
				this->label1->Visible = true;
				this->label1->Text = "So does not exist !!!";
			}
		}
		else
		{
			this->progressBar2->Visible = false;
			this->label1->Visible = true;
			this->label1->Text = "Field must be filled !!!";
		}
	}

	if (txt == "Section")
	{
		SqlPart object3;
		SqlPart^ n = gcnew SqlPart();
		bool b;
		bool c;
		String^ o = textBox14->Text;
		b = object3.CheckerD(o);

		if (b == 1)
		{
			c = object3.CheckDeleteSection(textBox14->Text);
			if (c == true)
			{
				this->label1->Visible = false;
				this->progressBar2->Value = 0;
				this->progressBar2->Visible = true;
				this->timer2->Start();
				n->Section = Convert::ToString(textBox14->Text);
				object3.DeleteBySection(n);
			}
			else
			{
				this->label1->Visible = true;
				this->label1->Text = "So does not exist !!!";
			}
		}
		else
		{
			this->progressBar2->Visible = false;
			this->label1->Visible = true;
			this->label1->Text = "Field must be filled !!!";
		}
	}
	if (txt == "Rating")
	{
		SqlPart object3;
		SqlPart^ n = gcnew SqlPart();
		bool b;
		bool c;
		String^ o = textBox14->Text;
		b = object3.CheckerD(o);

		if (b == 1)
		{
			c = object3.CheckDeleteSection(textBox14->Text);
			if (c == true)
			{
				this->label1->Visible = false;
				this->progressBar2->Value = 0;
				this->progressBar2->Visible = true;
				this->timer2->Start();
				n->Rating = Convert::ToString(textBox14->Text);
				object3.DeleteByRating(n);
			}
			else
			{
				this->label1->Visible = true;
				this->label1->Text = "So does not exist !!!";
			}
			
		}
		else
		{
			this->progressBar2->Visible = false;
			this->label1->Visible = true;
			this->label1->Text = "Field must be filled !!!";
		}
	}

	if (txt == "Aviable")
	{
		SqlPart object3;
		SqlPart^ n = gcnew SqlPart();
		bool b;
		bool c;
		String^ o = textBox14->Text;
		b = object3.CheckerD(o);

		if (b == 1)
		{
			c = object3.CheckDeleteSection(textBox14->Text);
			if (c == true)
			{
				this->label1->Visible = false;
				this->progressBar2->Value = 0;
				this->progressBar2->Visible = true;
				this->timer2->Start();
				n->Aviable = Convert::ToString(textBox14->Text);
				object3.DeleteByAviable(n);
			}
			else
			{
				this->label1->Visible = true;
				this->label1->Text = "So does not exist !!!";
			}
		}
		else
		{
			this->progressBar2->Visible = false;
			this->label1->Visible = true;
			this->label1->Text = "Field must be filled !!!";
		}
	}
}


private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	if (progressBar2->Value == 2401)
	{
		this->timer2->Stop();
		this->progressBar2->Visible = false;

	}
	else
	{
		this->progressBar2->Visible = true;
		this->progressBar2->Value = progressBar2->Value + 7;

	}
}
private: System::Void titleToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->label18->Text = "Write Title:";
	this->label18->Visible = true;
	this->label11->Visible = false;
	this->textBox1->Visible = true;
	this->button4->Visible = true;
	this->listBox1->Visible = true;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	SqlPart object4;
	String^ text;
	text = label18->Text;
	if (text == "Write Title:")
	{

		bool b;
		b = object4.CheckerD(textBox1->Text);

		if (b == 1)
		{
			this->label20->Visible = false;
			listBox1->DataSource = object4.FindByTitle(textBox1->Text);
			textBox1->Text = "";

		}
		else
		{

			this->label20->Visible = true;
		}
	}

	if (text == "Write Author:")
	{

		bool b;
		b = object4.CheckerD(textBox1->Text);

		if (b == 1)
		{
			this->label20->Visible = false;
			listBox1->DataSource = object4.FindByAuthor(textBox1->Text);
			textBox1->Text = "";

		}
		else
		{

			this->label20->Visible = true;
		}
	}
	if (text == "Write Publisher:")
	{

		bool b;
		b = object4.CheckerD(textBox1->Text);

		if (b == 1)
		{
			this->label20->Visible = false;
			listBox1->DataSource = object4.FindByPublisher(textBox1->Text);
			textBox1->Text = "";

		}
		else
		{

			this->label20->Visible = true;
		}
	}
	if (text == "Write Year:")
	{

		bool b;
		b = object4.CheckerD(textBox1->Text);

		if (b == 1)
		{
			this->label20->Visible = false;
			listBox1->DataSource = object4.FindByYear(textBox1->Text);
			textBox1->Text = "";

		}
		else
		{

			this->label20->Visible = true;
		}
	}
	if (text == "Write Section:")
	{

		bool b;
		b = object4.CheckerD(textBox1->Text);

		if (b == 1)
		{
			this->label20->Visible = false;
			listBox1->DataSource = object4.FindBySection(textBox1->Text);
			textBox1->Text = "";

		}
		else
		{

			this->label20->Visible = true;
		}
	}
	if (text == "Write Rating:")
	{

		bool b;
		b = object4.CheckerD(textBox1->Text);

		if (b == 1)
		{
			this->label20->Visible = false;
			listBox1->DataSource = object4.FindByRating(textBox1->Text);
			textBox1->Text = "";

		}
		else
		{

			this->label20->Visible = true;
		}
	}
	if (text == "Write Aviable:")
	{

		bool b;
		b = object4.CheckerD(textBox1->Text);

		if (b == 1)
		{
			this->label20->Visible = false;
			listBox1->DataSource = object4.FindByAviable(textBox1->Text);
			textBox1->Text = "";

		}
		else
		{

			this->label20->Visible = true;
		}
	}
	if (text == "Write ID:")
	{

		bool b;
		b = object4.CheckerD(textBox1->Text);

		if (b == 1)
		{
			this->label20->Visible = false;
			listBox1->DataSource = object4.FindByID(textBox1->Text);
			textBox1->Text = "";

		}
		else
		{

			this->label20->Visible = true;
		}
	}
}
private: System::Void tabControl1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->label11->Visible = true;

	this->textBox1->Visible = false;
	this->label18->Visible = false;
	this->listBox1->Visible = false;
	this->label20->Visible = false;
	this->button4->Visible = false;
	

}

private: System::Void deleteAllToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 

{
	this->label20->Visible = false;
	this->button5->Visible = true;
	this->label10->Visible = false;
	this->textBox14->Visible = false;
	this->label15->Visible = false;
	this->button3->Visible = false;
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	SqlPart object5;
	object5.DeleteAll();

}

private: System::Void authorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->label20->Visible = false;
	this->label11->Visible = false;
	this->button5->Visible = false;
	this->button4->Visible = true;
	this->listBox1->Visible = true;
	this->textBox1->Visible = true;
	this->label18->Text = "Write Author:";
	this->label18->Visible = true;

}
private: System::Void publisherToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->label20->Visible = false;
	this->label11->Visible = false;
	this->button5->Visible = false;
	this->button4->Visible = true;
	this->listBox1->Visible = true;
	this->textBox1->Visible = true;
	this->label18->Text = "Write Publisher:";
	this->label18->Visible = true;
}

private: System::Void yearToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->label20->Visible = false;
	this->label11->Visible = false;
	this->button5->Visible = false;
	this->button4->Visible = true;
	this->listBox1->Visible = true;
	this->textBox1->Visible = true;
	this->label18->Text = "Write Year:";
	this->label18->Visible = true;
}
private: System::Void sectionToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->label20->Visible = false;
	this->label11->Visible = false;
	this->button5->Visible = false;
	this->button4->Visible = true;
	this->listBox1->Visible = true;
	this->textBox1->Visible = true;
	this->label18->Text = "Write Section:";
	this->label18->Visible = true;
}
private: System::Void ratingToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->label20->Visible = false;
	this->label11->Visible = false;
	this->button5->Visible = false;
	this->button4->Visible = true;
	this->listBox1->Visible = true;
	this->textBox1->Visible = true;
	this->label18->Text = "Write Rating:";
	this->label18->Visible = true;

}
private: System::Void aviableToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->label20->Visible = false;
	this->label11->Visible = false;
	this->button5->Visible = false;
	this->button4->Visible = true;
	this->listBox1->Visible = true;
	this->textBox1->Visible = true;
	this->label18->Text = "Write Aviable:";
	this->label18->Visible = true;

}
private: System::Void iDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->label20->Visible = false;
	this->label11->Visible = false;
	this->button5->Visible = false;
	this->button4->Visible = true;
	this->listBox1->Visible = true;
	this->textBox1->Visible = true;
	this->label18->Text = "Write ID:";
	this->label18->Visible = true;
}
private: System::Void titleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->textBox14->Visible = true;
	this->button5->Visible = false;
	this->label15->Visible = true;
	this->button3->Visible = true;
	this->label10->Visible = false;
	this->label15->Text = "Title";
}
private: System::Void publisherToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->textBox14->Visible = true;
	this->button5->Visible = false;
	this->label15->Visible = true;
	this->button3->Visible = true;
	this->label10->Visible = false;
	this->label15->Text = "Publisher";
}

private: System::Void yearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->textBox14->Visible = true;
	this->button5->Visible = false;
	this->label15->Visible = true;
	this->button3->Visible = true;
	this->label10->Visible = false;
	this->label15->Text = "Year";
}
private: System::Void sectionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->textBox14->Visible = true;
	this->button5->Visible = false;
	this->label15->Visible = true;
	this->button3->Visible = true;
	this->label10->Visible = false;
	this->label15->Text = "Section";
}
private: System::Void ratingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->textBox14->Visible = true;
	this->button5->Visible = false;
	this->label15->Visible = true;
	this->button3->Visible = true;
	this->label10->Visible = false;
	this->label15->Text = "Rating";
}
private: System::Void aviableToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->textBox14->Visible = true;
	this->button5->Visible = false;
	this->label15->Visible = true;
	this->button3->Visible = true;
	this->label10->Visible = false;
	this->label15->Text = "Aviable";
}


private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	SqlPart object;
	bool g;
	g = object.Defense(textBox9->Text, textBox11->Text);

	if (g == true)
	{
		this->label22->Visible = false;
		listBox2->DataSource = object.FindByAdv1(textBox9->Text, textBox11->Text);
	}
	else
	{
		this->label22->Visible = true;
	}

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SqlPart object;
	bool g;
	g = object.Defense(textBox10->Text, textBox12->Text);

	if (g == true)
	{
		this->label22->Visible = false;
		listBox3->DataSource = object.FindByAdv2(textBox10->Text, textBox12->Text);
	}
	else
	{
		this->label22->Visible=true;
		
	}
}



};
}

