// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include <wchar.h>

#pragma comment(lib, "user32.lib")

int wmain(void) {

	int x = GetSystemMetrics(SM_CXSCREEN);
	int y = GetSystemMetrics(SM_CYSCREEN);

	wprintf(L"The screen size is: %dx%d\n", x, y);
	getchar();
	return 0;
}

