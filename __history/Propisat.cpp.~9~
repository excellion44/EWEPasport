//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Propisat.h"
#include "Ziteli.h"
#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;

String Familiya, Imya, Otchestvo, GodRozdeniya, GdeKvartira, NomerKv, BukvaKv, TypeObj, IDDoma, NomerDoma, BukvaDoma, IDUlica, Ulica, GorP;

//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button1Click(TObject *Sender)
{
	ADOQuery1->Active = false;
	ADOQuery1->SQL->Text = "SELECT * FROM chelovek WHERE ID = '"+IDChelovek->Caption+"'";
	ADOQuery1->Active = true;

	Familiya = ADOQuery1->FieldByName("FAMILIYA")->Value;
	Imya = ADOQuery1->FieldByName("IMYA")->Value;
	Otchestvo  = ADOQuery1->FieldByName("OTCHESTVO")->Value;
	GodRozdeniya  = ADOQuery1->FieldByName("GOD_ROZDENIYA")->Value;

	//ShowMessage(Familiya+" "+Imya+" "+Otchestvo);



//============================== проверяем где квартира в kvartira_in_objeckts или  dom_objeckts  ============================
	try    //Квартива в kvartira_in_objeckts
	{
		ADOQuery1->Active = false;
		ADOQuery1->SQL->Text = "SELECT * FROM kvartira_in_objeckts WHERE ID = '"+IDKvartira->Caption+"'";
		ADOQuery1->Active = true;

		String Result = ADOQuery1->FieldByName("ID")->Value;

		if(Result == IDKvartira->Caption)
		{
			ShowMessage("kvartira_in_objeckts");
			GdeKvartira = "kvartira_in_objeckts";
		}
		else
			ShowMessage("NOTE");
	}
	catch(Exception &e)  //Квартива в dom_objeckts
	{
		ADOQuery1->Active = false;
		ADOQuery1->SQL->Text = "SELECT * FROM dom_objeckts WHERE ID_OBJECKTS = '"+IDKvartira->Caption+"'";
		ADOQuery1->Active = true;

		String Result = ADOQuery1->FieldByName("ID_OBJECKTS")->Value;

		if(Result == IDKvartira->Caption)
		{
			ShowMessage("dom_objeckts");
			GdeKvartira = "dom_objeckts";
		}
		else
			ShowMessage("NOTE");
	}

//============================== КОНЕЦ проверяем где квартира в kvartira_in_objeckts или  dom_objeckts  ============================

	if(GdeKvartira == "dom_objeckts")
	{
		 NomerKv = ADOQuery1->FieldByName("NOMER_OBJECKTS")->Value;
		 BukvaKv = ADOQuery1->FieldByName("BUKVA_OBJECKTS")->Value;
		 TypeObj = ADOQuery1->FieldByName("OBJECKTS")->Value;   // пока не используется
		 IDDoma = ADOQuery1->FieldByName("ID_DOMA")->Value;


			ADOQuery1->Active = false;
			ADOQuery1->SQL->Text = "SELECT * FROM dom WHERE ID = '"+IDDoma+"'";
			ADOQuery1->Active = true;

		 NomerDoma = ADOQuery1->FieldByName("NOMER")->Value;
		 BukvaDoma = ADOQuery1->FieldByName("BUKVA")->Value;
		 IDUlica = ADOQuery1->FieldByName("ID_ULICA")->Value;

			ADOQuery1->Active = false;
			ADOQuery1->SQL->Text = "SELECT * FROM ULICA WHERE ID = '"+IDUlica+"'";
			ADOQuery1->Active = true;

		 Ulica = ADOQuery1->FieldByName("ULICA")->Value;
		 GorP = ADOQuery1->FieldByName("GOROD_ILI_POSELOK")->Value;


         //Промежуточный тест
		 ShowMessage(Familiya+" "+Imya+" "+Otchestvo+" Будет прописан по адресу "+ GorP +" улица "+Ulica+" дом: "+NomerDoma + BukvaDoma+" квартира: " + NomerKv + BukvaKv );
	}
	if(GdeKvartira == "kvartira_in_objeckts")
	{
		 NomerKv = ADOQuery1->FieldByName("KVARTIRA")->Value;
		 BukvaKv = ADOQuery1->FieldByName("BUKVA")->Value;
		 TypeObj = ADOQuery1->FieldByName("TYPE")->Value;   // пока не используется
		 IDDoma = ADOQuery1->FieldByName("ID_DOMA")->Value;


			ADOQuery1->Active = false;
			ADOQuery1->SQL->Text = "SELECT * FROM dom WHERE ID = '"+IDDoma+"'";
			ADOQuery1->Active = true;

		 NomerDoma = ADOQuery1->FieldByName("NOMER")->Value;
		 BukvaDoma = ADOQuery1->FieldByName("BUKVA")->Value;
		 IDUlica = ADOQuery1->FieldByName("ID_ULICA")->Value;

			ADOQuery1->Active = false;
			ADOQuery1->SQL->Text = "SELECT * FROM ULICA WHERE ID = '"+IDUlica+"'";
			ADOQuery1->Active = true;

		 Ulica = ADOQuery1->FieldByName("ULICA")->Value;
		 GorP = ADOQuery1->FieldByName("GOROD_ILI_POSELOK")->Value;


         //Промежуточный тест
		 ShowMessage(Familiya+" "+Imya+" "+Otchestvo+" Будет прописан по адресу "+ GorP +" улица "+Ulica+" дом: "+NomerDoma + BukvaDoma+" квартира: " + NomerKv + BukvaKv );
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm9::MaskEdit1Click(TObject *Sender)
{
	MaskEdit1->SelStart = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm9::MaskEdit2Click(TObject *Sender)
{
    MaskEdit2->SelStart = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm9::FormShow(TObject *Sender)
{
	MaskEdit1->SelStart = 0;
}
//---------------------------------------------------------------------------


