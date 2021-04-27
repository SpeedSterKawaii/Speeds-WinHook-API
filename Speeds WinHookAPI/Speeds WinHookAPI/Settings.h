#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;
#define ExploitName "Speed" // This is Your Exploit Name.

/* Console Settings | Option 1 */

void MakeWriteLine(const char* line) // Creates a line in the console.
{
	std::cout << "[" << ExploitName << "]: " << line << "\n";
}

void MakeConsoleTitle(const char* title) // Rename the Console Title (if it has a console).
{
	SetConsoleTitleA(title);
}

void MakeConsoleClear() // Clear the junk out of the console.
{
	system("cls");
}

void MakeConsoleHide() // Hide the Console.
{
	::ShowWindow(GetConsoleWindow(), SW_HIDE);
}

void MakeConsoleShow() // Show the Console
{
	::ShowWindow(GetConsoleWindow(), SW_HIDE);
}

/* MessageBox Settings | Option 2 */

void MakeMsgBox(const char* msg,  const char* title) // Creates Message Box.
{
	MessageBoxA(0, msg, title, MB_ICONINFORMATION);
}

// Coming Soon not now skid. \\