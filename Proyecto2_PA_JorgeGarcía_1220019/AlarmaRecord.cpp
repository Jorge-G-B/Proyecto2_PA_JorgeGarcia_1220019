#include "AlarmaRecord.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main9(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2PAJorgeGarcía1220019::AlarmaRecord form;
	Application::Run(%form);
	return 0;
}
