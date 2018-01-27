// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include <wchar.h>

#define NSECS 60*60*3

int wmain(void) {

	SYSTEMTIME st = { 0 };
	FILETIME ft = { 0 };

	GetLocalTime(&st);

	wprintf(L"%02d/%02d/%04d %02d:%02d:%02d\n",
		st.wDay, st.wMonth, st.wYear, st.wHour, st.wMinute, st.wSecond);

	SystemTimeToFileTime(&st, &ft);

	ULARGE_INTEGER u = { 0 };

	memcpy(&u, &ft, sizeof(u));
	u.QuadPart += NSECS * 10000000LLU;
	memcpy(&ft, &u, sizeof(ft));

	FileTimeToSystemTime(&ft, &st);

	wprintf(L"%02d/%02d/%04d %02d:%02d:%02d\n",
		st.wDay, st.wMonth, st.wYear, st.wHour, st.wMinute, st.wSecond);
	getchar();
	return 0;
}

