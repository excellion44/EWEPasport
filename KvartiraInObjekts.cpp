//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "KvartiraInObjekts.h"
#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm10 *Form10;
//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm10::FormShow(TObject *Sender)
{
		ADOQuery1->Active = false;
		ADOQuery1->SQL->Text = "SELECT * FROM kvartira_in_objeckts WHERE ID_OBJECKTS = '"+IDObjekts->Caption+"'";
		ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm10::N1Click(TObject *Sender)
{
    Panel1->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Button1Click(TObject *Sender)
{
		String ID, TypeObj;
        randomize();   // Без этой фигни генерирует хреного как то

        for(int a=15; a>0; a--)
        {
			 ID = ID + IntToStr(random(15));
		}

		if(TYPEOBJ->Caption == "Корпус")
			TypeObj = "Квартира в корпусе";
		if(TYPEOBJ->Caption == "Строение")
			TypeObj = "Квартира в строении";



		ADOQuery1->SQL->Text = "INSERT INTO kvartira_in_objeckts (ID, ID_OBJECKTS, KVARTIRA, BUKVA, TYPE) VALUES ('"+ID+"','"+IDObjekts->Caption+"','"+Edit1->Text+"','"+Edit2->Text+"','"+TypeObj+"')";
		ADOQuery1->ExecSQL();

		ADOQuery1->Active = false;
		ADOQuery1->SQL->Text = "SELECT * FROM kvartira_in_objeckts WHERE ID_OBJECKTS ='"+IDObjekts->Caption+"' ORDER BY KVARTIRA";
		ADOQuery1->Active = true;

		Panel1->Visible = false;
}
//---------------------------------------------------------------------------
