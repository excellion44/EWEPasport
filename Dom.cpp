//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Dom.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button2Click(TObject *Sender)
{
	AddHomePanel->Visible = false;
    Edit1->Clear();
}
//---------------------------------------------------------------------------
