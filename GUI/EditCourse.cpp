#include "EditCourse.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main5(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUITrial::EditCourse form5;
	Application::Run(% form5);
}
