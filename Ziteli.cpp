//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Ziteli.h"
#include "MainForm.h"
#include "Chelovek.h"
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

	   Form3->Edit1->Text = ADOQuery1->FieldByName("FAMILIYA")->Value;
	   Form3->Edit2->Text = ADOQuery1->FieldByName("IMYA")->Value;
	   Form3->Edit3->Text = ADOQuery1->FieldByName("OTCHESTVO")->Value;
	   Form3->Edit4->Text = ADOQuery1->FieldByName("GOD_ROZDENIYA")->Value;
	   Form3->PasportID->Caption =  ADOQuery1->FieldByName("PASPORT")->Value;
       Form3->IDChelovek->Caption =  ADOQuery1->FieldByName("ID")->Value;

		Form3->ShowModal();
}
//---------------------------------------------------------------------------


