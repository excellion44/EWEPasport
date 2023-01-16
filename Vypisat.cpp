//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Vypisat.h"
#include "Kvartira.h"
#include "DateUtils.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm11 *Form11;
//---------------------------------------------------------------------------
__fastcall TForm11::TForm11(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm11::Button2Click(TObject *Sender)
{
	Form11->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm11::Button1Click(TObject *Sender)
{

	String Message = "¬ы действительно хотите выписать датой: "+DateToStr(DataVypiski->Date);
	if (MessageDlg(Message, mtConfirmation, TMsgDlgButtons() << mbYes << mbNo,0) == mrYes)
	{

		 Form8->ADOQuery2->SQL->Text = "UPDATE propiski SET OLD = 'YES', DATA_VYPISKI ='"+DateToStr(DataVypiski->Date)+"', DATA_VYPISKI_UNIX ="+DateTimeToUnix(DataVypiski->Date)+" WHERE ID IN ("+StrToInt(ID->Caption)+")";
		 Form8->ADOQuery2->ExecSQL();

		 Form8->ADOQuery2->Active = false;
		Form8->ADOQuery2->SQL->Text = "SELECT * FROM propiski WHERE ID_KVARTIRA = '"+Form8->ID_KVARTIRA->Caption+"' AND OLD ='NO'";
		Form8->ADOQuery2->Active = true;

		Close();

	}
}
//---------------------------------------------------------------------------

