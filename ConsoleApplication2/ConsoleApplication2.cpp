// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include <wchar.h>

#pragma comment(lib, "User32.lib")

int wmain(void) {

	SYSTEMTIME st = { 0 };
	wchar_t buf[128] = { 0 };

	GetLocalTime(&st);
	wsprintfW(buf, L"Today is %lu.%lu.%lu\n", st.wDay,
		st.wMonth, st.wYear);

	wprintf(buf);
	getchar();
	return 0;
}

