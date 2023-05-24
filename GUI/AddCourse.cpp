#include "AddCourse.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main4(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUITrial::AddCourse form4;
	Application::Run(% form4);
}

