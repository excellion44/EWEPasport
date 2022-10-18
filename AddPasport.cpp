//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AddPasport.h"
#include "MainForm.h"
#include "Chelovek.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
    	String ID;
        randomize();   // Ѕез этой фигни генерирует хреного как то

        for(int a=15; a>0; a--)
        {
			 ID = ID + IntToStr(random(15));
		}

		ADOQuery1->SQL->Text = "INSERT INTO pasport (ID, ID_CHELOVEK, SERIYA, NOMER, KEM, KOGDA, KOD, MESTO, STATUS, VID_DOC) VALUES ('"+ID+"','"+IDChelovek->Caption+"','"+Edit1->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+KOGDA->Date+"','"+Edit4->Text+"','"+Edit5->Text+"','FALSE','"+VID_DOC->Text+"')";
		ADOQuery1->ExecSQL();

		Form3->ADOQuery1->Active = false;
		Form3->ADOQuery1->SQL->Text = "SELECT * FROM pasport WHERE ID_CHELOVEK = '"+IDChelovek->Caption+"' ORDER BY STATUS desc, VID_DOC ASC";
		Form3->ADOQuery1->Active = true;

		Close();
}
//---------------------------------------------------------------------------
