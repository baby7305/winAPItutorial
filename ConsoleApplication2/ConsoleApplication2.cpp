// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
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

