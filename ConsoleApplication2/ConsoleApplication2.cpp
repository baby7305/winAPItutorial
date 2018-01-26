// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include <tchar.h>

#define _UNICODE
#define UNICODE

int _tmain(int argc, TCHAR *argv[]) {

	PDWORD cChars = NULL;
	HANDLE std = GetStdHandle(STD_OUTPUT_HANDLE);

	if (std == INVALID_HANDLE_VALUE) {
		_tprintf(L"Cannot retrieve standard output handle\n (%d)",
			GetLastError());
	}

	if (argv[1]) {

		WriteConsole(std, argv[1], _tcslen(argv[1]), cChars, NULL);
	}

	CloseHandle(std);

	return 0;
}

