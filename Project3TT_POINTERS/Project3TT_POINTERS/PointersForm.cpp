#include <sstream>
#include "PointersForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3TT_POINTERS::PointersForm form;   //Replace the names!
	Application::Run(%form);
}