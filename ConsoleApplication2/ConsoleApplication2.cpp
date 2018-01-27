// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include <wchar.h>

#define WINDOWS_TICKS_PER_SEC 10000000
#define EPOCH_DIFFERENCE 11644473600LL

long long WindowsTicksToUnixSeconds(long long);

int wmain(void) {

	FILETIME ft = { 0 };

	GetSystemTimeAsFileTime(&ft);

	LARGE_INTEGER li = { 0 };

	li.LowPart = ft.dwLowDateTime;
	li.HighPart = ft.dwHighDateTime;

	long long int hns = li.QuadPart;

	wprintf(L"Windows API time: %lli\n", hns);

	long long int utm = WindowsTicksToUnixSeconds(hns);

	wprintf(L"Unix time: %lli\n", utm);
	getchar();
	return 0;
}

long long int WindowsTicksToUnixSeconds(long long windowsTicks) {

	return (windowsTicks / WINDOWS_TICKS_PER_SEC - EPOCH_DIFFERENCE);
}

