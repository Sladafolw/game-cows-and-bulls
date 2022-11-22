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
 #include <iostream> */
#include "win.h"
#include "surrend1.h"
#include "menu.h"
#pragma hdrstop
#include "igrafortwoperson.h"
#include "GameCore.h"
#include "Unit2.h"
using namespace std;
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGameForTwoPersonThisFormToUser2 *GameForTwoPersonThisFormToUser2;

// ---------------------------------------------------------------------------
__fastcall TGameForTwoPersonThisFormToUser2::TGameForTwoPersonThisFormToUser2
	(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TGameForTwoPersonThisFormToUser2::ThatNumberUser2Click
	(TObject *Sender) {

	int digitInt = StrToInt(ThatNumberUser->Text);
	string digitStr = to_string(digitInt);
	String inputedString = ThatNumberUser->Text.c_str();

	if (IsNumberValid(ThatNumberUser->Text))

	{
		GameForTwoUserThisFormForUser1->NumberThatUser2Entered->Text = digitInt;
		ThatNumberUser->Hide();
		UserEnteredNumberNotCorrectly->Hide();
		ThatNumberUser2->Hide();
		NumberThatUserEntered->Show();
		DetailsGame->Show();
		User2MakeMove->Show();
		GameForTwoPersonThisFormToUser2->Hide();
		GameForTwoUserThisFormForUser1->Show();

	}
	else {
		UserEnteredNumberNotCorrectly->Show();
		UserEnteredNumberNotCorrectly->Lines->Add(" число введено не коректно");
	}
	NumberThatUserEntered->Clear();
}

// ---------------------------------------------------------------------------
void __fastcall TGameForTwoPersonThisFormToUser2::SwithToUser1Click
	(TObject *Sender) {
	GameForTwoUserThisFormForUser1->Left = Form3->Left;
	GameForTwoUserThisFormForUser1->Top = Form3->Top;
	GameForTwoPersonThisFormToUser2->Hide();
	GameForTwoUserThisFormForUser1->Show();
	NumberThatUserEntered->Show();
	User2MakeMove->Show();
	GameForTwoUserThisFormForUser1->UserEnteredNumberNotCorrectly->Hide();
	GameForTwoUserThisFormForUser1->User1MakeNumber->Hide();
	GameForTwoUserThisFormForUser1->SwithToAnotherUser->Hide();
	GameForTwoUserThisFormForUser1->NumberThatUserEntered->Clear();
}

// ---------------------------------------------------------------------------
void __fastcall TGameForTwoPersonThisFormToUser2::User2MakeMoveClick
	(TObject *Sender) {
	int theNumberThatUser1EnteredInt = StrToInt(NumberThatUserEntered->Text);
	int theNumberThatUser2EnteredInt = StrToInt(ThatNumberWhichUser1->Text);
	string theNumberThatUser1EnteredString =
		to_string(theNumberThatUser1EnteredInt);
	string theNumberThatUser2EnteredString =
		to_string(theNumberThatUser2EnteredInt);

	if (IsNumberValid(NumberThatUserEntered->Text)) {

		// определяет все ли цифры числа различны

		BullsCows bullsCows;
		if (IsNumberValid(NumberThatUserEntered->Text)) {

			bullsCows = CalcBullsCows(theNumberThatUser2EnteredString,
				theNumberThatUser1EnteredString);
		}

		NumberThatUserEntered->Hide();
		User2MakeMove->Hide();
		SwithToUser1->Show();
		DetailsGame->Lines->Add
			("ваше число= " + IntToStr(theNumberThatUser1EnteredInt) +
			"количество быков=" + IntToStr(bullsCows.Bulls) +
			"количество коров=" + IntToStr(bullsCows.Cows));

		if (bullsCows.Bulls == 4) {
			Winn->YouWin->Caption = "Вы выиграли игрока 1!";
			DetailsGame->Clear();
			Winn->Number->Caption = theNumberThatUser2EnteredInt;
			GameForTwoUserThisFormForUser1->Hide();
			GameForTwoPersonThisFormToUser2->Hide();
			Winn->Show();
		}

	}

	else {
		DetailsGame->Lines->Add(" число введено не коректно");
	}
	NumberThatUserEntered->Clear();

}

// ---------------------------------------------------------------------------

void __fastcall TGameForTwoPersonThisFormToUser2::SurrendClick(TObject *Sender)
{
	GameForTwoPersonThisFormToUser2->Hide();
	Form7->Show();
	Form7->Label1->Caption = ("вы проиграли игроку 1");
}
// ---------------------------------------------------------------------------

void __fastcall TGameForTwoPersonThisFormToUser2::FormCreate(TObject *Sender) {
	UserEnteredNumberNotCorrectly->ReadOnly = True;
	GameForTwoPersonThisFormToUser2->SwithToUser1->Hide();
	DetailsGame->ReadOnly = True;
}
// ---------------------------------------------------------------------------

void __fastcall TGameForTwoPersonThisFormToUser2::res(TObject *Sender,
	bool &CanClose) {
	Form3->Close();
}

