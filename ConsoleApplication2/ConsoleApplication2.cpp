// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include <wchar.h>

int wmain(void) {

	SYSTEMTIME st = { 0 };

	GetSystemTime(&st);

	wprintf(L"The UTC time is: %02d:%02d:%02d\n",
		st.wHour, st.wMinute, st.wSecond);
	getchar();
	return 0;
}

