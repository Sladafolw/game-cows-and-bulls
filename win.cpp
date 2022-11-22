// ---------------------------------------------------------------------------

/* #include <vcl.h> */
#include "foroneperson.h"
#include "igrafortwoperson.h"
#include "menu.h"
#include "Gamevscomputer.h"
#pragma hdrstop
#include <Unit2.h>
#include "win.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TWinn *Winn;

// ---------------------------------------------------------------------------
__fastcall TWinn::TWinn(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TWinn::BackToMenuClick(TObject *Sender) {
	Winn->Hide();
	Form3->Show();
}
// ---------------------------------------------------------------------------

void __fastcall TWinn::res(TObject *Sender, bool &CanClose) {
	Form3->Close();
}
// ---------------------------------------------------------------------------
