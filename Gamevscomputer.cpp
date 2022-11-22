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

#include <dos.h>
#pragma hdrstop
#include "win.h"
#include "menu.h"
#include "surrend1.h"
#include "Gamevscomputer.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
using namespace std;
TGameVsComputers *GameVsComputers;
#include "GameCore.h"

// ---------------------------------------------------------------------------
__fastcall TGameVsComputers::TGameVsComputers(TComponent* Owner) : TForm(Owner)
{
}

// ---------------------------------------------------------------------------
void __fastcall TGameVsComputers::SurrendClick(TObject *Sender) {
	GameVsComputers->Hide();
	Form7->Show();
	Form7->Label1->Caption = ("вы проиграли компьютеру");
}

// ---------------------------------------------------------------------------
void __fastcall TGameVsComputers::UserMakeNumberClick(TObject *Sender) {
	while (true) {

		if (IsNumberValid(ThatNumberTheUser->Text)) {
			ThatNumberTheUser->Hide();
			UserMakeNumber->Hide();
			ComputerMakeMove->Show();
			EnteredYourNumber->Show();
			GameProcessPc->Show();
			GameProcessUser->Show();
			TheNumberThatUserEntered->Show();
			Surrend->Show();
			UserMakeMove->Show();
			NumberIsEnteredNotCorrectly->Hide();
			break;
		}
		else {
			NumberIsEnteredNotCorrectly->Show();
			NumberIsEnteredNotCorrectly->Lines->Add
				(" число введено не коректно");
		}
		TheNumberThatUserEntered->Clear();

		break;

	}
}

// ---------------------------------------------------------------------------
void __fastcall TGameVsComputers::UserMakeMoveClick(TObject *Sender) {
	int inttheNumberThatUserEntered = StrToInt(TheNumberThatUserEntered->Text);
	int intEnteredPc = StrToInt(EnteredPc->Text);
	string strtheNumberThatUserEntered = to_string(inttheNumberThatUserEntered);
	string enteredPcStr = to_string(intEnteredPc);
	BullsCows bullsCows1;

	if (IsNumberValid(TheNumberThatUserEntered->Text)) {

		bullsCows1 = CalcBullsCows(strtheNumberThatUserEntered, enteredPcStr);

		GameProcessUser->Lines->Add
			("ваше число " + IntToStr(inttheNumberThatUserEntered) +
			"количество быков=" + IntToStr(bullsCows1.Bulls) +
			"количество коров=" + IntToStr(bullsCows1.Cows));
		if (bullsCows1.Bulls == 4) {
			Winn->Number->Caption = intEnteredPc;
			GameVsComputers->Hide();
			Winn->Show();
		}

		// computer
		int bullsCountComputer = rand() % 3 + 1;
		int chisloIntPC;
		string chisloStrPC;

		int theNumberThatUserEntered = StrToInt(ThatNumberTheUser->Text);
		string theNumberThatUserEnteredString =
			to_string(theNumberThatUserEntered);
		BullsCows bullsCows;
		do {
			do {
				chisloIntPC = rand() % 9999 + 1000; //
				chisloStrPC = to_string(chisloIntPC);
				NumberPC->Text = chisloIntPC;
			}
			while (!IsNumberValid(NumberPC->Text));

			bullsCows = CalcBullsCows(chisloStrPC,
				theNumberThatUserEnteredString);
		}
		while (bullsCows.Bulls <= bullsCountComputer);

		TheNumberThatUserEntered->Clear();
		GameProcessPc->Lines->Add("ваше число " + IntToStr(chisloIntPC) +
			" количество быков=" + IntToStr(bullsCows.Bulls) +
			"количество коров=" + IntToStr(bullsCows.Cows));
		if (bullsCows.Bulls == 4) {
			// Form1->Label3->Caption = chisloIntPC;
			GameVsComputers->Hide();
			Form7->Show();
			Form7->Label1->Caption = ("вы проиграли компьютеру");
			Form7->ThatNumbersEnteredPc->Caption =
				"число было " + GameVsComputers->EnteredPc->Text;
		}

		else {
			NumberIsEnteredNotCorrectly->Lines->Add
				(" число введено не коректно");
		}

	}
	else {
		GameProcessUser->Lines->Add(" число введено не коректно");

	}
}

void __fastcall TGameVsComputers::res(TObject * Sender, bool &CanClose) {
	Form3->Close();
}

// ---------------------------------------------------------------------------
void __fastcall TGameVsComputers::FormCreate(TObject *Sender) {
	GameProcessPc->ReadOnly = True;
	GameProcessUser->ReadOnly = True;
	NumberIsEnteredNotCorrectly->ReadOnly = True;
}
// ---------------------------------------------------------------------------
