#pragma once
#include "DB.h";
namespace ExamenFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Menu_est
	/// </summary>
	public ref class Menu_est : public System::Windows::Forms::Form
	{
	public:
		Menu_est(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew DB();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Menu_est()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: DB^ data;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ txt_crear;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_cal_crear;
	private: System::Windows::Forms::TextBox^ txt_genero_crear;
	private: System::Windows::Forms::TextBox^ txt_edad_crear;
	private: System::Windows::Forms::TextBox^ txt_nombre_crear;
	private: System::Windows::Forms::DataGridView^ data_grid_crear;

	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::DataGridView^ data_grid_actualizar;
	private: System::Windows::Forms::DataGridView^ data_grid_eliminar;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txt_id_act;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txt_cal_act;
	private: System::Windows::Forms::TextBox^ txt_genero_act;
	private: System::Windows::Forms::TextBox^ txt_edad_act;
	private: System::Windows::Forms::TextBox^ txt_nombre_act;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txt_id_el;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txt_crear = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_cal_crear = (gcnew System::Windows::Forms::TextBox());
			this->txt_genero_crear = (gcnew System::Windows::Forms::TextBox());
			this->txt_edad_crear = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre_crear = (gcnew System::Windows::Forms::TextBox());
			this->data_grid_crear = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_id_act = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_cal_act = (gcnew System::Windows::Forms::TextBox());
			this->txt_genero_act = (gcnew System::Windows::Forms::TextBox());
			this->txt_edad_act = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre_act = (gcnew System::Windows::Forms::TextBox());
			this->data_grid_actualizar = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txt_id_el = (gcnew System::Windows::Forms::TextBox());
			this->data_grid_eliminar = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid_crear))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid_actualizar))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid_eliminar))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 57);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(912, 367);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->txt_crear);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->txt_cal_crear);
			this->tabPage1->Controls->Add(this->txt_genero_crear);
			this->tabPage1->Controls->Add(this->txt_edad_crear);
			this->tabPage1->Controls->Add(this->txt_nombre_crear);
			this->tabPage1->Controls->Add(this->data_grid_crear);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(904, 341);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Crear";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// txt_crear
			// 
			this->txt_crear->Location = System::Drawing::Point(740, 282);
			this->txt_crear->Name = L"txt_crear";
			this->txt_crear->Size = System::Drawing::Size(75, 23);
			this->txt_crear->TabIndex = 9;
			this->txt_crear->Text = L"Crear";
			this->txt_crear->UseVisualStyleBackColor = true;
			this->txt_crear->Click += gcnew System::EventHandler(this, &Menu_est::txt_crear_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(699, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Calificaciones";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(699, 139);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Genero";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(699, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Edad";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(699, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Nombre";
			// 
			// txt_cal_crear
			// 
			this->txt_cal_crear->Location = System::Drawing::Point(702, 209);
			this->txt_cal_crear->Name = L"txt_cal_crear";
			this->txt_cal_crear->Size = System::Drawing::Size(160, 20);
			this->txt_cal_crear->TabIndex = 4;
			// 
			// txt_genero_crear
			// 
			this->txt_genero_crear->Location = System::Drawing::Point(702, 155);
			this->txt_genero_crear->Name = L"txt_genero_crear";
			this->txt_genero_crear->Size = System::Drawing::Size(160, 20);
			this->txt_genero_crear->TabIndex = 3;
			// 
			// txt_edad_crear
			// 
			this->txt_edad_crear->Location = System::Drawing::Point(702, 98);
			this->txt_edad_crear->Name = L"txt_edad_crear";
			this->txt_edad_crear->Size = System::Drawing::Size(160, 20);
			this->txt_edad_crear->TabIndex = 2;
			// 
			// txt_nombre_crear
			// 
			this->txt_nombre_crear->Location = System::Drawing::Point(702, 47);
			this->txt_nombre_crear->Name = L"txt_nombre_crear";
			this->txt_nombre_crear->Size = System::Drawing::Size(160, 20);
			this->txt_nombre_crear->TabIndex = 1;
			// 
			// data_grid_crear
			// 
			this->data_grid_crear->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid_crear->Location = System::Drawing::Point(23, 15);
			this->data_grid_crear->Name = L"data_grid_crear";
			this->data_grid_crear->ReadOnly = true;
			this->data_grid_crear->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid_crear->Size = System::Drawing::Size(628, 320);
			this->data_grid_crear->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->txt_id_act);
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->txt_cal_act);
			this->tabPage3->Controls->Add(this->txt_genero_act);
			this->tabPage3->Controls->Add(this->txt_edad_act);
			this->tabPage3->Controls->Add(this->txt_nombre_act);
			this->tabPage3->Controls->Add(this->data_grid_actualizar);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(904, 341);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Actualizar";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(724, 31);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 13);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Id";
			// 
			// txt_id_act
			// 
			this->txt_id_act->Enabled = false;
			this->txt_id_act->Location = System::Drawing::Point(727, 47);
			this->txt_id_act->Name = L"txt_id_act";
			this->txt_id_act->Size = System::Drawing::Size(160, 20);
			this->txt_id_act->TabIndex = 19;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(769, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Modificar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Menu_est::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(724, 242);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Calificaciones";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(724, 188);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Genero";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(724, 131);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Edad";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(724, 80);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Nombre";
			// 
			// txt_cal_act
			// 
			this->txt_cal_act->Location = System::Drawing::Point(727, 258);
			this->txt_cal_act->Name = L"txt_cal_act";
			this->txt_cal_act->Size = System::Drawing::Size(160, 20);
			this->txt_cal_act->TabIndex = 13;
			// 
			// txt_genero_act
			// 
			this->txt_genero_act->Location = System::Drawing::Point(727, 204);
			this->txt_genero_act->Name = L"txt_genero_act";
			this->txt_genero_act->Size = System::Drawing::Size(160, 20);
			this->txt_genero_act->TabIndex = 12;
			// 
			// txt_edad_act
			// 
			this->txt_edad_act->Location = System::Drawing::Point(727, 147);
			this->txt_edad_act->Name = L"txt_edad_act";
			this->txt_edad_act->Size = System::Drawing::Size(160, 20);
			this->txt_edad_act->TabIndex = 11;
			// 
			// txt_nombre_act
			// 
			this->txt_nombre_act->Location = System::Drawing::Point(727, 96);
			this->txt_nombre_act->Name = L"txt_nombre_act";
			this->txt_nombre_act->Size = System::Drawing::Size(160, 20);
			this->txt_nombre_act->TabIndex = 10;
			// 
			// data_grid_actualizar
			// 
			this->data_grid_actualizar->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid_actualizar->Location = System::Drawing::Point(3, 15);
			this->data_grid_actualizar->Name = L"data_grid_actualizar";
			this->data_grid_actualizar->ReadOnly = true;
			this->data_grid_actualizar->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid_actualizar->Size = System::Drawing::Size(718, 308);
			this->data_grid_actualizar->TabIndex = 1;
			this->data_grid_actualizar->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Menu_est::data_grid_actualizar_CellContentClick);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button2);
			this->tabPage4->Controls->Add(this->label12);
			this->tabPage4->Controls->Add(this->label11);
			this->tabPage4->Controls->Add(this->txt_id_el);
			this->tabPage4->Controls->Add(this->data_grid_eliminar);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(904, 341);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Eliminar";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(740, 220);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Menu_est::button2_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(712, 84);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(130, 13);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Se eliminara el estudiante:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(712, 131);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(16, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Id";
			// 
			// txt_id_el
			// 
			this->txt_id_el->Enabled = false;
			this->txt_id_el->Location = System::Drawing::Point(715, 147);
			this->txt_id_el->Name = L"txt_id_el";
			this->txt_id_el->Size = System::Drawing::Size(39, 20);
			this->txt_id_el->TabIndex = 21;
			// 
			// data_grid_eliminar
			// 
			this->data_grid_eliminar->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid_eliminar->Location = System::Drawing::Point(3, 16);
			this->data_grid_eliminar->Name = L"data_grid_eliminar";
			this->data_grid_eliminar->ReadOnly = true;
			this->data_grid_eliminar->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid_eliminar->Size = System::Drawing::Size(674, 322);
			this->data_grid_eliminar->TabIndex = 1;
			this->data_grid_eliminar->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Menu_est::data_grid_eliminar_CellClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(295, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Menu estudiantes";
			// 
			// Menu_est
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(938, 436);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Menu_est";
			this->Text = L"Menu_est";
			this->Load += gcnew System::EventHandler(this, &Menu_est::Menu_est_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid_crear))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid_actualizar))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid_eliminar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Menu_est_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Consulta();
	}

	public: void Consulta() //metodo publico que mostrara los datos
	{
		this->data->AbrirConexion(); //abrimos la conexión para llenar la tabla
		this->data_grid_crear->DataSource = this->data->getData(); //nos indica de que método se obtendrá la información para la tabla
		this->data_grid_actualizar->DataSource = this->data->getData();
		this->data_grid_eliminar->DataSource = this->data->getData();
		this->data->CerrarConexion(); //cerramos la conexion luego de llenar la tabla
	}
private: System::Void txt_crear_Click(System::Object^ sender, System::EventArgs^ e) {
	this->data->AbrirConexion(); //abrimos la conexión para llenar la tabla
	this->data->Insertar(this->txt_nombre_crear->Text, this->txt_edad_crear->Text, this->txt_genero_crear->Text, this->txt_cal_crear->Text); //llamamos a la funcion insertar y le indicamos de donde sacara los datos para la tabla
	this->data->CerrarConexion(); //cerramos la conexion luego de llenar la tabla
	this->Consulta();
	this->txt_nombre_crear->Clear(); //se limpian los textbox 
	this->txt_edad_crear->Clear();
	this->txt_genero_crear->Clear();
	this->txt_cal_crear->Clear();
}
private: System::Void data_grid_actualizar_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ id = Convert::ToString(data_grid_actualizar->SelectedRows[0]->Cells[0]->Value); //seleccionamos los valores de la fila completa
	String^ nombre = Convert::ToString(data_grid_actualizar->SelectedRows[0]->Cells[1]->Value);
	String^ edad = Convert::ToString(data_grid_actualizar->SelectedRows[0]->Cells[2]->Value);
	String^ genero = Convert::ToString(data_grid_actualizar->SelectedRows[0]->Cells[3]->Value);
	String^ calif = Convert::ToString(data_grid_actualizar->SelectedRows[0]->Cells[4]->Value);
	this->txt_id_act->Text = id; //asignamos los valores de la fila a sus respectivas textbox
	this->txt_nombre_act->Text = nombre;
	this->txt_edad_act->Text = edad;
	this->txt_genero_act->Text = genero;
	this->txt_cal_act->Text = calif;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	data->AbrirConexion();
	data->Modificar(this->txt_nombre_act->Text, this->txt_edad_act->Text, this->txt_genero_act->Text, this->txt_cal_act->Text, this->txt_id_act->Text); //llamamos a la funcion modificar y le indicamos de donde sacara los datos para la tabla
	data->CerrarConexion();
	this->Consulta();
	this->txt_nombre_act->Clear(); //se limpian los textbox 
	this->txt_edad_act->Clear();
	this->txt_genero_act->Clear();
	this->txt_cal_act->Clear();
	this->txt_id_act->Clear();
	MessageBox::Show("Modificación realizada correctamente!");
}
private: System::Void data_grid_eliminar_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ nombre = Convert::ToString(data_grid_eliminar->SelectedRows[0]->Cells[1]->Value);
	String^ id = Convert::ToString(data_grid_eliminar->SelectedRows[0]->Cells[0]->Value);
	this->label12->Text = "Se eliminara el estudiante: " + nombre;
	this->txt_id_el->Text = id;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ id = Convert::ToString(data_grid_eliminar->SelectedRows[0]->Cells[0]->Value); //seleccionamos los valores de la fila completa
	data->AbrirConexion();
	data->Eliminar(id);
	data->CerrarConexion();
	this->Consulta();
}
};
}
