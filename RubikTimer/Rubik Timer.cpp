#include "Rubik Timer.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	RubikTimer::RubikTimer form;
	Application::Run(%form);
}