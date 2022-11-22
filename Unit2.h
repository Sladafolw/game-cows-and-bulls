//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TGameForTwoPersonThisFormToUser2 : public TForm
{
__published:	// IDE-managed Components
	TEdit *NumberThatUserEntered;
	TButton *ThatNumberUser2;
	TEdit *ThatNumberUser;
	TMemo *DetailsGame;
	TEdit *ThatNumberWhichUser1;
	TButton *User2MakeMove;
	TLabel *User2;
	TButton *SwithToUser1;
	TButton *Surrend;
	TMemo *UserEnteredNumberNotCorrectly;
	void __fastcall ThatNumberUser2Click(TObject *Sender);
	void __fastcall SwithToUser1Click(TObject *Sender);
	void __fastcall User2MakeMoveClick(TObject *Sender);
	void __fastcall SurrendClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall res(TObject *Sender, bool &CanClose);

private:	// User declarations
public:		// User declarations
	__fastcall TGameForTwoPersonThisFormToUser2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGameForTwoPersonThisFormToUser2 *GameForTwoPersonThisFormToUser2;
//---------------------------------------------------------------------------
#endif
