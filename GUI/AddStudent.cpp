#include "AddStudent.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main3(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUITrial::AddStudent form3;
	Application::Run(% form3);
}

