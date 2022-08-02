//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Dom.h"
#include "MainForm.h"
#include "ObjektsINHome.h"
#include "Kvartira.h"
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
        randomize();   // ��� ���� ����� ���������� ������� ��� ��

        for(int a=15; a>0; a--)
        {
			 ID = ID + IntToStr(random(15));
		}

		String TYPE;
		if(RadioButton1->Checked)
			TYPE="���������������";
		else
			TYPE="�������";

		if(RadioButton1->Checked)  //���� ��������������� ���
		{
			ADOQuery1->SQL->Text = "INSERT INTO dom (ID, TYPE, NOMER, BUKVA, ID_ULICA) VALUES ('"+ID+"','"+TYPE+"','"+Edit1->Text+"','"+Edit2->Text+"','"+ID_ULICA->Caption+"')";
			ADOQuery1->ExecSQL();
		}
		else   //����  �������
		{
			try
			{
				ADOQuery1->SQL->Text = "INSERT INTO dom (ID, TYPE, NOMER, BUKVA, ID_ULICA) VALUES ('"+ID+"','"+TYPE+"','"+Edit1->Text+"','"+Edit2->Text+"','"+ID_ULICA->Caption+"')";
				ADOQuery1->ExecSQL();

				ADOQuery1->SQL->Text = "INSERT INTO kvartira_in_objeckts (ID, ID_OBJECKTS, KVARTIRA, BUKVA, TYPE) VALUES ('"+ID+"','"+ID+"','"+Edit1->Text+"','"+Edit2->Text+"','�������')";
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

void __fastcall TForm6::DBGrid1DblClick(TObject *Sender)
{
	String TYPE = ADOQuery1->FieldByName("TYPE")->Value;

	if(TYPE == "���������������")
	{
		 Form7->ID_DOM->Caption = ADOQuery1->FieldByName("ID")->Value;

			Form7->ADOQuery1->Active = false;
			Form7->ADOQuery1->SQL->Text = "SELECT * FROM dom_objeckts WHERE ID_DOMA = '"+Form7->ID_DOM->Caption+"'";
			Form7->ADOQuery1->Active = true;

		 Form7->ShowModal();
	}
	else
	{
		Form8->ID_KVARTIRA->Caption = ADOQuery1->FieldByName("ID")->Value;
		Form8->ADOQuery2->Active = false;
		Form8->ADOQuery2->SQL->Text = "SELECT * FROM propiski WHERE ID_KVARTIRA = '"+Form8->ID_KVARTIRA->Caption+"' AND OLD ='NO'";
		Form8->ADOQuery2->Active = true;
		Form8->ShowModal();
	}

}
//---------------------------------------------------------------------------

