//---------------------------------------------------------------------------

#ifndef ObjektsINHomeH
#define ObjektsINHomeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TPanel *Panel1;
	TLabel *ID_DOM;
	TPopupMenu *PopupMenu1;
	TMenuItem *N1;
	TPanel *Panel2;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TLabel *Label1;
	TButton *Button1;
	TButton *Button2;
	TEdit *Edit1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *Edit2;
	void __fastcall DBGrid1DblClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall N1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm7(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
