//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Chelovek.h"
#include "MainForm.h"
#include "Ziteli.h"
#include "AddPasport.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;

//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBGrid1DrawColumnCell(TObject *Sender, const TRect &Rect,
          int DataCol, TColumn *Column, TGridDrawState State)
{
				if (ADOQuery1->FieldByName("STATUS")->Value == "TRUE")
				{
						TDBGrid *dbg = (TDBGrid*)Sender;
						dbg->Canvas->Brush->Color = clLime;
						dbg->Canvas->FillRect(Rect);
						dbg->DefaultDrawColumnCell(Rect, DataCol, Column, State);
				}
				else
				{
						TDBGrid *dbg = (TDBGrid*)Sender;
						dbg->Canvas->Brush->Color = clSilver;
						dbg->Canvas->FillRect(Rect);
						dbg->DefaultDrawColumnCell(Rect, DataCol, Column, State);
				}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormShow(TObject *Sender)
{
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "SELECT * FROM chelovek WHERE ID = '"+IDChelovek->Caption+"'";
	ADOQuery1->Active = true;

	   Edit1->Text = ADOQuery1->FieldByName("FAMILIYA")->Value;
	   Edit2->Text = ADOQuery1->FieldByName("IMYA")->Value;
	   Edit3->Text = ADOQuery1->FieldByName("OTCHESTVO")->Value;
	   Edit4->Text = ADOQuery1->FieldByName("GOD_ROZDENIYA")->Value;


	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "SELECT * FROM pasport WHERE ID_CHELOVEK = '"+IDChelovek->Caption+"' ORDER BY STATUS desc";
	ADOQuery1->Active = true;





	ADOQuery2->Active = false;
	ADOQuery2->SQL->Text = "SELECT * FROM propiski WHERE ID_CHELOVEK = '"+IDChelovek->Caption+"' ORDER BY OLD";
	ADOQuery2->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBGrid2DrawColumnCell(TObject *Sender, const TRect &Rect,
          int DataCol, TColumn *Column, TGridDrawState State)
{
				if (ADOQuery2->FieldByName("OLD")->Value == "NO")
				{
						TDBGrid *dbg = (TDBGrid*)Sender;
						dbg->Canvas->Brush->Color = clLime;
						dbg->Canvas->FillRect(Rect);
						dbg->DefaultDrawColumnCell(Rect, DataCol, Column, State);
				}
				else
				{
						TDBGrid *dbg = (TDBGrid*)Sender;
						dbg->Canvas->Brush->Color = clSilver;
						dbg->Canvas->FillRect(Rect);
						dbg->DefaultDrawColumnCell(Rect, DataCol, Column, State);
				}
}
//---------------------------------------------------------------------------


void __fastcall TForm3::N1Click(TObject *Sender)
{
	Form5->IDChelovek->Caption = IDChelovek->Caption;
    Form5->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::N2Click(TObject *Sender)
{
		String ID = ADOQuery1->FieldByName("ID")->Value;

		ADOQuery1->SQL->Text = "UPDATE pasport SET STATUS = 'FALSE' WHERE ID_CHELOVEK = '"+IDChelovek->Caption+"' AND STATUS = 'TRUE'";
		ADOQuery1->ExecSQL();

		ADOQuery1->SQL->Text = "UPDATE pasport SET STATUS = 'TRUE' WHERE ID = '"+ID+"'";
		ADOQuery1->ExecSQL();

		ADOQuery1->Active = false;
		ADOQuery1->SQL->Text = "SELECT * FROM pasport WHERE ID_CHELOVEK = '"+IDChelovek->Caption+"' ORDER BY STATUS desc";
		ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

