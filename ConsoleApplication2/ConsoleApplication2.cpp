// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <windows.h>

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	PWSTR szCmdLine, int CmdShow) {

	MessageBoxW(NULL, szCmdLine, L"Title", MB_OK);

	return 0;
}

