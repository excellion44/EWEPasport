//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Ziteli.h"
#include "MainForm.h"
#include "Chelovek.h"
#include "Propisat.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::DBGrid1DblClick(TObject *Sender)
{
	   if(Command->Caption == "PROPISAT")
	   {
			 Form9->IDChelovek->Caption =  ADOQuery1->FieldByName("ID")->Value;
			 Form9->ShowModal();
	   }
	   else
	   {
			Form3->IDChelovek->Caption =  ADOQuery1->FieldByName("ID")->Value;
			Form3->ShowModal();
	   }
}
//---------------------------------------------------------------------------



