#pragma once

namespace Proyecto2PAJorgeGarcía1220019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Media;

	/// <summary>
	/// Resumen de AlarmaRecord
	/// </summary>
	public ref class AlarmaRecord : public System::Windows::Forms::Form
	{
	public:
		AlarmaRecord(void)
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
		~AlarmaRecord()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnPosponer;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnDescartar;

	private: System::Windows::Forms::TextBox^  tbPosponer;
	private: System::Windows::Forms::Label^  label2;
	protected:

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
			this->btnPosponer = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnDescartar = (gcnew System::Windows::Forms::Button());
			this->tbPosponer = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnPosponer
			// 
			this->btnPosponer->Location = System::Drawing::Point(106, 92);
			this->btnPosponer->Name = L"btnPosponer";
			this->btnPosponer->Size = System::Drawing::Size(75, 23);
			this->btnPosponer->TabIndex = 0;
			this->btnPosponer->Text = L"Posponer";
			this->btnPosponer->UseVisualStyleBackColor = true;
			this->btnPosponer->Click += gcnew System::EventHandler(this, &AlarmaRecord::btnPosponer_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(117, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"¡Es Hora! ";
			// 
			// btnDescartar
			// 
			this->btnDescartar->Location = System::Drawing::Point(106, 24);
			this->btnDescartar->Name = L"btnDescartar";
			this->btnDescartar->Size = System::Drawing::Size(75, 23);
			this->btnDescartar->TabIndex = 2;
			this->btnDescartar->Text = L"Descartar";
			this->btnDescartar->UseVisualStyleBackColor = true;
			this->btnDescartar->Click += gcnew System::EventHandler(this, &AlarmaRecord::btnDescartar_Click);
			// 
			// tbPosponer
			// 
			this->tbPosponer->Location = System::Drawing::Point(93, 66);
			this->tbPosponer->Name = L"tbPosponer";
			this->tbPosponer->Size = System::Drawing::Size(100, 20);
			this->tbPosponer->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Cantidad de segundos a posponer";
			// 
			// AlarmaRecord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(287, 117);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbPosponer);
			this->Controls->Add(this->btnDescartar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnPosponer);
			this->Name = L"AlarmaRecord";
			this->Text = L"AlarmaRecord";
			this->Load += gcnew System::EventHandler(this, &AlarmaRecord::AlarmaRecord_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		SoundPlayer ^simpleSound = gcnew SoundPlayer("Il_Vento_Doro.wav");
	private: System::Void btnDescartar_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
		simpleSound->Stop();
	}
private: System::Void btnPosponer_Click(System::Object^  sender, System::EventArgs^  e) {
	Hide();
	simpleSound->Stop();
	Thread::Sleep(Convert::ToInt16(tbPosponer->Text) * 1000);
	simpleSound->PlayLooping();
	Show();
}
private: System::Void AlarmaRecord_Load(System::Object^  sender, System::EventArgs^  e) {
	playSimpleSound();
}
private: System::Void playSimpleSound()
{
			 simpleSound->PlayLooping();
}
};
}
