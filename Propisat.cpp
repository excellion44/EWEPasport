//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Propisat.h"
#include "Ziteli.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button1Click(TObject *Sender)
{
    ShowMessage(MaskEdit1->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm9::MaskEdit1Click(TObject *Sender)
{
	MaskEdit1->SelStart = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm9::MaskEdit2Click(TObject *Sender)
{
    MaskEdit2->SelStart = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm9::FormShow(TObject *Sender)
{
	MaskEdit1->SelStart = 0;
}
//---------------------------------------------------------------------------
