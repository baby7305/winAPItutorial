// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <windows.h>
#include <wchar.h>

int wmain(void) {

	SYSTEMTIME st = { 0 };

	wchar_t *dn[] = { L"Sunday", L"Monday", L"Tuesday",
		L"Wednesday", L"Thursday", L"Friday", L"Saturday" };

	GetLocalTime(&st);
	wprintf(L"Today is %ls\n", dn[st.wDayOfWeek]);
	getchar();
	return 0;
}

