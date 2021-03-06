// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

#undef __stdcall // DllMain should be __stdcall always
BOOL __stdcall DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	{
		MessageBox(NULL, L"Windows CE Compatibility Layer is working. You can attach debugger or continue.", L"WCECL: Startup", 0);
		break;
	};
	//
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

