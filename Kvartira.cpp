//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Kvartira.h"
#include "MainForm.h"
#include "Chelovek.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm8::DBGrid2DblClick(TObject *Sender)
{

	   Form3->IDChelovek->Caption =  ADOQuery2->FieldByName("ID_CHELOVEK")->Value;

		Form3->ShowModal();
}
//---------------------------------------------------------------------------

