//---------------------------------------------------------------------------

#ifndef VypisatH
#define VypisatH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.WinXPickers.hpp>
#include <Vcl.WinXCalendars.hpp>
//---------------------------------------------------------------------------
class TForm11 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TDateTimePicker *DataVypiski;
	TLabel *Label1;
	TLabel *ID;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm11(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm11 *Form11;
//---------------------------------------------------------------------------
#endif
