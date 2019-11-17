#pragma once

namespace Proyecto2PAJorgeGarcía1220019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  TBDescripcion;
	protected:
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::MaskedTextBox^  mTBPrioridad;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  btnAgregarT;
	private: System::Windows::Forms::MaskedTextBox^  mTBHoraL;
	private: System::Windows::Forms::Label^  label1;

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
			this->TBDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->mTBPrioridad = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnAgregarT = (gcnew System::Windows::Forms::Button());
			this->mTBHoraL = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// TBDescripcion
			// 
			this->TBDescripcion->Location = System::Drawing::Point(140, 67);
			this->TBDescripcion->Name = L"TBDescripcion";
			this->TBDescripcion->Size = System::Drawing::Size(130, 20);
			this->TBDescripcion->TabIndex = 30;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(47, 70);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 13);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Descripción";
			// 
			// mTBPrioridad
			// 
			this->mTBPrioridad->Location = System::Drawing::Point(140, 41);
			this->mTBPrioridad->Mask = L"9";
			this->mTBPrioridad->Name = L"mTBPrioridad";
			this->mTBPrioridad->Size = System::Drawing::Size(14, 20);
			this->mTBPrioridad->TabIndex = 28;
			this->mTBPrioridad->ValidatingType = System::Int32::typeid;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(62, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 13);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Prioridad";
			// 
			// btnAgregarT
			// 
			this->btnAgregarT->Location = System::Drawing::Point(77, 111);
			this->btnAgregarT->Name = L"btnAgregarT";
			this->btnAgregarT->Size = System::Drawing::Size(121, 22);
			this->btnAgregarT->TabIndex = 26;
			this->btnAgregarT->Text = L"Agregar Alarma";
			this->btnAgregarT->UseVisualStyleBackColor = true;
			this->btnAgregarT->Click += gcnew System::EventHandler(this, &MyForm4::btnAgregarT_Click);
			// 
			// mTBHoraL
			// 
			this->mTBHoraL->Location = System::Drawing::Point(140, 15);
			this->mTBHoraL->Mask = L"00:00";
			this->mTBHoraL->Name = L"mTBHoraL";
			this->mTBHoraL->Size = System::Drawing::Size(43, 20);
			this->mTBHoraL->TabIndex = 25;
			this->mTBHoraL->ValidatingType = System::DateTime::typeid;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Hora Límite";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 145);
			this->Controls->Add(this->TBDescripcion);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->mTBPrioridad);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btnAgregarT);
			this->Controls->Add(this->mTBHoraL);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm4";
			this->Text = L"Agregar Alarma";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: 
		String^ ruta;
		String^ año;
		String^ mes;
		String^ dia;
	private: System::Void MyForm4_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	public: MyForm4(String^ route, String^ year, String^ month, String^ day) {
		InitializeComponent();
		ruta = route;
		mes = month;
		año = year;
		dia = day;
	}
	private: System::Void WriteFile(String^ texto) {
	StreamWriter^ streamWriter = gcnew StreamWriter(ruta);
	streamWriter->Write(texto);
	streamWriter->Close();
	}
	private: System::Void btnAgregarT_Click(System::Object^  sender, System::EventArgs^  e) {
		Random^ rnd = gcnew Random();
		StreamReader^ SR = gcnew StreamReader(ruta);
		String^ Texto = SR->ReadToEnd();
		SR->Close();
		Texto += "#," + dia + mes + año + ",#" + Convert::ToString(rnd->Next(999)) + "," + mTBPrioridad->Text + "," + mTBHoraL->Text + "," + TBDescripcion->Text + ",";
		WriteFile(Texto);
		this->Close();
	}
};
}
