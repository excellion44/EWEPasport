//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Propisat.h"
#include "Ziteli.h"
#include "MainForm.h"
#include "Kvartira.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include "DateUtils.hpp"
TForm9 *Form9;

String Familiya, Imya, Otchestvo, GodRozdeniya, GdeKvartira,
NomerKv, BukvaKv, TypeObj, Type, IDDoma, IDObj, NomerDoma, BukvaDoma, NomerObj, BukvaObj, IDUlica, Ulica, GorP,
DATA_VYPISKI, DATA_VYPISKI_UNIX, OLD, ADRES;

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



//============================== ��������� ��� �������� � kvartira_in_objeckts ���  dom_objeckts  ============================
	try    //�������� � kvartira_in_objeckts
	{
		ADOQuery1->Active = false;
		ADOQuery1->SQL->Text = "SELECT * FROM kvartira_in_objeckts WHERE ID = '"+IDKvartira->Caption+"'";
		ADOQuery1->Active = true;

		String Result = ADOQuery1->FieldByName("ID")->Value;

		if(Result == IDKvartira->Caption)
		{
			//ShowMessage("kvartira_in_objeckts");
			GdeKvartira = "kvartira_in_objeckts";
		}
		else
			ShowMessage("NOTE");
	}
	catch(Exception &e)  //�������� � dom_objeckts
	{
		ADOQuery1->Active = false;
		ADOQuery1->SQL->Text = "SELECT * FROM dom_objeckts WHERE ID_OBJECKTS = '"+IDKvartira->Caption+"'";
		ADOQuery1->Active = true;

		String Result = ADOQuery1->FieldByName("ID_OBJECKTS")->Value;

		if(Result == IDKvartira->Caption)
		{
			//ShowMessage("dom_objeckts");
			GdeKvartira = "dom_objeckts";
		}
		else
			ShowMessage("NOTE");
	}

//============================== ����� ��������� ��� �������� � kvartira_in_objeckts ���  dom_objeckts  ============================


//============================== ���� �������� �  dom_objeckts  ============================
	if(GdeKvartira == "dom_objeckts")
	{
		 NomerKv = ADOQuery1->FieldByName("NOMER_OBJECKTS")->Value;
		 BukvaKv = ADOQuery1->FieldByName("BUKVA_OBJECKTS")->Value;
		 TypeObj = ADOQuery1->FieldByName("OBJECKTS")->Value;   // ���� �� ������������
		 IDDoma = ADOQuery1->FieldByName("ID_DOMA")->Value;

		 //ShowMessage("1");


			ADOQuery1->Active = false;
			ADOQuery1->SQL->Text = "SELECT * FROM dom WHERE ID = '"+IDDoma+"'";
			ADOQuery1->Active = true;

		   //	ShowMessage("2");

		 NomerDoma = ADOQuery1->FieldByName("NOMER")->Value;
		 //BukvaDoma = ADOQuery1->FieldByName("BUKVA")->Value;
		 IDUlica = ADOQuery1->FieldByName("ID_ULICA")->Value;
		 //ShowMessage("3");

			ADOQuery1->Active = false;
			ADOQuery1->SQL->Text = "SELECT * FROM ULICA WHERE ID = '"+IDUlica+"'";
			ADOQuery1->Active = true;

			//ShowMessage("4");

		 Ulica = ADOQuery1->FieldByName("ULICA")->Value;
		 GorP = ADOQuery1->FieldByName("GOROD_ILI_POSELOK")->Value;

		 //ShowMessage("5");

         		//----------------------------------�������� - ������� � ����  [����]---------------------------------------



		 if(CheckBox1->Checked == true)   //���� ����� ������� �� ��������� �����
		  {
				ADOQuery1->Active = false;
				ADOQuery1->SQL->Text = "SELECT * FROM propiski WHERE ID_CHELOVEK = '"+IDChelovek->Caption+"' AND OLD = 'NO'";  //���� �������� � ������� ������� ��� ��� �� ������
				ADOQuery1->Active = true;


				try
				{
						//OLD =  SearchChel->FieldByName("OLD")->Value;
				}
				catch(Exception &e)
				{
				}


				 if(ADOQuery1->FieldByName("OLD")->Value == "NO")
				 {
						ShowMessage("����� �������� �������� �� ������� ������");
						return;
				 }
				DATA_VYPISKI = "�� �/�";
				DATA_VYPISKI_UNIX = 0;
				OLD = "NO";
		  }
          else
          {
				DATA_VYPISKI = DataVypiski->Text;
				DATA_VYPISKI_UNIX = DateTimeToUnix(DataVypiski->Text);

				if(VidReg->Text == "����������")
				{
					OLD = "YES";
				}
				if(VidReg->Text == "���������")
				{
					OLD = "NO";
				}
		  }

		  int DATA_PROPISKI =  DateTimeToUnix(StrToDate(DataPropiski->Text));

		  ADRES = GorP +" ����� "+Ulica+" ���: "+NomerDoma + BukvaDoma+" ��������: " + NomerKv + BukvaKv;

		  ADOQuery1->SQL->Text = "INSERT INTO propiski (FAMILIYA, IMYA, OTCHESTVO, GOD_ROZDENIYA, ID_CHELOVEK, ID_KVARTIRA, DATA_PROPISKI, DATA_VYPISKI, OLD, ADRES, TYPE, DATA_PROPISKI_UNIX, DATA_VYPISKI_UNIX) VALUES ('"+Familiya+"','"+Imya+"','"+Otchestvo+"','"+GodRozdeniya+"','"+IDChelovek->Caption+"','"+IDKvartira->Caption+"','"+DataPropiski->Text+"','"+DATA_VYPISKI+"','"+OLD+"','"+ADRES+"','"+VidReg->Text+"',"+DATA_PROPISKI+","+StrToInt(DATA_VYPISKI_UNIX)+")";
		  ADOQuery1->ExecSQL();

		 //������������� ����
		// ShowMessage(OLD+Familiya+" "+Imya+" "+Otchestvo+" ����� �������� �� ������ "+ GorP +" ����� "+Ulica+" ���: "+NomerDoma + BukvaDoma+" ��������: " + NomerKv + BukvaKv );
		//----------------------------------�������� - ������� � ���� ����� [����]---------------------------------------
	}

	//============================== ���� �������� �  kvartira_in_objeckts  ============================
	if(GdeKvartira == "kvartira_in_objeckts")
	{
		 NomerKv = ADOQuery1->FieldByName("KVARTIRA")->Value;
		 BukvaKv = ADOQuery1->FieldByName("BUKVA")->Value;
		 IDObj =   ADOQuery1->FieldByName("ID_OBJECKTS")->Value;
		 Type = ADOQuery1->FieldByName("TYPE")->Value;

		 if(Type != "�������")  //���� ��������������� ���
		 {
				ADOQuery1->Active = false;
				ADOQuery1->SQL->Text = "SELECT * FROM dom_objeckts WHERE ID_OBJECKTS = '"+IDObj+"'";
				ADOQuery1->Active = true;

					NomerObj = ADOQuery1->FieldByName("NOMER_OBJECKTS")->Value;
					BukvaObj = ADOQuery1->FieldByName("BUKVA_OBJECKTS")->Value;
					IDDoma = ADOQuery1->FieldByName("ID_DOMA")->Value;
					TypeObj = ADOQuery1->FieldByName("OBJECKTS")->Value;


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


				//----------------------------------�������� - ������� � ����  [����]---------------------------------------



		 if(CheckBox1->Checked == true)   //���� ����� ������� �� ��������� �����
		  {
				ADOQuery1->Active = false;
				ADOQuery1->SQL->Text = "SELECT * FROM propiski WHERE ID_CHELOVEK = '"+IDChelovek->Caption+"' AND OLD = 'NO'";  //���� �������� � ������� ������� ��� ��� �� ������
				ADOQuery1->Active = true;


				try
				{
						//OLD =  SearchChel->FieldByName("OLD")->Value;
				}
				catch(Exception &e)
				{
				}


				 if(ADOQuery1->FieldByName("OLD")->Value == "NO")
				 {
						ShowMessage("����� �������� �������� �� ������� ������");
						return;
				 }
				DATA_VYPISKI = "�� �/�";
				DATA_VYPISKI_UNIX = 0;
				OLD = "NO";
		  }
		  else
		  {
				DATA_VYPISKI = DataVypiski->Text;
				DATA_VYPISKI_UNIX = DateTimeToUnix(DataVypiski->Text);
				if(VidReg->Text == "����������")
				{
					OLD = "YES";
				}
				if(VidReg->Text == "���������")
				{
					OLD = "NO";
				}
		  }

		   int DATA_PROPISKI =  DateTimeToUnix(StrToDate(DataPropiski->Text));


		  ADRES = GorP +" ����� "+Ulica+" ���: "+NomerDoma + BukvaDoma+" "+TypeObj+" "+NomerObj+" ��������: " + NomerKv + BukvaKv;

		  ADOQuery1->SQL->Text = "INSERT INTO propiski (FAMILIYA, IMYA, OTCHESTVO, GOD_ROZDENIYA, ID_CHELOVEK, ID_KVARTIRA, DATA_PROPISKI, DATA_VYPISKI, OLD, ADRES, TYPE, DATA_PROPISKI_UNIX, DATA_VYPISKI_UNIX) VALUES ('"+Familiya+"','"+Imya+"','"+Otchestvo+"','"+GodRozdeniya+"','"+IDChelovek->Caption+"','"+IDKvartira->Caption+"','"+DataPropiski->Text+"','"+DATA_VYPISKI+"','"+OLD+"','"+ADRES+"','"+VidReg->Text+"',"+DATA_PROPISKI+","+StrToInt(DATA_VYPISKI_UNIX)+")";
		  ADOQuery1->ExecSQL();
			//ShowMessage(OLD+Familiya+" "+Imya+" "+Otchestvo+" ����� �������� �� ������ "+ GorP +" ����� "+Ulica+" ���: "+NomerDoma + BukvaDoma+" "+TypeObj+" "+NomerObj+" ��������: " + NomerKv + BukvaKv );
		  //ADOQuery1->SQL->Text = "INSERT INTO propiski (FAMILIYA, IMYA, OTCHESTVO, GOD_ROZDENIYA, ID_CHELOVEK, ID_KVARTIRA, DATA_PROPISKI, DATA_VYPISKI, OLD, ADRES, TYPE, DATA_PROPISKI_UNIX, DATA_VYPISKI_UNIX) VALUES ('"+Familiya+"','"+Imya+"','"+Otchestvo+"','"+GodRozdeniya+"','"+IDChelovek->Caption+"','"+IDKvartira->Caption+"','"+DataPropiski->Text+"','"+DATA_VYPISKI+"','"+OLD+"','"+ADRES+"','"+OLD+"',"+DATA_PROPISKI+","+StrToInt(DATA_VYPISKI_UNIX)+")";
		  //ADOQuery1->ExecSQL();


		 //----------------------------------�������� - ������� � ���� ����� [����]---------------------------------------


		}
		else if(Type == "�������")
		{
				ADOQuery1->Active = false;
				ADOQuery1->SQL->Text = "SELECT * FROM dom WHERE ID = '"+IDObj+"'";
				ADOQuery1->Active = true;

					NomerDoma = ADOQuery1->FieldByName("NOMER")->Value;
					BukvaDoma = ADOQuery1->FieldByName("BUKVA")->Value;
					IDUlica = ADOQuery1->FieldByName("ID_ULICA")->Value;

				ADOQuery1->Active = false;
				ADOQuery1->SQL->Text = "SELECT * FROM ULICA WHERE ID = '"+IDUlica+"'";
				ADOQuery1->Active = true;

					Ulica = ADOQuery1->FieldByName("ULICA")->Value;
					GorP = ADOQuery1->FieldByName("GOROD_ILI_POSELOK")->Value;




		  if(CheckBox1->Checked == true)   //���� ����� ������� �� ��������� �����
		  {
				ADOQuery1->Active = false;
				ADOQuery1->SQL->Text = "SELECT * FROM propiski WHERE ID_CHELOVEK = '"+IDChelovek->Caption+"' AND OLD = 'NO'";  //���� �������� � ������� ������� ��� ��� �� ������
				ADOQuery1->Active = true;


				try
				{
						//OLD =  SearchChel->FieldByName("OLD")->Value;
				}
				catch(Exception &e)
				{
				}


				 if(ADOQuery1->FieldByName("OLD")->Value == "NO")
				 {
						ShowMessage("����� �������� �������� �� ������� ������");
						return;
				 }
				DATA_VYPISKI = "�� �/�";
				DATA_VYPISKI_UNIX = 0;
				OLD = "NO";
		  }
		  else
		  {
				DATA_VYPISKI = DataVypiski->Text;
				DATA_VYPISKI_UNIX = DateTimeToUnix(DataVypiski->Text);
				if(VidReg->Text == "����������")
				{
					OLD = "YES";
				}
				if(VidReg->Text == "���������")
				{
					OLD = "NO";
				}
		  }

		   int DATA_PROPISKI =  DateTimeToUnix(StrToDate(DataPropiski->Text));


		  ADRES = GorP +" ����� "+Ulica+" ���: "+NomerDoma + BukvaDoma;

		  ADOQuery1->SQL->Text = "INSERT INTO propiski (FAMILIYA, IMYA, OTCHESTVO, GOD_ROZDENIYA, ID_CHELOVEK, ID_KVARTIRA, DATA_PROPISKI, DATA_VYPISKI, OLD, ADRES, TYPE, DATA_PROPISKI_UNIX, DATA_VYPISKI_UNIX) VALUES ('"+Familiya+"','"+Imya+"','"+Otchestvo+"','"+GodRozdeniya+"','"+IDChelovek->Caption+"','"+IDKvartira->Caption+"','"+DataPropiski->Text+"','"+DATA_VYPISKI+"','"+OLD+"','"+ADRES+"','"+VidReg->Text+"',"+DATA_PROPISKI+","+StrToInt(DATA_VYPISKI_UNIX)+")";
		  ADOQuery1->ExecSQL();
			//������������� ����
		 //ShowMessage(Familiya+" "+Imya+" "+Otchestvo+" ����� �������� �� ������ "+ GorP +" ����� "+Ulica+" ���: "+NomerDoma + BukvaDoma);
		}
	}


	Form2->Close();
	Form8->ADOQuery2->Active = false;
	Form8->ADOQuery2->SQL->Text = "SELECT * FROM propiski WHERE ID_KVARTIRA = '"+Form8->ID_KVARTIRA->Caption+"'";
	Form8->ADOQuery2->Active = true;
	Form9->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm9::DataPropiskiClick(TObject *Sender)
{
	DataPropiski->SelStart = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm9::DataVypiskiClick(TObject *Sender)
{
	DataVypiski->SelStart = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm9::FormShow(TObject *Sender)
{
	DataPropiski->SelStart = 0;
}
//---------------------------------------------------------------------------



void __fastcall TForm9::VidRegChange(TObject *Sender)
{
	if(VidReg->Text == "����������")
	{
		CheckBox1->Checked = true;
	}
	if(VidReg->Text == "���������")
	{
		CheckBox1->Checked = false;
	}
}
//---------------------------------------------------------------------------


