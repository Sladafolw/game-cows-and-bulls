// ---------------------------------------------------------------------------

/* #include <vcl.h>
 #include <cstdlib>
 #include <string.h>
 #include <string>
 #include <conio.h>
 #include <cstring>
 #include <iostream>
 #include <iomanip>
 #include <fstream>
 #include <stdio.h>
 #include<sstream>
 #include <iostream>
 #include<string> */
#include <jpeg.hpp>

#pragma hdrstop
#include "foroneperson.h"
#include "igrafortwoperson.h"
#include "pravila.h"
#include "win.h"
#include "Gamevscomputer.h"
#include "Unit2.h"
#include "GameCore.h"
#include "menu.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;

// ---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm3::ForOnePersonClick(TObject *Sender) {
	int digit;
	while (true) {
		digit = rand() % 9999 + 1000;
		if (IsNumberValid(digit)) {
			GameForOnePerson->TheNumberEnteredPc->Text = digit;
			Winn->Number->Caption = digit;
			Form3->Hide();
			GameForOnePerson->Show();
			GameForOnePerson->TheNumberEnteredPc->Hide();
			GameForOnePerson->TheNumberThatUserEntered->Clear();
			GameForOnePerson->GameProcess->Clear();
			break;

		}
	}
}

void __fastcall TForm3::CloseThisGameClick(TObject *Sender) {
	Form3->Close();
}
// ---------------------------------------------------------------------------

void __fastcall TForm3::GameUserWithUserClick(TObject *Sender) {
	GameForTwoUserThisFormForUser1->ThatNumberUser1->Show();
	GameForTwoUserThisFormForUser1->User1MakeNumber->Show();

	Form3->Hide();
	GameForTwoUserThisFormForUser1->Show();
	GameForTwoPersonThisFormToUser2->ThatNumberUser->Show();
	GameForTwoPersonThisFormToUser2->ThatNumberUser2->Show();
	GameForTwoPersonThisFormToUser2->ThatNumberWhichUser1->Hide();
	GameForTwoPersonThisFormToUser2->DetailsGame->Hide();
	GameForTwoPersonThisFormToUser2->User2MakeMove->Hide();
	GameForTwoPersonThisFormToUser2->SwithToUser1->Hide();

	GameForTwoPersonThisFormToUser2->NumberThatUserEntered->Hide();
	GameForTwoUserThisFormForUser1->NumberThatUser2Entered->Hide();
	GameForTwoUserThisFormForUser1->DetailsGame->Hide();
	GameForTwoUserThisFormForUser1->NumberThatUserEntered->Hide();
	GameForTwoUserThisFormForUser1->User1MakeMove->Hide();
	GameForTwoUserThisFormForUser1->SwithToAnotherUser->Hide();
	GameForTwoUserThisFormForUser1->ThatNumberUser1->Show();
	// GameUserWithUser->Show();
	GameForTwoUserThisFormForUser1->DetailsGame->Clear();
	GameForTwoPersonThisFormToUser2->DetailsGame->Clear();

	GameForTwoPersonThisFormToUser2->ThatNumberWhichUser1->Hide();

}
// ---------------------------------------------------------------------------

void __fastcall TForm3::GameWithComputersClick(TObject *Sender) { {
		while (true) {
			int digit = rand() % 9999 + 1000;
			GameVsComputers->EnteredPc->Text = IntToStr(digit);

			if (IsNumberValid(GameVsComputers->EnteredPc->Text))

			{
				Form3->Hide();
				GameVsComputers->Show();
				GameVsComputers->ComputerMakeMove->Hide();
				GameVsComputers->EnteredYourNumber->Hide();
				GameVsComputers->GameProcessPc->Hide();
				GameVsComputers->GameProcessUser->Hide();
				GameVsComputers->TheNumberThatUserEntered->Hide();

				GameVsComputers->UserMakeMove->Hide();
				GameVsComputers->NumberIsEnteredNotCorrectly->Hide();
				GameVsComputers->UserMakeNumber->Show();

				GameForTwoUserThisFormForUser1->SwithToAnotherUser->Hide();
				GameVsComputers->ThatNumberTheUser->Show();
				GameVsComputers->ThatNumberTheUser->Clear();
				GameVsComputers->GameProcessPc->Clear();
				GameVsComputers->GameProcessUser->Clear();
				GameVsComputers->NumberIsEnteredNotCorrectly->Clear();

				break;
			}
		}
	}
}

// ---------------------------------------------------------------------------

void __fastcall TForm3::FormCreate(TObject *Sender) {
	Image1->Picture->LoadFromFile("c://f/logs/ref.bmp");
}
// ---------------------------------------------------------------------------

void __fastcall TForm3::RulesClick(TObject *Sender) {
	Form3->Hide();
	Form8->Show();
}
// ---------------------------------------------------------------------------
