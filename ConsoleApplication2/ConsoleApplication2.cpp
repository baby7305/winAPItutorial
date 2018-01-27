// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include <wchar.h>

#define BUFSIZE MAX_PATH

int wmain(int argc, wchar_t **argv) {

	wchar_t buf[BUFSIZE];

	if (argc != 2) {

		wprintf(L"Usage: %ls <dir>\n", argv[0]);
		getchar();
		return 1;
	}

	DWORD r = SetCurrentDirectoryW(argv[1]);

	if (r == 0) {

		wprintf(L"SetCurrentDirectoryW() failed (%ld)\n", GetLastError());
		getchar();
		return 1;
	}

	r = GetCurrentDirectoryW(BUFSIZE, buf);

	if (r == 0) {

		wprintf(L"GetCurrentDirectoryW() failed (%ld)\n", GetLastError());
		getchar();
		return 1;
	}

	if (r > BUFSIZE) {

		wprintf(L"Buffer too small; needs %d characters\n", r);
		getchar();
		return 1;
	}

	wprintf(L"Current directory is: %ls\n", buf);
	getchar();
	return 0;
}

