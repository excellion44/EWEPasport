//---------------------------------------------------------------------------

#ifndef AddPasportH
#define AddPasportH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TADOQuery *ADOQuery1;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TDateTimePicker *KOGDA;
	TLabel *Label4;
	TLabel *Label5;
	TEdit *Edit5;
	TLabel *Label6;
	TButton *Button1;
	TLabel *IDChelovek;
	TComboBox *VID_DOC;
	TLabel *Label7;
	TComboBox *ComboBox1;
	TLabel *Label8;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
