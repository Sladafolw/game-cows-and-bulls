//---------------------------------------------------------------------------

#ifndef igrafortwopersonH
#define igrafortwopersonH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TGameForTwoUserThisFormForUser1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *NumberThatUserEntered;
	TButton *User1MakeNumber;
	TMemo *DetailsGame;
	TButton *User1MakeMove;
	TEdit *NumberThatUser2Entered;
	TLabel *User1;
	TButton *SwithToAnotherUser;
	TButton *Surrend;
	TMemo *UserEnteredNumberNotCorrectly;
	TEdit *ThatNumberUser1;
	void __fastcall User1MakeNumberClick(TObject *Sender);
	void __fastcall User1MakeMoveClick(TObject *Sender);
	void __fastcall SwithToAnotherUserClick(TObject *Sender);
	void __fastcall SurrendClick(TObject *Sender);
	void __fastcall re(TObject *Sender, bool &CanClose);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TGameForTwoUserThisFormForUser1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGameForTwoUserThisFormForUser1 *GameForTwoUserThisFormForUser1;
//---------------------------------------------------------------------------
#endif
