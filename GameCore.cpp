// ---------------------------------------------------------------------------

#pragma hdrstop

#pragma hdrstop
#include "menu.h"
#include <Unit2.h>
#include "surrend1.h"
#include <win.h>
#include "menu.h"
#include "igrafortwoperson.h"
#include "GameCore.h"
#include "foroneperson.h"
using namespace std;
// ---------------------------------------------------------------------------
#pragma package(smart_init)

// public class GameCore {

bool IsNumberValid(System::UnicodeString inputedString) {

	int digit = StrToInt(inputedString);
	if (strlen(to_string(digit).c_str()) != 4) {
		return false;
	}

	if (inputedString[1] == '0') {
		return false;
	}

	int a = digit % 10;
	int b = (digit % 100) / 10;
	int c = (digit % 1000) / 100;
	int d = digit / 1000;

	if ((a == b) || (a == c) || (a == d) || (b == c) || (b == d) || (c == d)) {
		return false;
	}

	return true;
}

BullsCows CalcBullsCows(string yourNamber, string realNumber) {
	int numberofbulls = 0;
	int numbersofcows = 0;
	for (int i = 0; i <= 3; i++) {
		for (int j = 0; j <= 3; j++) {
			if (yourNamber[i] == realNumber[j]) {
				if (i == j) {
					numberofbulls++;
					break;
				}
				else {
					numbersofcows++;
					break;
				}
			}
		}
	}
	BullsCows bullsCows = {numberofbulls, numbersofcows};
	return bullsCows;
}

// };
