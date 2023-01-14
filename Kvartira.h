//---------------------------------------------------------------------------

#ifndef KvartiraH
#define KvartiraH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm8 : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TDBGrid *DBGrid2;
	TLabel *ID_KVARTIRA;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TADOQuery *ADOQuery2;
	TDataSource *DataSource2;
	TPopupMenu *PopupMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	void __fastcall DBGrid2DblClick(TObject *Sender);
	void __fastcall N1Click(TObject *Sender);
	void __fastcall DBGrid2DrawColumnCell(TObject *Sender, const TRect &Rect, int DataCol,
          TColumn *Column, TGridDrawState State);
	void __fastcall N2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm8(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm8 *Form8;
//---------------------------------------------------------------------------
#endif
