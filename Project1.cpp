//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("ObjektsINHome.cpp", Form7);
USEFORM("MainForm.cpp", Form1);
USEFORM("Ziteli.cpp", Form2);
USEFORM("Propisat.cpp", Form9);
USEFORM("Chelovek.cpp", Form3);
USEFORM("AddZitel.cpp", Form4);
USEFORM("AddPasport.cpp", Form5);
USEFORM("KvartiraInObjekts.cpp", Form10);
USEFORM("Kvartira.cpp", Form8);
USEFORM("Dom.cpp", Form6);
USEFORM("Vypisat.cpp", Form11);
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
		Application->CreateForm(__classid(TForm11), &Form11);
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
