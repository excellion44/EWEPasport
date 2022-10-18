//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AddZitel.h"
#include "MainForm.h"
#include "DateUtils.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
	   //Генерируем ID
        randomize();   // Без этой фигни генерирует хреного как то
         String ID;
        for(int a=15; a>0; a--)
        {
             ID = ID + IntToStr(random(10));
        }


        String data_rozdeniya = GOD->Date; //для даты без времени
		//ShowMessage(data_rozdeniya);
		int DATA_R_UNIX = StrToInt(DateTimeToUnix(data_rozdeniya.SubString(0,10)));



		CHELOVEK->SQL->Text = "INSERT INTO chelovek (ID, FAMILIYA, IMYA, OTCHESTVO, GOD_ROZDENIYA, GOD_ROZDENIYA_UNIX, STATUS, POL) VALUES ('"+ID+"','"+Edit1->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+data_rozdeniya.SubString(0,10)+"',"+DATA_R_UNIX+",'"+STATUS->Text+"','"+POL->Text+"')";
		CHELOVEK->ExecSQL();

		Edit1->Text = "";
		Edit2->Text = "";
		Edit3->Text = "";
		Form4->Close();


}
//---------------------------------------------------------------------------
