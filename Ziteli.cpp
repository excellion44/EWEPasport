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



void __fastcall TForm2::SEARCHClick(TObject *Sender)
{
	ADOQuery1->Active=false;
	ADOQuery1->SQL->Text = "SELECT * FROM chelovek WHERE FAMILIYA like f AND IMYA like i AND OTCHESTVO like o AND GOD_ROZDENIYA like g ORDER BY FAMILIYA";
	ADOQuery1->Parameters->ParamByName("f")->Value="%"+Edit1->Text+"%";
	ADOQuery1->Parameters->ParamByName("i")->Value="%"+Edit2->Text+"%";
	ADOQuery1->Parameters->ParamByName("o")->Value="%"+Edit3->Text+"%";
    ADOQuery1->Parameters->ParamByName("g")->Value="%"+Edit4->Text+"%";
	ADOQuery1->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
	 if(Key == 13)
	 {
		 SEARCH->Click();
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit2KeyPress(TObject *Sender, System::WideChar &Key)
{
	 if(Key == 13)
	 {
		 SEARCH->Click();
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit3KeyPress(TObject *Sender, System::WideChar &Key)
{
	 if(Key == 13)
	 {
		 SEARCH->Click();
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit4KeyPress(TObject *Sender, System::WideChar &Key)
{
	 if(Key == 13)
	 {
		 SEARCH->Click();
	 }
}
//---------------------------------------------------------------------------

