#include "pch.h"
#include <Windows.h>
#include <string>
#include <Psapi.h>
#include <iostream>
#include "Settings.h"
#include "ConColors.h"
/*
   Winhook API made by SpeedSterKawaii (SpeedSterKawaii#5233)
   You can go to Settings.h to change the stuff over there.

   If anyone skids this without credits im beating your ass.
*/

void InitWinHook()
{
	MakeConsoleTitle("Speeds WinHook API - SpeedSterKawaii"); // The Console Title.
	MakeConsoleClear(); // Clear out the junk in the console.
	Colors::Aqua(); // This is the color you want the console to be.
	MakeWriteLine("WinHookAPI Started");
	MakeWriteLine("Checking ScriptContext"); // Again none of the stuff you write is real.
	Sleep(200);
	MakeWriteLine("Checking Lua State"); // Don't make it sus otherwise they can find out.
	Sleep(200);
	MakeWriteLine("Starting Injection");
	Sleep(700);
	MakeWriteLine("Injection Started");
	Sleep(100);
	MakeWriteLine("Ready for Execution");
	Sleep(100);
	MakeMsgBox("WinHookAPI has Loaded Successfully.", "Speeds WinHook API"); // Text of MsgBox.
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD Reason, void* Reservered)
{
	if (Reason == DLL_PROCESS_ATTACH)
	{
		/* Attached DLL with the Process "RobloxPlayerBeta" */
		CreateThread(0, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(InitWinHook), 0, 0, 0);
	}
	return TRUE;
}