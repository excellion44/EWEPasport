//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("MainForm.cpp", Form1);
USEFORM("ObjektsINHome.cpp", Form7);
USEFORM("Ziteli.cpp", Form2);
USEFORM("AddPasport.cpp", Form5);
USEFORM("AddZitel.cpp", Form4);
USEFORM("Chelovek.cpp", Form3);
USEFORM("Dom.cpp", Form6);
USEFORM("Kvartira.cpp", Form8);
USEFORM("Propisat.cpp", Form9);
USEFORM("KvartiraInObjekts.cpp", Form10);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TForm4), &Form4);
		Application->CreateForm(__classid(TForm5), &Form5);
		Application->CreateForm(__classid(TForm6), &Form6);
		Application->CreateForm(__classid(TForm7), &Form7);
		Application->CreateForm(__classid(TForm8), &Form8);
		Application->CreateForm(__classid(TForm9), &Form9);
		Application->CreateForm(__classid(TForm10), &Form10);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
