// ------------------------------------------------------------------------
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
 #include <iostream> */
#include<string>
#include "GameCore.h"
#pragma hdrstop
using namespace std;
#include "menu.h"
#include "foroneperson.h"
#include <win.h>
#include "surrend1.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGameForOnePerson *GameForOnePerson;

// ---------------------------------------------------------------------------
__fastcall TGameForOnePerson::TGameForOnePerson(TComponent* Owner)
	: TForm(Owner) {
}
// ---------------------------------------------------------------------------

void __fastcall TGameForOnePerson::MakeAMoveClick(TObject *Sender) {
	int theNumberThatUserEnteredInt = StrToInt(TheNumberThatUserEntered->Text);
	int chisloIntPC = StrToInt(TheNumberEnteredPc->Text);
	string theNumberThatUserEnteredString =
		to_string(theNumberThatUserEnteredInt);
	string chisloStrPC = to_string(chisloIntPC);
	BullsCows bullsCows;
	if (IsNumberValid(TheNumberThatUserEntered->Text)) {

		bullsCows = CalcBullsCows(theNumberThatUserEnteredString,
			chisloStrPC); // метод подсчёта быков

		GameProcess->Lines->Add
			("ваше число= " + IntToStr(theNumberThatUserEnteredInt) +
			// вывод количества быков и коров
			"количество быков=" + IntToStr(bullsCows.Bulls) +
			"количество коров=" + IntToStr(bullsCows.Cows));
	}
	else {
		GameProcess->Lines->Add(" число введено не коректно");
	}

	if (bullsCows.Bulls == 4) {
		GameProcess->Clear();
		GameForOnePerson->Hide();
		Winn->Show();
	}
	TheNumberThatUserEntered->Clear();
}

// ---------------------------------------------------------------------------

void __fastcall TGameForOnePerson::BackToMenuClick(TObject *Sender) {
	GameForOnePerson->Hide();
	Form3->Show();
}
// ---------------------------------------------------------------------------

void __fastcall TGameForOnePerson::res(TObject *Sender, TCloseAction &Action) {
	Form3->Close();
}

// ---------------------------------------------------------------------------
void __fastcall TGameForOnePerson::FormCreate(TObject *Sender) {
	GameProcess->ReadOnly = True;
}
// ---------------------------------------------------------------------------
