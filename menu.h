//---------------------------------------------------------------------------

#ifndef menuH
#define menuH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TButton *ForOnePerson;
	TButton *CloseThisGame;
	TButton *GameWithComputers;
	TImage *Image1;
	TButton *Rules;
	TButton *GameUserWithUser;
	void __fastcall ForOnePersonClick(TObject *Sender);
	void __fastcall CloseThisGameClick(TObject *Sender);
	void __fastcall GameUserWithUserClick(TObject *Sender);
	void __fastcall GameWithComputersClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall RulesClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
