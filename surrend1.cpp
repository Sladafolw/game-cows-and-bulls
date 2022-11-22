// ---------------------------------------------------------------------------

/* #include <vcl.h> */
#pragma hdrstop
#include "menu.h"
#include "Unit2.h"
#include "surrend1.h"
#include "foroneperson.h"
#include "Gamevscomputer.h"
#include "igrafortwoperson.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;

// ---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner) : TForm(Owner) {
}
// ---------------------------------------------------------------------------

void __fastcall TForm7::BackToMenuClick(TObject *Sender) {
	Form7->Hide();
	GameForTwoPersonThisFormToUser2->Hide();
	Form3->Show();

}
// ---------------------------------------------------------------------------

void __fastcall TForm7::res(TObject *Sender, bool &CanClose) {
	Form3->Close();
}
// ---------------------------------------------------------------------------


