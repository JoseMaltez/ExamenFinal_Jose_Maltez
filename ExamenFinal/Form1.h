#pragma once
#include "Menu_est.h";
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
	private: String^ connectionString = "datasource=localhost; username=root; password=localhost; database=examen_final;"; //colocamos parametros para conectar base de datos
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::TextBox^ txt_nombre;
	protected:
	private: System::Windows::Forms::TextBox^ txt_contra;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;

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
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->txt_contra = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_nombre
			// 
			this->txt_nombre->Location = System::Drawing::Point(117, 106);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(153, 20);
			this->txt_nombre->TabIndex = 0;
			// 
			// txt_contra
			// 
			this->txt_contra->Location = System::Drawing::Point(117, 168);
			this->txt_contra->Name = L"txt_contra";
			this->txt_contra->PasswordChar = '*';
			this->txt_contra->Size = System::Drawing::Size(153, 20);
			this->txt_contra->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(114, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(114, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Contrase�a";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(123, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Iniciar Sesion";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(158, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(394, 321);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_contra);
			this->Controls->Add(this->txt_nombre);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_nombre->Text == "" || txt_contra->Text == "")
		{
			MessageBox::Show(L"Por favor llene todos los campos ");
			return;
		}
		String^ sql = "select * from login where Usuario= '" + txt_nombre->Text + "' and Contra = '" + txt_contra->Text + "'"; //seleccionamos todo de la tabla login y asignamos las textbox para tomar los datos
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn); //hacemos el cursor
		MySqlDataReader^ dataReader; //funcion que leer� la informaci�n

		try {
			this->conn->Open(); //abrimos la conexion
			dataReader = cursor->ExecuteReader(); //comprobamos que la conexion este ejecutandose
			if (dataReader->Read()) //si los datos coinciden
			{
				MessageBox::Show(L"Bienvenido " + txt_nombre->Text); //mensaje de bienvenida al menu
				ExamenFinal::Menu_est^ menucrud = gcnew ExamenFinal::Menu_est(); //llamamos al siguiente form
				this->Visible = false;
				menucrud->ShowDialog();
				this->Visible = true; //mostramos el menu
			}
			else //si los datos no coinciden
			{
				MessageBox::Show(L"Usuario incorrecto");
				this->conn->Close();//cerramos la conexion en caso de error
			}
		}
		catch (Exception^ x) { //capturamos cualquier error y lo mostramos como mensaje
			MessageBox::Show(x->Message);
		}
	}
};
}
