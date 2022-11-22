//---------------------------------------------------------------------------

#ifndef pravilaH
#define pravilaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm8 : public TForm
{
__published:	// IDE-managed Components
	TMemo *Memo1;
	TImage *Image1;
	TButton *BackToMenu;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall BackToMenuClick(TObject *Sender);
	void __fastcall res(TObject *Sender, bool &CanClose);
private:	// User declarations
public:		// User declarations
	__fastcall TForm8(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm8 *Form8;
//---------------------------------------------------------------------------
#endif
