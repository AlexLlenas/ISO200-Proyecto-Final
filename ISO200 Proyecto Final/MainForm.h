#pragma once

namespace ISO200ProyectoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//KLK_MIO
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnl_main;
	protected:

	private: System::Windows::Forms::TextBox^ txt_nombre1;
	private: System::Windows::Forms::Label^ lbl_mediaNombre;
	protected:










	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ btn_agregarFila;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pnl_main = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre1 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_mediaNombre = (gcnew System::Windows::Forms::Label());
			this->btn_agregarFila = (gcnew System::Windows::Forms::Button());
			this->pnl_main->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnl_main
			// 
			this->pnl_main->AutoScroll = true;
			this->pnl_main->Controls->Add(this->textBox7);
			this->pnl_main->Controls->Add(this->textBox4);
			this->pnl_main->Controls->Add(this->textBox5);
			this->pnl_main->Controls->Add(this->textBox6);
			this->pnl_main->Controls->Add(this->textBox3);
			this->pnl_main->Controls->Add(this->textBox2);
			this->pnl_main->Controls->Add(this->txt_nombre1);
			this->pnl_main->Location = System::Drawing::Point(12, 41);
			this->pnl_main->Name = L"pnl_main";
			this->pnl_main->Size = System::Drawing::Size(993, 351);
			this->pnl_main->TabIndex = 0;
			this->pnl_main->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel1_Paint);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(797, 11);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(125, 22);
			this->textBox7->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(666, 11);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(125, 22);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(535, 11);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(125, 22);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(404, 11);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(125, 22);
			this->textBox6->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(273, 11);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(125, 22);
			this->textBox3->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(142, 11);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(125, 22);
			this->textBox2->TabIndex = 8;
			// 
			// txt_nombre1
			// 
			this->txt_nombre1->Location = System::Drawing::Point(11, 11);
			this->txt_nombre1->Name = L"txt_nombre1";
			this->txt_nombre1->Size = System::Drawing::Size(125, 22);
			this->txt_nombre1->TabIndex = 0;
			this->txt_nombre1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::textBox1_KeyDown);
			// 
			// lbl_mediaNombre
			// 
			this->lbl_mediaNombre->AutoSize = true;
			this->lbl_mediaNombre->Location = System::Drawing::Point(844, 416);
			this->lbl_mediaNombre->Name = L"lbl_mediaNombre";
			this->lbl_mediaNombre->Size = System::Drawing::Size(83, 16);
			this->lbl_mediaNombre->TabIndex = 1;
			this->lbl_mediaNombre->Text = L"Media Curso";
			// 
			// btn_agregarFila
			// 
			this->btn_agregarFila->Location = System::Drawing::Point(12, 416);
			this->btn_agregarFila->Name = L"btn_agregarFila";
			this->btn_agregarFila->Size = System::Drawing::Size(124, 25);
			this->btn_agregarFila->TabIndex = 2;
			this->btn_agregarFila->Text = L"Agregar Fila";
			this->btn_agregarFila->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1021, 477);
			this->Controls->Add(this->btn_agregarFila);
			this->Controls->Add(this->lbl_mediaNombre);
			this->Controls->Add(this->pnl_main);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->pnl_main->ResumeLayout(false);
			this->pnl_main->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		/*if (KeyDown=ENTER)
		{
			for (size_t i = 0; i <= 6; i++)
			{
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->textBox1->Location = System::Drawing::Point(textBox1->Location.X()*(i+1), textBox1->Location.Y());
				this->textBox1->Size = System::Drawing::Size(125, 22);
			}

			crearfila(unbicacion_X, ubicacion_Y)
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1->Location = System::Drawing::Point(textBox1->Location.X, textBox1->Location.Y()+10;
			this->textBox1->Size = System::Drawing::Size(125, 22);
		}*/
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		  /* crearfila(unbicacion_X, ubicacion_Y) {
			   if (KeyDown = ENTER)
			   {
				   for (size_t i = 0; i <= 6; i++)
				   {
					   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
					   this->textBox1->Location = System::Drawing::Point(textBox1->Location.X() * (i + 1), textBox1->Location.Y());
					   this->textBox1->Size = System::Drawing::Size(125, 22);
				   }
				   crearfila(,)
			   }
		   }*/
};
}
