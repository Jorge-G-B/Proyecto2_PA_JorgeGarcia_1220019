#pragma once
namespace Proyecto2PAJorgeGarcía1220019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Media;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox2;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnRegistro;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbNombreUsuRegistro;
	private: System::Windows::Forms::TextBox^  tbContraseñaRegistro;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  btnIniciodeSesion;
	private: System::Windows::Forms::TextBox^  tbContraseñaIS;
	private: System::Windows::Forms::TextBox^  tbNombreUsuIS;

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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnRegistro = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbNombreUsuRegistro = (gcnew System::Windows::Forms::TextBox());
			this->tbContraseñaRegistro = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnIniciodeSesion = (gcnew System::Windows::Forms::Button());
			this->tbContraseñaIS = (gcnew System::Windows::Forms::TextBox());
			this->tbNombreUsuIS = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->btnRegistro);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->tbNombreUsuRegistro);
			this->groupBox2->Controls->Add(this->tbContraseñaRegistro);
			this->groupBox2->Location = System::Drawing::Point(12, 172);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(267, 125);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Registro de nuevo usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(62, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Contraseña:";
			// 
			// btnRegistro
			// 
			this->btnRegistro->Location = System::Drawing::Point(86, 92);
			this->btnRegistro->Name = L"btnRegistro";
			this->btnRegistro->Size = System::Drawing::Size(75, 23);
			this->btnRegistro->TabIndex = 2;
			this->btnRegistro->Text = L"Registrarse";
			this->btnRegistro->UseVisualStyleBackColor = true;
			this->btnRegistro->Click += gcnew System::EventHandler(this, &MyForm::btnRegistro_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nombre de usuario:";
			// 
			// tbNombreUsuRegistro
			// 
			this->tbNombreUsuRegistro->Location = System::Drawing::Point(129, 28);
			this->tbNombreUsuRegistro->Name = L"tbNombreUsuRegistro";
			this->tbNombreUsuRegistro->Size = System::Drawing::Size(100, 20);
			this->tbNombreUsuRegistro->TabIndex = 0;
			// 
			// tbContraseñaRegistro
			// 
			this->tbContraseñaRegistro->Location = System::Drawing::Point(129, 54);
			this->tbContraseñaRegistro->Name = L"tbContraseñaRegistro";
			this->tbContraseñaRegistro->Size = System::Drawing::Size(100, 20);
			this->tbContraseñaRegistro->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->btnIniciodeSesion);
			this->groupBox1->Controls->Add(this->tbContraseñaIS);
			this->groupBox1->Controls->Add(this->tbNombreUsuIS);
			this->groupBox1->Location = System::Drawing::Point(12, 7);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(267, 141);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Inicio de Sesión";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(65, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Contraseña:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(27, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Nombre de usuario:";
			// 
			// btnIniciodeSesion
			// 
			this->btnIniciodeSesion->Location = System::Drawing::Point(86, 93);
			this->btnIniciodeSesion->Name = L"btnIniciodeSesion";
			this->btnIniciodeSesion->Size = System::Drawing::Size(75, 23);
			this->btnIniciodeSesion->TabIndex = 7;
			this->btnIniciodeSesion->Text = L"Iniciar";
			this->btnIniciodeSesion->UseVisualStyleBackColor = true;
			this->btnIniciodeSesion->Click += gcnew System::EventHandler(this, &MyForm::btnIniciodeSesion_Click);
			// 
			// tbContraseñaIS
			// 
			this->tbContraseñaIS->Location = System::Drawing::Point(132, 67);
			this->tbContraseñaIS->Name = L"tbContraseñaIS";
			this->tbContraseñaIS->PasswordChar = '*';
			this->tbContraseñaIS->Size = System::Drawing::Size(100, 20);
			this->tbContraseñaIS->TabIndex = 6;
			// 
			// tbNombreUsuIS
			// 
			this->tbNombreUsuIS->Location = System::Drawing::Point(132, 41);
			this->tbNombreUsuIS->Name = L"tbNombreUsuIS";
			this->tbNombreUsuIS->Size = System::Drawing::Size(100, 20);
			this->tbNombreUsuIS->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(295, 318);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Inicio de Sesión";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: String^ texto;
		private: String^ ruta;
		array <String^>^ arregloString;
private: System::Void btnIniciodeSesion_Click(System::Object^  sender, System::EventArgs^  e) {
	try
		{
			String^ Nombreusu = tbNombreUsuIS->Text;
			String^ Contraseña = tbContraseñaIS->Text;
			ReadFile("Usuarios.csv");
			Split(texto);
			int n = 0;
			bool CContra = false;
			bool CUsuario = false;
			for (int i = 0; i < arregloString->Length; i++)
			{
				switch (n) {
				case 0:
					CContra = false;
					CUsuario = false;
					if (Nombreusu == arregloString[i]) {
						CUsuario = true;
						n++;
					}
					break;
				case 1:
					if (Contraseña == arregloString[i]) {
						CContra = true;
						if (CUsuario) {
							i = arregloString->Length;
						}
					}
					break;
				case 2:
					n = 0;
					break;
				}
			}
			if (CContra && CUsuario) {
				System::Windows::Forms::MessageBox::Show("Datos correctos! Iniciando Sesión...");
				if (Nombreusu == "T-800")
				{
					playSimpleSound();
				}
				this->Close();
			}
			else if (!CUsuario) {
				System::Windows::Forms::MessageBox::Show("El usuario no existe, revise si ingreso bien los datos, o cree un nuevo usuario.");
			}
			else if (!CContra) {
				System::Windows::Forms::MessageBox::Show("La contraseña es incorrecta.");
			}
		}
		catch (...) {
			System::Windows::Forms::MessageBox::Show("¡Error! Asegurarse de llenar todos los campos necesarios");
		}
}
private: System::Void playSimpleSound()
{
	SoundPlayer ^simpleSound = gcnew SoundPlayer("ill-be-back.wav");
	simpleSound->Play();
}
private: System::Void WriteFile(String^ruta, String^ texto) {
	StreamWriter^ streamWriter = gcnew StreamWriter(ruta);
	streamWriter->Write(texto);
	streamWriter->Close();
	}
private: System::Void btnRegistro_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ Nombreusu = tbNombreUsuRegistro->Text;
	String^ Contraseña = tbContraseñaRegistro->Text;
	String^ NombreArchiv = Nombreusu + ".csv";
	StreamWriter^ Creac = gcnew StreamWriter(NombreArchiv);
	if (Nombreusu != "" && Contraseña != "") {
		ReadFile("Usuarios.csv");
		texto += "," + Nombreusu + "," + Contraseña + ",@";
		WriteFile("Usuarios.csv", texto);
		System::Windows::Forms::MessageBox::Show("Registro completo, proceda a iniciar sesión.");
	}
	else {
		System::Windows::Forms::MessageBox::Show("Debe llenar todos los campos para poder registrarse.");
	}
}

public: System::String^ Closing() {
	return tbNombreUsuIS->Text + ".csv";
}
private: System::Void ReadFile(String^ruta) {
	StreamReader^ streamReader = gcnew StreamReader(ruta);
	texto = streamReader->ReadToEnd();
	streamReader->Close();
}
private: System::Void Split(String^TextFromFile) {	
arregloString = TextFromFile->Split(',');
}
		 
};
}
