//---------------------------------------------------------------------------

#ifndef winH
#define winH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TWinn : public TForm
{
__published:	// IDE-managed Components
	TLabel *YouWin;
	TButton *BackToMenu;
	TLabel *NumberIs;
	TLabel *Number;
	void __fastcall BackToMenuClick(TObject *Sender);
	void __fastcall res(TObject *Sender, bool &CanClose);
private:	// User declarations
public:		// User declarations
	__fastcall TWinn(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TWinn *Winn;
//---------------------------------------------------------------------------
#endif
