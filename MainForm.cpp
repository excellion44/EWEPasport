//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainForm.h"
#include "Ziteli.h"
#include "AddZitel.h"
#include "Dom.h"
#include "DateUtils.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormShow(TObject *Sender)
{
	ADOQuery1->Active = false;
	 ADOQuery1->SQL->Text = "SELECT * FROM ulica order by ulica";
	ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
    Panel1->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N7Click(TObject *Sender)
{
	Panel1->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
		String ID;
        randomize();   // ��� ���� ����� ���������� ������� ��� ��

        for(int a=15; a>0; a--)
        {
			 ID = ID + IntToStr(random(15));
		}

        ADOQuery1->SQL->Text = "INSERT INTO ulica (ID, GOROD_ILI_POSELOK, ULICA) VALUES ('"+ID+"','"+ComboBox1->Text+"','"+Edit1->Text+"')";
        ADOQuery1->ExecSQL();

		ADOQuery1->Active = false;
		ADOQuery1->SQL->Text = "SELECT * FROM ulica";
		ADOQuery1->Active = true;

		Panel1->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N5Click(TObject *Sender)
{
	Form2->ADOQuery1->Active = false;
	Form2->ADOQuery1->SQL->Text = "SELECT * FROM chelovek ORDER BY FAMILIYA";
	Form2->ADOQuery1->Active = true;
    Form2->Command->Caption="NONE";

	Form2->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N6Click(TObject *Sender)
{
    Form4->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DBGrid1DblClick(TObject *Sender)
{
	Form6->ID_ULICA->Caption = ADOQuery1->FieldByName("ID")->Value;
	Form6->ADOQuery1->Active = false;
	Form6->ADOQuery1->SQL->Text = "SELECT * FROM dom WHERE ID_ULICA = '"+Form6->ID_ULICA->Caption+"'";
	Form6->ADOQuery1->Active = true;
	Form6->ShowModal();

}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button3Click(TObject *Sender)
{
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "SELECT * FROM propiski WHERE TYPE = '���������'";
	ADOQuery1->Active = true;


	while(!ADOQuery1->Eof)  //���������� ������ ���� ��� �� ���������� �� ��� ������� �� �������� ����.
	{

	   if(StrToInt(ADOQuery1->FieldByName("DATA_VYPISKI_UNIX")->Value) <= DateTimeToUnix(Date())) //���� ���� ������� ������ ��� ����� ������� ����
	   {
		   ShowMessage(ADOQuery1->FieldByName("FAMILIYA")->Value); //����� �������� ������ � ���� �� ������ OLD � NO �� YES
	   }

	   ADOQuery1->Next();
	}
}
//---------------------------------------------------------------------------

