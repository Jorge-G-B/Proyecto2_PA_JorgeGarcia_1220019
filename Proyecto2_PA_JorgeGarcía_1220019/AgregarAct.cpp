#include "AgregarAct.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main3(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2PAJorgeGarcía1220019::AgregarAct form;
	Application::Run(%form);
	return 0;
}
