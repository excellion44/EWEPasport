//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Kvartira.h"
#include "MainForm.h"
#include "Chelovek.h"
#include "Ziteli.h"
#include "Propisat.h"
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

void __fastcall TForm8::N1Click(TObject *Sender)
{
	Form2->Command->Caption = "PROPISAT";
    Form2->ADOQuery1->Active = false;
	Form2->ADOQuery1->SQL->Text = "SELECT * FROM chelovek";
	Form2->ADOQuery1->Active = true;
    Form9->IDKvartira->Caption = ID_KVARTIRA->Caption;
	Form2->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm8::DBGrid2DrawColumnCell(TObject *Sender, const TRect &Rect,
          int DataCol, TColumn *Column, TGridDrawState State)
{
    			if(ADOQuery2->FieldByName("TYPE")->Value == "Временная")
				{
						TDBGrid *dbg = (TDBGrid*)Sender;
						dbg->Canvas->Brush->Color = clSkyBlue;
						dbg->Canvas->FillRect(Rect);
						dbg->DefaultDrawColumnCell(Rect, DataCol, Column, State);
				}
}
//---------------------------------------------------------------------------


