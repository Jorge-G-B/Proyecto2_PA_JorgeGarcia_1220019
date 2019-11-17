#include "MyForm4.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main5(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2PAJorgeGarcía1220019::MyForm4 form;
	Application::Run(%form);
	return 0;
}

