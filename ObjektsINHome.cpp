//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ObjektsINHome.h"
#include "MainForm.h"
#include "Kvartira.h"
#include "KvartiraInObjekts.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm7::DBGrid1DblClick(TObject *Sender)
{

	if(ADOQuery1->FieldByName("OBJECKTS")->Value == "????????")
	{
		Form8->ID_KVARTIRA->Caption = ADOQuery1->FieldByName("ID_OBJECKTS")->Value;
		Form8->ADOQuery2->Active = false;
		Form8->ADOQuery2->SQL->Text = "SELECT * FROM propiski WHERE ID_KVARTIRA = '"+Form8->ID_KVARTIRA->Caption+"' AND OLD ='NO'";
		Form8->ADOQuery2->Active = true;
		Form8->ShowModal();
	}
	else
	{
		Form10->IDObjekts->Caption = ADOQuery1->FieldByName("ID_OBJECKTS")->Value;
		Form10->TYPEOBJ->Caption = ADOQuery1->FieldByName("OBJECKTS")->Value;
		Form10->ShowModal();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button2Click(TObject *Sender)
{
	Panel2->Visible = false;
	Edit1->Clear();
    Edit2->Clear();
}
//---------------------------------------------------------------------------


void __fastcall TForm7::Button1Click(TObject *Sender)
{
		String ID, OBJ;
        randomize();   // ??? ???? ????? ?????????? ??????? ??? ??

        for(int a=15; a>0; a--)
        {
			 ID = ID + IntToStr(random(15));
		}

		if(RadioButton1->Checked)
			OBJ = "????????";
		else if(RadioButton2->Checked)
			OBJ = "????????";
		else if(RadioButton3->Checked)
			OBJ = "??????";


		ADOQuery1->SQL->Text = "INSERT INTO dom_objeckts (ID_OBJECKTS, ID_DOMA, OBJECKTS, NOMER_OBJECKTS, BUKVA_OBJECKTS) VALUES ('"+ID+"','"+ID_DOM->Caption+"','"+OBJ+"','"+Edit1->Text+"','"+Edit2->Text+"')";
		ADOQuery1->ExecSQL();

		ADOQuery1->Active = false;
		ADOQuery1->SQL->Text = "SELECT * FROM dom_objeckts WHERE ID_DOMA ='"+ID_DOM->Caption+"' ORDER BY NOMER_OBJECKTS";
		ADOQuery1->Active = true;

		Panel2->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::N1Click(TObject *Sender)
{
	Panel2->Visible = true;
}
//---------------------------------------------------------------------------

