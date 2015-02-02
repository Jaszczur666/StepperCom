#pragma once

namespace StepperCom {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::Button^  bOpenPort;
	private: System::Windows::Forms::Button^  bSend;
	private: System::Windows::Forms::Button^  bClose;
	private: System::Windows::Forms::Button^  bScan;
	private: System::Windows::Forms::ComboBox^  comboPorts;
	private: System::Windows::Forms::Button^  lbut;
	private: System::Windows::Forms::Button^  sbut;
	private: System::Windows::Forms::Button^  rbut;

	protected: 


	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->bOpenPort = (gcnew System::Windows::Forms::Button());
			this->bSend = (gcnew System::Windows::Forms::Button());
			this->bClose = (gcnew System::Windows::Forms::Button());
			this->bScan = (gcnew System::Windows::Forms::Button());
			this->comboPorts = (gcnew System::Windows::Forms::ComboBox());
			this->lbut = (gcnew System::Windows::Forms::Button());
			this->sbut = (gcnew System::Windows::Forms::Button());
			this->rbut = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// serialPort1
			// 
			this->serialPort1->BaudRate = 19200;
			// 
			// bOpenPort
			// 
			this->bOpenPort->Location = System::Drawing::Point(33, 47);
			this->bOpenPort->Name = L"bOpenPort";
			this->bOpenPort->Size = System::Drawing::Size(75, 23);
			this->bOpenPort->TabIndex = 0;
			this->bOpenPort->Text = L"Open";
			this->bOpenPort->UseVisualStyleBackColor = true;
			this->bOpenPort->Click += gcnew System::EventHandler(this, &Form1::bOpenPort_Click);
			// 
			// bSend
			// 
			this->bSend->Location = System::Drawing::Point(138, 47);
			this->bSend->Name = L"bSend";
			this->bSend->Size = System::Drawing::Size(75, 23);
			this->bSend->TabIndex = 1;
			this->bSend->Text = L"Send";
			this->bSend->UseVisualStyleBackColor = true;
			this->bSend->Click += gcnew System::EventHandler(this, &Form1::bSend_Click);
			// 
			// bClose
			// 
			this->bClose->Location = System::Drawing::Point(243, 47);
			this->bClose->Name = L"bClose";
			this->bClose->Size = System::Drawing::Size(75, 23);
			this->bClose->TabIndex = 2;
			this->bClose->Text = L"Close";
			this->bClose->UseVisualStyleBackColor = true;
			this->bClose->Click += gcnew System::EventHandler(this, &Form1::bClose_Click);
			// 
			// bScan
			// 
			this->bScan->Location = System::Drawing::Point(33, 12);
			this->bScan->Name = L"bScan";
			this->bScan->Size = System::Drawing::Size(75, 23);
			this->bScan->TabIndex = 3;
			this->bScan->Text = L"Scan";
			this->bScan->UseVisualStyleBackColor = true;
			this->bScan->Click += gcnew System::EventHandler(this, &Form1::bScan_Click);
			// 
			// comboPorts
			// 
			this->comboPorts->FormattingEnabled = true;
			this->comboPorts->Location = System::Drawing::Point(149, 13);
			this->comboPorts->Name = L"comboPorts";
			this->comboPorts->Size = System::Drawing::Size(121, 21);
			this->comboPorts->TabIndex = 4;
			this->comboPorts->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboPorts_SelectedIndexChanged);
			// 
			// lbut
			// 
			this->lbut->Location = System::Drawing::Point(141, 76);
			this->lbut->Name = L"lbut";
			this->lbut->Size = System::Drawing::Size(32, 23);
			this->lbut->TabIndex = 5;
			this->lbut->Text = L"<<";
			this->lbut->UseVisualStyleBackColor = true;
			this->lbut->Click += gcnew System::EventHandler(this, &Form1::lbut_Click);
			// 
			// sbut
			// 
			this->sbut->Location = System::Drawing::Point(181, 76);
			this->sbut->Name = L"sbut";
			this->sbut->Size = System::Drawing::Size(32, 23);
			this->sbut->TabIndex = 6;
			this->sbut->Text = L"||";
			this->sbut->UseVisualStyleBackColor = true;
			this->sbut->Click += gcnew System::EventHandler(this, &Form1::sbut_Click);
			// 
			// rbut
			// 
			this->rbut->Location = System::Drawing::Point(221, 76);
			this->rbut->Name = L"rbut";
			this->rbut->Size = System::Drawing::Size(32, 23);
			this->rbut->TabIndex = 7;
			this->rbut->Text = L">>";
			this->rbut->UseVisualStyleBackColor = true;
			this->rbut->Click += gcnew System::EventHandler(this, &Form1::rbut_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 107);
			this->Controls->Add(this->rbut);
			this->Controls->Add(this->sbut);
			this->Controls->Add(this->lbut);
			this->Controls->Add(this->comboPorts);
			this->Controls->Add(this->bScan);
			this->Controls->Add(this->bClose);
			this->Controls->Add(this->bSend);
			this->Controls->Add(this->bOpenPort);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bOpenPort_Click(System::Object^  sender, System::EventArgs^  e) {
				 if ((comboPorts->Text!="")&&(!serialPort1->IsOpen)) serialPort1->PortName=comboPorts->Text;
				 if((!serialPort1->IsOpen)) serialPort1->Open();
			 }
	private: System::Void bSend_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(serialPort1->IsOpen) serialPort1->Write("Test");
			 }
	private: System::Void bClose_Click(System::Object^  sender, System::EventArgs^  e) {
				if(serialPort1->IsOpen) serialPort1->Close();
			 }
private: System::Void bScan_Click(System::Object^  sender, System::EventArgs^  e) {
			  for each (String^ s in SerialPort::GetPortNames())
        {
			comboPorts->Items->Add(s);
			  }
			  comboPorts->SelectedIndex=0;
		 }
private: System::Void comboPorts_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void lbut_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(serialPort1->IsOpen) serialPort1->Write("l");
		 }
private: System::Void sbut_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(serialPort1->IsOpen) serialPort1->Write("s");
		 }
private: System::Void rbut_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(serialPort1->IsOpen) serialPort1->Write("r");
		 }
};
}

