#include "AdminPage.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main1(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUITrial::AdminPage form2;
	Application::Run(% form2);
}