#include "MyForm3.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main4(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2PAJorgeGarcía1220019::MyForm3 form;
	Application::Run(%form);
	return 0;
}

