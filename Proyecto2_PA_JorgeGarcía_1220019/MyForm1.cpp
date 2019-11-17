#include "MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2PAJorgeGarcía1220019::MyForm1 form;
	Application::Run(%form);
	return 0;
}
