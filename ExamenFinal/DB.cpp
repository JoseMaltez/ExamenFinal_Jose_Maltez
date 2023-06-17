#include "pch.h"
#include "DB.h"

DB::DB()//se llama al metodo constructor
{
	this->connectionString = "datasource=localhost; username=root; password=localhost; database=examen_final;"; //colocamos parametros para conectar base de datos
	this->conn = gcnew MySqlConnection(this->connectionString); //creando la conexion con MySql
}

void DB::AbrirConexion() //metodo que abre la conexion
{
	this->conn->Open();
}

void DB::CerrarConexion()//metodo para cerrar la conexion
{
	this->conn->Close();
}

DataTable^ DB::getData() //metodo para obtener la informacion
{
	String^ sql = "select * from estudiantes"; //seleccionamos todo de la tabla registro de ventas
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn); //hacemos el cursor
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor); //adaptador de los datos para lo que necesitamos
	DataTable^ tabla = gcnew DataTable(); //creamos una tabla de datos
	data->Fill(tabla); //hacemos que la tabla se llene con la informacion
	return tabla; //retornamos la tabla
}

void DB::Insertar(String^ nombre, String^ edad, String^ genero, String^ calif) //metodo para insertar a la base de datos con las variables privadas
{
	String^ sql = "insert into estudiantes(Nombre, Edad, Genero, Calificaciones) values ('" + nombre + "', '" + edad + "', '" + genero + "', '" + calif + "')"; //indicamos que variables iran en su respectiva casilla
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn); //hacemos el cursor
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) //si hay un error se muestra un mensaje en pantalla
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::Modificar(String^ nombre, String^ edad, String^ genero, String^ calif, String^ ref) //metodo para modificar en la base de datos las variables privadas
{
	String^ sql = "update estudiantes set Nombre = '" + nombre + "', Edad = '" + edad + "', Genero = '" + genero + "', Calificaciones = '" + calif + "' where Id = '" + ref + "'"; //indicamos que variables se modificaran respectivamente
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn); //hacemos el cursor
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e) //si hay un error se muestra un mensaje en pantalla
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}

void DB::Eliminar(String^ id)
{
	String^ sql = "delete from estudiantes where Id = '" + id + "' ";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn); //hacemos el cursor
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show("Eliminacion completada correctamente!");
	}
	catch (Exception^ e) //si hay un error se muestra un mensaje en pantalla
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}