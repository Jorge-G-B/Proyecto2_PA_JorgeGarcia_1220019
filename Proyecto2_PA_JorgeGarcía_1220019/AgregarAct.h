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
	/// Resumen de AgregarAct
	/// </summary>
	public ref class AgregarAct : public System::Windows::Forms::Form
	{
	public:
		AgregarAct(void)
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
		~AgregarAct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^  mTBPrioridad;
	protected:
	private: System::Windows::Forms::MaskedTextBox^  mTBHoraI;
	private: System::Windows::Forms::MaskedTextBox^  mTBHoraF;
	private: System::Windows::Forms::TextBox^  TBDescripcion;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  TbMateriales;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  TBPersonasI;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  TBLugarR;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnAgregarT;

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
			this->mTBPrioridad = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mTBHoraI = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mTBHoraF = (gcnew System::Windows::Forms::MaskedTextBox());
			this->TBDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TbMateriales = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TBPersonasI = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TBLugarR = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAgregarT = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// mTBPrioridad
			// 
			this->mTBPrioridad->Location = System::Drawing::Point(182, 144);
			this->mTBPrioridad->Mask = L"9";
			this->mTBPrioridad->Name = L"mTBPrioridad";
			this->mTBPrioridad->Size = System::Drawing::Size(14, 20);
			this->mTBPrioridad->TabIndex = 32;
			this->mTBPrioridad->ValidatingType = System::Int32::typeid;
			// 
			// mTBHoraI
			// 
			this->mTBHoraI->Location = System::Drawing::Point(171, 17);
			this->mTBHoraI->Mask = L"00:00";
			this->mTBHoraI->Name = L"mTBHoraI";
			this->mTBHoraI->Size = System::Drawing::Size(43, 20);
			this->mTBHoraI->TabIndex = 31;
			this->mTBHoraI->ValidatingType = System::DateTime::typeid;
			// 
			// mTBHoraF
			// 
			this->mTBHoraF->Location = System::Drawing::Point(171, 40);
			this->mTBHoraF->Mask = L"00:00";
			this->mTBHoraF->Name = L"mTBHoraF";
			this->mTBHoraF->Size = System::Drawing::Size(43, 20);
			this->mTBHoraF->TabIndex = 30;
			this->mTBHoraF->ValidatingType = System::DateTime::typeid;
			// 
			// TBDescripcion
			// 
			this->TBDescripcion->Location = System::Drawing::Point(126, 170);
			this->TBDescripcion->Name = L"TBDescripcion";
			this->TBDescripcion->Size = System::Drawing::Size(130, 20);
			this->TBDescripcion->TabIndex = 29;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(42, 173);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Descripción";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(65, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 13);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Prioridad";
			// 
			// TbMateriales
			// 
			this->TbMateriales->Location = System::Drawing::Point(126, 118);
			this->TbMateriales->Name = L"TbMateriales";
			this->TbMateriales->Size = System::Drawing::Size(130, 20);
			this->TbMateriales->TabIndex = 26;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(65, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Materiales";
			// 
			// TBPersonasI
			// 
			this->TBPersonasI->Location = System::Drawing::Point(126, 92);
			this->TBPersonasI->Name = L"TBPersonasI";
			this->TBPersonasI->Size = System::Drawing::Size(130, 20);
			this->TBPersonasI->TabIndex = 24;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 13);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Personas involucradas";
			// 
			// TBLugarR
			// 
			this->TBLugarR->Location = System::Drawing::Point(126, 66);
			this->TBLugarR->Name = L"TBLugarR";
			this->TBLugarR->Size = System::Drawing::Size(130, 20);
			this->TBLugarR->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Lugar de la reunión";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Hora de fin";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Hora de inicio";
			// 
			// btnAgregarT
			// 
			this->btnAgregarT->Location = System::Drawing::Point(87, 206);
			this->btnAgregarT->Name = L"btnAgregarT";
			this->btnAgregarT->Size = System::Drawing::Size(109, 29);
			this->btnAgregarT->TabIndex = 18;
			this->btnAgregarT->Text = L"Agregar Actividad";
			this->btnAgregarT->UseVisualStyleBackColor = true;
			this->btnAgregarT->Click += gcnew System::EventHandler(this, &AgregarAct::btnAgregarT_Click);
			// 
			// AgregarAct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 252);
			this->Controls->Add(this->mTBPrioridad);
			this->Controls->Add(this->mTBHoraI);
			this->Controls->Add(this->mTBHoraF);
			this->Controls->Add(this->TBDescripcion);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TbMateriales);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TBPersonasI);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TBLugarR);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnAgregarT);
			this->Name = L"AgregarAct";
			this->Text = L"AgregarAct";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ ruta;
		String^ año;
		String^ mes;
		String^ dia;
	private: System::Void btnAgregarT_Click(System::Object^  sender, System::EventArgs^  e) {
		Random^ rnd = gcnew Random();
		StreamReader^ SR = gcnew StreamReader(ruta);
		String^ Texto = SR->ReadToEnd();
		SR->Close();
		Texto += "@," + dia + mes + año + ",@" + Convert::ToString(rnd->Next(999)) + "," + mTBPrioridad->Text + "," + mTBHoraI->Text + "," + mTBHoraF->Text + "," + TBLugarR->Text + "," + TBPersonasI->Text + "," + TbMateriales->Text + "," + TBDescripcion->Text + ",";
		WriteFile(Texto);
		this->Close();
	}
	private: System::Void WriteFile(String^ texto) {
	StreamWriter^ streamWriter = gcnew StreamWriter(ruta);
	streamWriter->Write(texto);
	streamWriter->Close();
	}
	public: AgregarAct(String^ route, String^ year, String^ month, String^ day) {
	InitializeComponent();
	ruta = route;
	mes = month;
	año = year;
	dia = day;
	}
};
}
