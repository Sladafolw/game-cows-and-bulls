//---------------------------------------------------------------------------

#ifndef GamevscomputerH
#define GamevscomputerH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TGameVsComputers : public TForm
{
__published:	// IDE-managed Components
	TButton *Surrend;
	TMemo *GameProcessPc;
	TLabel *ComputerMakeMove;
	TEdit *TheNumberThatUserEntered;
	TButton *UserMakeMove;
	TMemo *GameProcessUser;
	TLabel *EnteredYourNumber;
	TEdit *ThatNumberTheUser;
	TButton *UserMakeNumber;
	TMemo *NumberIsEnteredNotCorrectly;
	TEdit *EnteredPc;
	TEdit *NumberPC;
	void __fastcall SurrendClick(TObject *Sender);
	void __fastcall UserMakeNumberClick(TObject *Sender);
	void __fastcall UserMakeMoveClick(TObject *Sender);
	void __fastcall res(TObject *Sender, bool &CanClose);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TGameVsComputers(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGameVsComputers *GameVsComputers;
//---------------------------------------------------------------------------
#endif
