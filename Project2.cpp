//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("surrend1.cpp", Form7);
USEFORM("Unit2.cpp", GameForTwoPersonThisFormToUser2);
USEFORM("win.cpp", Winn);
USEFORM("pravila.cpp", Form8);
USEFORM("foroneperson.cpp", GameForOnePerson);
USEFORM("Gamevscomputer.cpp", GameVsComputers);
USEFORM("igrafortwoperson.cpp", GameForTwoUserThisFormForUser1);
USEFORM("menu.cpp", Form3);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TGameForOnePerson), &GameForOnePerson);
		Application->CreateForm(__classid(TGameForTwoUserThisFormForUser1), &GameForTwoUserThisFormForUser1);
		Application->CreateForm(__classid(TWinn), &Winn);
		Application->CreateForm(__classid(TGameForTwoPersonThisFormToUser2), &GameForTwoPersonThisFormToUser2);
		Application->CreateForm(__classid(TGameVsComputers), &GameVsComputers);
		Application->CreateForm(__classid(TForm7), &Form7);
		Application->CreateForm(__classid(TForm8), &Form8);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
