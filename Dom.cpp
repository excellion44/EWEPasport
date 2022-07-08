//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Dom.h"
#include "MainForm.h"
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
void __fastcall TForm6::N1Click(TObject *Sender)
{
	AddHomePanel->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button1Click(TObject *Sender)
{
    String ID;
        randomize();   // Без этой фигни генерирует хреного как то

        for(int a=15; a>0; a--)
        {
			 ID = ID + IntToStr(random(15));
		}

		String TYPE;
		if(RadioButton1->Checked)
			TYPE="Многоквартирный";
		else
			TYPE="Частный";

		if(RadioButton1->Checked)  //если многоквартирный дом
		{
			ADOQuery1->SQL->Text = "INSERT INTO dom (ID, TYPE, NOMER, BUKVA, ID_ULICA) VALUES ('"+ID+"','"+TYPE+"','"+Edit1->Text+"','"+Edit2->Text+"','"+ID_ULICA->Caption+"')";
			ADOQuery1->ExecSQL();
		}
		else   //если  частный
		{
			try
			{
				ADOQuery1->SQL->Text = "INSERT INTO dom (ID, TYPE, NOMER, BUKVA, ID_ULICA) VALUES ('"+ID+"','"+TYPE+"','"+Edit1->Text+"','"+Edit2->Text+"','"+ID_ULICA->Caption+"')";
				ADOQuery1->ExecSQL();

				ADOQuery1->SQL->Text = "INSERT INTO kvartira_in_objeckts (ID, ID_OBJECKTS, KVARTIRA, BUKVA, TYPE) VALUES ('"+ID+"','"+ID+"','"+Edit1->Text+"','"+Edit2->Text+"','Частный')";
				ADOQuery1->ExecSQL();
			}
			catch(Exception &e)
			{
				 ShowMessage(e.Message);
			}
		}


		ADOQuery1->Active = false;
		ADOQuery1->SQL->Text = "SELECT * FROM dom WHERE ID_ULICA = '"+ID_ULICA->Caption+"'";
		ADOQuery1->Active = true;

        AddHomePanel->Visible = false;

}
//---------------------------------------------------------------------------

