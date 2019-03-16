#include "LR7.h"
#include "LR6.h"
#include "LR5_1.h"
#include "LR5.h"
#include "LR4.h"
#include "LR3_1.h"
#include "LR3.h"
#include "LR2.h"
#include "Titul.h"

using namespace System;
using namespace
System::Windows::Forms;
[STAThread]
void main(array<String^>^ args) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);
	LaboratorniyeR::Titul form;
	Application::Run(%form);
}
