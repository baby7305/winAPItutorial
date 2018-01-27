// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include <wchar.h>

int wmain(void) {

	FILETIME ft = { 0 };

	GetSystemTimeAsFileTime(&ft);

	LARGE_INTEGER li = { 0 };

	li.LowPart = ft.dwLowDateTime;
	li.HighPart = ft.dwHighDateTime;

	long long int hns = li.QuadPart;

	wprintf(L"%lli hundreds of nanoseconds have elapsed "
		"since Windows API epoch\n", hns);
	getchar();
	return 0;
}

