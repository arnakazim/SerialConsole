#pragma once

namespace SerialConsole {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using  namespace System::IO::Ports;
	using namespace System::Threading;


	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

		private: System::IO::Ports::SerialPort^  serialPort1;

		private: System::Windows::Forms::Panel^  panel1;
		private: System::Windows::Forms::Label^  label1;
		private: System::Windows::Forms::Panel^  panel2;

		private: System::Windows::Forms::Label^  label2;
		private: System::Windows::Forms::TextBox^  textBox1;
		private: System::Windows::Forms::Button^  button1;
		private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
		private: System::Windows::Forms::Button^  button2;
		private: System::Windows::Forms::Panel^  panel3;

		private: System::Windows::Forms::Label^  label3;
		private: System::Windows::Forms::ComboBox^  comboBox1;
		private: System::Windows::Forms::Button^  button3;
		private: System::Windows::Forms::TextBox^  textBox2;
		private: System::Windows::Forms::Button^  button4;
		private: System::Windows::Forms::RichTextBox^  richTextBox1;

		private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
		private: System::Windows::Forms::Label^  label4;
		private: System::Windows::Forms::Label^  label5;
		private: System::Windows::Forms::ComboBox^  comboBox3;
		private: System::Windows::Forms::ComboBox^  comboBox2;
		private: System::Windows::Forms::Label^  label6;
		private: System::Windows::Forms::Label^  label7;
		private: System::Windows::Forms::ComboBox^  comboBox4;
		private: System::Windows::Forms::ComboBox^  comboBox5;
		private: System::Windows::Forms::Label^  label8;
		private: System::Windows::Forms::Label^  label9;
		private: System::Windows::Forms::CheckBox^  checkBox1;



		private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->comboBox4);
			this->panel1->Controls->Add(this->comboBox3);
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->numericUpDown2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->numericUpDown1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(13, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(634, 56);
			this->panel1->TabIndex = 0;
			// 
			// comboBox4
			// 
			this->comboBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"One", L"OnePointFive", L"Two" });
			this->comboBox4->Location = System::Drawing::Point(248, 27);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 15;
			// 
			// comboBox3
			// 
			this->comboBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"None", L"XON/XOFF", L"RTS/CTS", L"DSR/DTR" });
			this->comboBox3->Location = System::Drawing::Point(428, 28);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 14;
			this->comboBox3->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"None", L"Odd", L"Even", L"Mark", L"Space" });
			this->comboBox2->Location = System::Drawing::Point(428, 3);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(375, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Flow Ctrl";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(375, 7);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Parity";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(249, 3);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 10;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(194, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Stop bits";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(194, 6);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Data bits";
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(556, 27);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Disconnect";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(556, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Connect";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(68, 29);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999999, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9600, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Baud Rate";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(68, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"COM1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Serial Port";
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Location = System::Drawing::Point(13, 75);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(634, 29);
			this->panel2->TabIndex = 1;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(556, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Clear";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"String", L"Integer", L"Binary" });
			this->comboBox1->Location = System::Drawing::Point(348, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(475, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Send";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(338, 20);
			this->textBox2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->richTextBox1);
			this->panel3->Location = System::Drawing::Point(13, 110);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(634, 343);
			this->panel3->TabIndex = 2;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Window;
			this->richTextBox1->Location = System::Drawing::Point(3, 3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(628, 337);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(488, 456);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"SerialConsole by Arnaud Ouvrier";
			// 
			// serialPort1
			// 
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm::serialPort1_DataReceived);
			// 
			// comboBox5
			// 
			this->comboBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"None", L"NL", L"CR", L"NL/CR" });
			this->comboBox5->Location = System::Drawing::Point(86, 453);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 21);
			this->comboBox5->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(17, 456);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Line Ending";
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(213, 456);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Autoscroll";
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(272, 456);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 18;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(659, 478);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(675, 517);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SerialConsole";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			StringComparer^ stringComparer = StringComparer::OrdinalIgnoreCase;
			try {
				this->serialPort1->PortName = this->textBox1->Text;
				this->serialPort1->BaudRate = Int32(this->numericUpDown1->Value);
				this->serialPort1->ReadTimeout = 500;
				this->serialPort1->WriteTimeout = 500;
				this->serialPort1->DataBits = Int32(this->numericUpDown2->Value);


				if ((stringComparer->Equals("one", this->comboBox4->Text)))
					this->serialPort1->StopBits = StopBits::One;
				else if ((stringComparer->Equals("onepointfive", this->comboBox4->Text))) 
					this->serialPort1->StopBits = StopBits::OnePointFive;
				else if ((stringComparer->Equals("two", this->comboBox4->Text))) 
					this->serialPort1->StopBits = StopBits::Two;
				

				if ((stringComparer->Equals("odd", this->comboBox2->Text)))
					this->serialPort1->Parity = Parity::Odd;
				else if ((stringComparer->Equals("even", this->comboBox2->Text)))
					this->serialPort1->Parity = Parity::Even;
				else if ((stringComparer->Equals("mark", this->comboBox2->Text)))
					this->serialPort1->Parity = Parity::Mark;
				else if ((stringComparer->Equals("space", this->comboBox2->Text)))
					this->serialPort1->Parity = Parity::Space;
				else
					this->serialPort1->Parity = Parity::None;
				/*
				if ((stringComparer->Equals("XON/XOFF", this->comboBox3->Text)))
					this->serialPort1;
				else if ((stringComparer->Equals("RTS/CTS", this->comboBox3->Text)))
					this->serialPort1->RtsEnable = true;
				else if ((stringComparer->Equals("DSR/DTR", this->comboBox3->Text)))
					this->serialPort1->DtrEnable = true;
				*/

				
				this->serialPort1->Open();

				this->button1->Enabled = false;
				this->button2->Enabled = true;
				this->button3->Enabled = true;
				this->SetText("\nConnected!\n");
			}
			catch (Exception^ e) {
				this->showError(e->Message);
			}
			
		}

		delegate void SetTextDelegate(String^ text);

		private: void SetText(String^ text)
		{
			if (this->richTextBox1->InvokeRequired)
			{
				SetTextDelegate^ d =
				gcnew SetTextDelegate(this, &MyForm::SetText);
				this->Invoke(d, gcnew array<Object^> { text });
			}
			else
			{
				this->richTextBox1->Text += text;
			}
		}

		private: void showError(String^ text) {
			MessageBox::Show(text, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		private: System::Void serialPort1_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
			String^ data = this->serialPort1->ReadExisting();
			this->SetText(data);
		}

		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			try {
				this->serialPort1->Close();

				this->button1->Enabled = true;
				this->button2->Enabled = false;
				this->button3->Enabled = false;
				this->SetText("\nDisconnected!\n");
			}
			catch (Exception^ e) {
				this->showError(e->Message);
			}
		}

		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			StringComparer^ stringComparer = StringComparer::OrdinalIgnoreCase;
			
			try {
				if ((stringComparer->Equals("integer", this->comboBox1->Text))) {
					array<unsigned char>^ data = BitConverter::GetBytes(Int32::Parse(this->textBox2->Text));
					this->serialPort1->Write(data, 0, data->Length);
				}
				else if ((stringComparer->Equals("binary", this->comboBox1->Text))) {
					array<unsigned char>^ data = BitConverter::GetBytes(Convert::ToInt32(this->textBox2->Text, 2));

					this->serialPort1->Write(data, 0, data->Length);
				}
				else {
					String^ text = this->textBox2->Text;

					StringComparer^ stringComparer = StringComparer::OrdinalIgnoreCase;

					if ((stringComparer->Equals("nl", this->comboBox4->Text)))
						text += '\n';
					else if ((stringComparer->Equals("cr", this->comboBox4->Text)))
						text += '\r';
					else if ((stringComparer->Equals("nl/cr", this->comboBox4->Text)))
						text += '\n\r';

					this->serialPort1->Write(text);
				}


				this->textBox2->Text = "";
			}
			catch (Exception^ e) {
				this->showError(e->Message);
			}
		}

		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			this->richTextBox1->Text = "";

		}

		private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			this->comboBox1->SelectedIndex = 0;
			this->comboBox2->SelectedIndex = 0;
			this->comboBox3->SelectedIndex = 0;
			this->comboBox4->SelectedIndex = 0;
			this->comboBox5->SelectedIndex = 0;
		}

		private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			if (this->checkBox1->Checked == true) {
				this->richTextBox1->SelectionStart = this->richTextBox1->Text->Length;
				this->richTextBox1->ScrollToCaret();
			}
		}

		private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			StringComparer^ stringComparer = StringComparer::OrdinalIgnoreCase;

			if ((stringComparer->Equals("string", this->comboBox1->Text)))
				this->comboBox5->Enabled = true;
			else 
				this->comboBox5->Enabled = false;
		}
	};
}
