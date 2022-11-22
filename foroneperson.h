//---------------------------------------------------------------------------

#ifndef foronepersonH
#define foronepersonH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TGameForOnePerson : public TForm
{
__published:	// IDE-managed Components
	TMemo *GameProcess;
	TEdit *TheNumberThatUserEntered;
	TLabel *EnteredYourNumber;
	TButton *MakeAMove;
	TEdit *TheNumberEnteredPc;
	TButton *BackToMenu;
	void __fastcall MakeAMoveClick(TObject *Sender);
	void __fastcall BackToMenuClick(TObject *Sender);
	void __fastcall res(TObject *Sender, TCloseAction &Action);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TGameForOnePerson(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGameForOnePerson *GameForOnePerson;
//---------------------------------------------------------------------------
#endif
