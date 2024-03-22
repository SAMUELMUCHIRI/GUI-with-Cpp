#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FIRSTGUI::MyForm form;
	Application::Run(% form);
	
	return 0;
}

