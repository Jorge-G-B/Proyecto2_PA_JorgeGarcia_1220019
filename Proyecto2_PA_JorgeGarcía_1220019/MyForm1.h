#pragma once
#include "AgregarAct.h"
#include "AlarmaRecord.h"
#include "MyForm.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "Lista.h"
#include "Nodo.h"
#include "Actividades.h"
#include "Alarma.h"
#include "Eventos.h"
#include "Recordatorios.h"
#include <string>
#include <msclr/marshal_cppstd.h>
namespace Proyecto2PAJorgeGarc�a1220019{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  TbA�o;
	private: System::Windows::Forms::TextBox^  TbMes;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  dGVCalendario;
	private: System::Windows::Forms::RichTextBox^  rTBAgenda;
	private: System::Windows::Forms::Button^  btnAgregarTarea;
	private: System::Windows::Forms::Button^  btnAgregarRecordatorio;
	private: System::Windows::Forms::Button^  btnAgregarAlarma;
	private: System::Windows::Forms::Button^  BtnImportarAgenda;


	private: System::Windows::Forms::Button^  btnCerrarSesi�n;
	private: System::Windows::Forms::Button^  btngenerarCal;
	private: System::Windows::Forms::Timer^  TimComp;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TbA�o = (gcnew System::Windows::Forms::TextBox());
			this->TbMes = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dGVCalendario = (gcnew System::Windows::Forms::DataGridView());
			this->rTBAgenda = (gcnew System::Windows::Forms::RichTextBox());
			this->btnAgregarTarea = (gcnew System::Windows::Forms::Button());
			this->btnAgregarRecordatorio = (gcnew System::Windows::Forms::Button());
			this->btnAgregarAlarma = (gcnew System::Windows::Forms::Button());
			this->BtnImportarAgenda = (gcnew System::Windows::Forms::Button());
			this->btnCerrarSesi�n = (gcnew System::Windows::Forms::Button());
			this->btngenerarCal = (gcnew System::Windows::Forms::Button());
			this->TimComp = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGVCalendario))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"A�o:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Mes:";
			// 
			// TbA�o
			// 
			this->TbA�o->Location = System::Drawing::Point(55, 13);
			this->TbA�o->Name = L"TbA�o";
			this->TbA�o->Size = System::Drawing::Size(100, 20);
			this->TbA�o->TabIndex = 2;
			// 
			// TbMes
			// 
			this->TbMes->Location = System::Drawing::Point(55, 42);
			this->TbMes->Name = L"TbMes";
			this->TbMes->Size = System::Drawing::Size(100, 20);
			this->TbMes->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(106, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(163, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Seleccione un d�a del calendario";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(288, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Agenda";
			// 
			// dGVCalendario
			// 
			this->dGVCalendario->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGVCalendario->Location = System::Drawing::Point(12, 91);
			this->dGVCalendario->Name = L"dGVCalendario";
			this->dGVCalendario->Size = System::Drawing::Size(354, 252);
			this->dGVCalendario->TabIndex = 6;
			this->dGVCalendario->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm1::dGVCalendario_CellContentClick);
			// 
			// rTBAgenda
			// 
			this->rTBAgenda->Location = System::Drawing::Point(384, 29);
			this->rTBAgenda->Name = L"rTBAgenda";
			this->rTBAgenda->Size = System::Drawing::Size(223, 180);
			this->rTBAgenda->TabIndex = 7;
			this->rTBAgenda->Text = L"";
			// 
			// btnAgregarTarea
			// 
			this->btnAgregarTarea->Location = System::Drawing::Point(384, 229);
			this->btnAgregarTarea->Name = L"btnAgregarTarea";
			this->btnAgregarTarea->Size = System::Drawing::Size(65, 36);
			this->btnAgregarTarea->TabIndex = 8;
			this->btnAgregarTarea->Text = L"Agregar Actividad";
			this->btnAgregarTarea->UseVisualStyleBackColor = true;
			this->btnAgregarTarea->Click += gcnew System::EventHandler(this, &MyForm1::btnAgregarTarea_Click);
			// 
			// btnAgregarRecordatorio
			// 
			this->btnAgregarRecordatorio->Location = System::Drawing::Point(455, 229);
			this->btnAgregarRecordatorio->Name = L"btnAgregarRecordatorio";
			this->btnAgregarRecordatorio->Size = System::Drawing::Size(77, 36);
			this->btnAgregarRecordatorio->TabIndex = 9;
			this->btnAgregarRecordatorio->Text = L"Agregar Recordatorio";
			this->btnAgregarRecordatorio->UseVisualStyleBackColor = true;
			this->btnAgregarRecordatorio->Click += gcnew System::EventHandler(this, &MyForm1::btnAgregarRecordatorio_Click);
			// 
			// btnAgregarAlarma
			// 
			this->btnAgregarAlarma->Location = System::Drawing::Point(538, 229);
			this->btnAgregarAlarma->Name = L"btnAgregarAlarma";
			this->btnAgregarAlarma->Size = System::Drawing::Size(69, 36);
			this->btnAgregarAlarma->TabIndex = 10;
			this->btnAgregarAlarma->Text = L"Agregar Alarma";
			this->btnAgregarAlarma->UseVisualStyleBackColor = true;
			this->btnAgregarAlarma->Click += gcnew System::EventHandler(this, &MyForm1::btnAgregarAlarma_Click);
			// 
			// BtnImportarAgenda
			// 
			this->BtnImportarAgenda->Location = System::Drawing::Point(455, 271);
			this->BtnImportarAgenda->Name = L"BtnImportarAgenda";
			this->BtnImportarAgenda->Size = System::Drawing::Size(77, 42);
			this->BtnImportarAgenda->TabIndex = 11;
			this->BtnImportarAgenda->Text = L"Importar Agenda";
			this->BtnImportarAgenda->UseVisualStyleBackColor = true;
			this->BtnImportarAgenda->Click += gcnew System::EventHandler(this, &MyForm1::BtnImportarAgenda_Click);
			// 
			// btnCerrarSesi�n
			// 
			this->btnCerrarSesi�n->Location = System::Drawing::Point(384, 319);
			this->btnCerrarSesi�n->Name = L"btnCerrarSesi�n";
			this->btnCerrarSesi�n->Size = System::Drawing::Size(223, 24);
			this->btnCerrarSesi�n->TabIndex = 14;
			this->btnCerrarSesi�n->Text = L"Cerrar Sesi�n";
			this->btnCerrarSesi�n->UseVisualStyleBackColor = true;
			this->btnCerrarSesi�n->Click += gcnew System::EventHandler(this, &MyForm1::btnCerrarSesi�n_Click);
			// 
			// btngenerarCal
			// 
			this->btngenerarCal->Location = System::Drawing::Point(162, 13);
			this->btngenerarCal->Name = L"btngenerarCal";
			this->btngenerarCal->Size = System::Drawing::Size(66, 49);
			this->btngenerarCal->TabIndex = 15;
			this->btngenerarCal->Text = L"Generar Calendario";
			this->btngenerarCal->UseVisualStyleBackColor = true;
			this->btngenerarCal->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// TimComp
			// 
			this->TimComp->Enabled = true;
			this->TimComp->Interval = 60000;
			this->TimComp->Tick += gcnew System::EventHandler(this, &MyForm1::TimComp_Tick);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(632, 357);
			this->Controls->Add(this->btngenerarCal);
			this->Controls->Add(this->btnCerrarSesi�n);
			this->Controls->Add(this->BtnImportarAgenda);
			this->Controls->Add(this->btnAgregarAlarma);
			this->Controls->Add(this->btnAgregarRecordatorio);
			this->Controls->Add(this->btnAgregarTarea);
			this->Controls->Add(this->rTBAgenda);
			this->Controls->Add(this->dGVCalendario);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TbMes);
			this->Controls->Add(this->TbA�o);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"Agenda";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGVCalendario))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	public: String^ ruta;
	public: String^ mes;
	public: String^ a�o;
	public: String^ dia;
	public: String^ texto;
	array <String^>^ arregloString;
	AlarmaRecord ^AlarmRecor = gcnew AlarmaRecord();
#pragma endregion
private: System::Void btnAgregarTarea_Click(System::Object^  sender, System::EventArgs^  e) {
	AgregarAct ^FormsActividad = gcnew AgregarAct(ruta, a�o, mes, dia);
	FormsActividad->ShowDialog();
}
private: System::Void btnAgregarRecordatorio_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm3 ^FormsRec = gcnew MyForm3(ruta, a�o, mes, dia);
	FormsRec->ShowDialog();
}
private: System::Void btnAgregarAlarma_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm4 ^FormsAlarm = gcnew MyForm4(ruta, a�o, mes, dia);
	FormsAlarm->ShowDialog();
}
private: System::Void btnCerrarSesi�n_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm ^Forms = gcnew MyForm();
	Forms->ShowDialog();
	ruta = Forms->Closing();
}
private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	MyForm ^Forms = gcnew MyForm();
	Forms->ShowDialog();
	ruta = Forms->Closing();
	ReadFile();
	Split(texto);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		mes = TbMes->Text;
		a�o = TbA�o->Text;
		dGVCalendario->Rows->Clear();
		dGVCalendario->Columns->Clear();
		for (int i = 0; i < 7; i++)
		{
			switch (i)
			{
			case 0:
				dGVCalendario->Columns->Add("C" + i.ToString(), "L");
				break;
			case 1:
				dGVCalendario->Columns->Add("C" + i.ToString(), "Ma");
				break;
			case 2:
				dGVCalendario->Columns->Add("C" + i.ToString(), "Mi");
				break;
			case 3:
				dGVCalendario->Columns->Add("C" + i.ToString(), "J");
				break;
			case 4:
				dGVCalendario->Columns->Add("C" + i.ToString(), "V");
				break;
			case 5:
				dGVCalendario->Columns->Add("C" + i.ToString(), "S");
				break;
			case 6:
				dGVCalendario->Columns->Add("C" + i.ToString(), "D");
				break;
			}
			dGVCalendario->Columns[i]->Width = 50;
		}
		if (Convert::ToInt16(mes) != 2)
		{
			for (int i = 0; i < 4; i++)
			{
				dGVCalendario->Rows->Add();
				dGVCalendario->Rows[i]->Height = 25;
			}
		}
		else if (Convert::ToInt16(a�o) % 4 == 0 && Convert::ToInt16(a�o) % 100 != 0 || Convert::ToInt16(a�o) % 400 == 0) {
			for (int i = 0; i < 4; i++)
			{
				dGVCalendario->Rows->Add();
				dGVCalendario->Rows[i]->Height = 25;
			}
		}
		else {
			for (int i = 0; i < 3; i++)
			{
				dGVCalendario->Rows->Add();
				dGVCalendario->Rows[i]->Height = 25;
			}
		}
		int d = 0;
		switch (Convert::ToInt16(mes)) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			d = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			d = 30;
			break;
		case 2:
			if (Convert::ToInt16(a�o) % 4 == 0 && Convert::ToInt16(a�o) % 100 != 0 || Convert::ToInt16(a�o) % 400 == 0) {
				d = 29;
			}
			else {
				d = 28;
			}
			break;
		}
		int i = 0;
		int t = d + 1;
		bool dias = true;
		while (dias)
		{
			for (int j = 0; j < 7; j++)
			{
				if (d > 0) {
					dGVCalendario->Rows[i]->Cells[j]->Value = Convert::ToInt16(t - d);
					d--;
					if (j == 6)
						i++;
				}
				else {
					dias = false;
				}
			}
		}
	}
	catch (...)
	{
		System::Windows::Forms::MessageBox::Show("�Error! Asegurarse de llenar los campos de mes y a�o");
	}
	
}
	private: System::Void dGVCalendario_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		DataGridViewSelectedCellCollection ^SelectedCells = dGVCalendario->SelectedCells;
		if (Convert::ToInt16(SelectedCells[0]->Value) >= 10){

			dia = Convert::ToString(SelectedCells[0]->Value);
		}
		else {
			dia = "0" + Convert::ToString(SelectedCells[0]->Value);
		}
}
private: System::Void ReadFile() {
	StreamReader^ streamReader = gcnew StreamReader(ruta);
	texto = streamReader->ReadToEnd();
	streamReader->Close();
}
private: System::Void Split(String^TextFromFile) {
	arregloString = TextFromFile->Split(',');
}
private: System::Void BtnImportarAgenda_Click(System::Object^  sender, System::EventArgs^  e) {
	ReadFile();
	Split(texto);
	rTBAgenda->Text = "";
	String^ Actividad = "";
	String^ Record = "";
	String^ Alarma = "";
	bool Evento= true;
	int TipoEvento;
	int n = 1;

	for (int i = 0; i < arregloString->Length; i++)
	{
		if (Evento)
		{
			if (Convert::ToString(arregloString[i]) == "@" || Convert::ToString(arregloString[i]) == "$" || Convert::ToString(arregloString[i]) == "#") {
				if (Convert::ToString(arregloString[i + 1]) == dia + mes + a�o) {
					switch (Convert::ToChar(arregloString[i])) {
					case '@':
						Evento = false;
						TipoEvento = 0;
						break;
					case '$':
						Evento = false;
						TipoEvento = 1;
						break;
					case '#':
						Evento = false;
						TipoEvento = 2;
						break;
					}
				}
			}
		}
		else {
			switch (TipoEvento)
			{
			case 0:
				switch (n)
				{
				case 1:
					Actividad += "Actividad: \n Fecha: " + Convert::ToString(arregloString[i]) + " \n ";
					n++;
					break;
				case 2:
					Actividad += "Identificador: " + Convert::ToString(arregloString[i]) + " \n ";
					n++;
					break;
				case 3:
					Actividad += "Prioridad: " + Convert::ToString(arregloString[i]) + " \n ";
					n++;
					break;
				case 4:
					Actividad += "Hora de Inicio: " + Convert::ToString(arregloString[i]) + " \n ";
					n++;
					break;
				case 5:
					Actividad += "Hora Final: " + Convert::ToString(arregloString[i]) + " \n ";
					n++;
					break;
				case 6:
					Actividad += "Lugar: " + Convert::ToString(arregloString[i]) + " \n ";
					n++;
					break;
				case 7:
					Actividad += "Personas involucradas: " + Convert::ToString(arregloString[i]) + " \n ";
					n++;
					break;
				case 8:
					Actividad += "Materiales a utilizar: " + Convert::ToString(arregloString[i]) + " \n ";
					n++;
					break;
				case 9:
					Actividad += "Descripci�n: " + Convert::ToString(arregloString[i]) + " \n ";
					n=1;
					Evento = true;
					break;
				}
				break;
			case 1:
				switch (n)
				{
				case 1:
					Record += "Recordatorio: \n Fecha: " + Convert::ToString(arregloString[i]) + " \n ";
					n++;
					break;
				case 2:
					Record += "Identificador: " + Convert::ToString(arregloString[i]) + " \n ";
					n++;
					break;
				case 3:
					Record += "Prioridad: " + Convert::ToString(arregloString[i]) + " \n ";
					n++;
					break;
				case 4:
					Record += "Hora L�mite: " + Convert::ToString(arregloString[i]) + " \n ";
					n++;
					break;
				case 5:
					Record += "Descripci�n: " + Convert::ToString(arregloString[i]) + " \n ";
					n = 1;
					Evento = true;
					break;
				}
				break;
			case 2:
				switch (n)
				{
				case 1:
					Alarma += "Alarma: \n Fecha: " + Convert::ToString(arregloString[i]) + " \n ";
					n++;
					break;
				case 2:
					Alarma += "Identificador: " + Convert::ToString(arregloString[i]) + " \n ";
					n++;
					break;
				case 3:
					Alarma += "Prioridad: " + Convert::ToString(arregloString[i]) + " \n ";
					n++;
					break;
				case 4:
					Alarma += "Hora Establecida: " + Convert::ToString(arregloString[i]) + " \n ";
					n++;
					break;
				case 5:
					Alarma += "Descripci�n: " + Convert::ToString(arregloString[i]) + " \n ";
					n = 1;
					Evento = true;
					break;
				}
				break;
			}
		}
	}
	rTBAgenda->Text = Actividad + " \n " + Record +" \n "+ Alarma;
}
private: System::Void TimComp_Tick(System::Object^  sender, System::EventArgs^  e) {
	ReadFile();
	Split(texto);
	bool Evento = true;
	int TipoEvento;
	int n = 1;
	String^ HoraS;
	String^ Fecha;
	DateTime ^TiempoDia = gcnew DateTime();
	for (int i = 0; i < arregloString->Length; i++)
	{
		if (Evento)
		{
			if (Convert::ToString(arregloString[i]) == "@" || Convert::ToString(arregloString[i]) == "$" || Convert::ToString(arregloString[i]) == "#") {
				if (Convert::ToString(arregloString[i + 1]) == dia + mes + a�o) {
					switch (Convert::ToChar(arregloString[i])) {
					case '@':
						Evento = false;
						TipoEvento = 0;
						break;
					case '$':
						Evento = false;
						TipoEvento = 1;
						break;
					case '#':
						Evento = false;
						TipoEvento = 2;
						break;
					}
				}
			}
		}
		else {
			switch (TipoEvento)
			{
			case 0:
				TiempoDia = TiempoDia->Now;
				HoraS = Convert::ToString(arregloString[i+3]);
				Fecha = Convert::ToString(arregloString[i]);
				if (Convert::ToString(TiempoDia->Day) == Fecha->Substring(0, 2) && Convert::ToString(TiempoDia->Month) == Fecha->Substring(2, 2) && Convert::ToString(TiempoDia->Year) == Fecha->Substring(4, 4)) {
					if (Convert::ToString(TiempoDia->Hour) == HoraS->Substring(0, 2) && Convert::ToString(TiempoDia->Minute) == HoraS->Substring(3, 2))
					{
						System::Windows::Forms::MessageBox::Show("Llego la hora de la actividad: " + Convert::ToString(arregloString[i + 8]));
					}
				}
				Evento = true;
				break;
			case 1:
				TiempoDia = TiempoDia->Now;
				HoraS = Convert::ToString(arregloString[i + 3]);
				Fecha = Convert::ToString(arregloString[i]);
				if (Convert::ToString(TiempoDia->Day) == Fecha->Substring(0, 2) && Convert::ToString(TiempoDia->Month) == Fecha->Substring(2, 2) && Convert::ToString(TiempoDia->Year) == Fecha->Substring(4, 4))
				{
					if (Convert::ToString(TiempoDia->Hour) == HoraS->Substring(0, 2) && Convert::ToString(TiempoDia->Minute) == HoraS->Substring(3, 2))
					{
						System::Windows::Forms::MessageBox::Show("Recordatorio: " + Convert::ToString(arregloString[i+4]));
						AlarmRecor->Show();
					}
				}
				Evento = true;
				break;
			case 2:
				TiempoDia = TiempoDia->Now;
				HoraS = Convert::ToString(arregloString[i + 3]);
				Fecha = Convert::ToString(arregloString[i]);
				if (Convert::ToString(TiempoDia->Day) == Fecha->Substring(0, 2) && Convert::ToString(TiempoDia->Month) == Fecha->Substring(2, 2) && Convert::ToString(TiempoDia->Year) == Fecha->Substring(4, 4))
				{
					if (Convert::ToString(TiempoDia->Hour) == HoraS->Substring(0, 2) && Convert::ToString(TiempoDia->Minute) == HoraS->Substring(3, 2))
					{
						AlarmRecor->Show();
					}
				}
				Evento = true;
				break;

			}
		}
	}
}
};
}
