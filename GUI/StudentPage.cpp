#include "StudentPage.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main6(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUITrial::StudentPage form6;
	Application::Run(% form6);
}

