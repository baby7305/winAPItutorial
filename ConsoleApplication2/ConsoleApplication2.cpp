// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include <wchar.h>

#pragma comment(lib, "User32.lib")

int wmain(void) {

	wchar_t str[] = L"Europa";

	CharLowerW(str);
	wprintf(L"%ls\n", str);

	CharUpperW(str);
	wprintf(L"%ls\n", str);
	getchar();
	return 0;
}

