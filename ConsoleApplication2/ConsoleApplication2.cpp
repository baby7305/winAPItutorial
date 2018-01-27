// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include <wchar.h>

int wmain(void) {

	SYSTEMTIME st = { 0 };

	GetLocalTime(&st);

	wprintf(L"Today is: %d-%02d-%02d\n", st.wYear, st.wMonth, st.wDay);
	getchar();
	return 0;
}

