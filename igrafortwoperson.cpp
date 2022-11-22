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
#pragma hdrstop
#include "menu.h"
#include <Unit2.h>
#include "surrend1.h"
#include <win.h>
#include "igrafortwoperson.h"
#include "GameCore.h"
using namespace std;
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TGameForTwoUserThisFormForUser1 *GameForTwoUserThisFormForUser1;

// ---------------------------------------------------------------------------
__fastcall TGameForTwoUserThisFormForUser1::TGameForTwoUserThisFormForUser1
	(TComponent* Owner) : TForm(Owner) {
}
// ---------------------------------------------------------------------------

void __fastcall TGameForTwoUserThisFormForUser1::User1MakeNumberClick
	(TObject *Sender) {
	NumberThatUserEntered->Clear();

	while (true) {
		int a, b, c, d;

		System::UnicodeString inputedString = ThatNumberUser1->Text;

		if (IsNumberValid(inputedString)) {
			GameForTwoPersonThisFormToUser2->ThatNumberWhichUser1->Text =
				StrToInt(inputedString);
			ThatNumberUser1->Hide();
			UserEnteredNumberNotCorrectly->Hide();
			User1MakeNumber->Hide();
			NumberThatUserEntered->Show();
			DetailsGame->Show();
			User1MakeMove->Show();

			GameForTwoUserThisFormForUser1->Hide();
			GameForTwoPersonThisFormToUser2->Show();
			break;
		}
		else {
			UserEnteredNumberNotCorrectly->Show();
			UserEnteredNumberNotCorrectly->Lines->Add
				(" число введено не коректно");
		}
		NumberThatUserEntered->Clear();
		break;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TGameForTwoUserThisFormForUser1::User1MakeMoveClick
	(TObject *Sender) {

	int theNumberThatUserEnteredInt = StrToInt(NumberThatUserEntered->Text);
	int numberThatUser2EnteredInt = StrToInt(NumberThatUser2Entered->Text);
	string theNumberThatUserEnteredString =
		to_string(theNumberThatUserEnteredInt);
	string numberThatUser2EnteredStr = to_string(numberThatUser2EnteredInt);
	int numbersofcow = 0;
	int numberofbulls = 0;
	BullsCows bullsCows;
	if (IsNumberValid(NumberThatUserEntered->Text)) {

		bullsCows = CalcBullsCows(theNumberThatUserEnteredString,
			numberThatUser2EnteredStr);

		NumberThatUserEntered->Hide();
		User1MakeMove->Hide();
		DetailsGame->Lines->Add
			("ваше число= " + IntToStr(theNumberThatUserEnteredInt) +
			"количество быков=" + IntToStr(bullsCows.Bulls) +
			"количество коров=" + IntToStr(bullsCows.Cows));
		SwithToAnotherUser->Show();
		if (bullsCows.Bulls == 4) {
			Winn->YouWin->Caption = "Вы выиграли игрока 2!";
			DetailsGame->Clear();
			Winn->Number->Caption = numberThatUser2EnteredInt;
			Winn->Show();
			GameForTwoUserThisFormForUser1->Hide();
			GameForTwoPersonThisFormToUser2->Hide();
		}
	}

	else {
		DetailsGame->Lines->Add(" число введено не коректно");
	}
}

// ---------------------------------------------------------------------------

void __fastcall TGameForTwoUserThisFormForUser1::SwithToAnotherUserClick
	(TObject *Sender) {

	GameForTwoUserThisFormForUser1->Hide();
	GameForTwoPersonThisFormToUser2->Show();
	NumberThatUserEntered->Show();
	User1MakeMove->Show();
	GameForTwoPersonThisFormToUser2->SwithToUser1->Hide();
	GameForTwoPersonThisFormToUser2->NumberThatUserEntered->Clear();

}
// ---------------------------------------------------------------------------

void __fastcall TGameForTwoUserThisFormForUser1::SurrendClick(TObject *Sender) {
	GameForTwoUserThisFormForUser1->Hide();
	Form7->Show();
	Form7->Label1->Caption = ("вы проиграли игроку 2");
}
// ---------------------------------------------------------------------------

void __fastcall TGameForTwoUserThisFormForUser1::re(TObject *Sender,
	bool &CanClose) {
	Form3->Close();
}

// ---------------------------------------------------------------------------
void __fastcall TGameForTwoUserThisFormForUser1::FormCreate(TObject *Sender) {
	UserEnteredNumberNotCorrectly->ReadOnly = True;
	DetailsGame->ReadOnly = True;
}
// ---------------------------------------------------------------------------
