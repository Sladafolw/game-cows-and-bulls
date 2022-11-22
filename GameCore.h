#include <vcl.h>
//#include <cstdlib>
//#include <string.h>
//#include <string>
//#include <conio.h>
//#include <cstring>
//#include <iostream>
//#include <iomanip>
//#include <fstream>
//#include <stdio.h>
#include<sstream>
#pragma hdrstop
#include "menu.h"
#include <Unit2.h>
#include "surrend1.h"
#include <win.h>
#include <cstring>
// ---------------------------------------------------------------------------
#include<string.h>
#ifndef GameCoreH
#define GameCoreH
using namespace std;
// ---------------------------------------------------------------------------
#endif

// class GameCore {
// public:
           	struct BullsCows
{
	 int Bulls;
     int Cows;
};
bool IsNumberValid(System::UnicodeString inputedString);
BullsCows CalcBullsCows(string yourNamber, string realNumber);
// };
