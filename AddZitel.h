//---------------------------------------------------------------------------

#ifndef AddZitelH
#define AddZitelH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TDateTimePicker *GOD;
	TButton *Button1;
	TADOQuery *CHELOVEK;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TComboBox *STATUS;
	TLabel *Label4;
	TComboBox *POL;
	TLabel *Label5;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
