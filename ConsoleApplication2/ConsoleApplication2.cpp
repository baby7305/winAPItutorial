// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include <wchar.h>
#include <stdbool.h>
#include "Shlwapi.h"

#pragma comment(lib, "Shlwapi.lib")

int wmain(void) {

	wchar_t str1[] = L"512";
	wchar_t str2[] = L"0xAB12";
	int n = 0;

	bool r = StrToIntExW(str1, STIF_DEFAULT, &n);

	if (r == true) {

		wprintf(L"The value is %d\n", n);
	}
	else {

		wprintf(L"The first conversion failed\n");
		return 1;
	}

	r = StrToIntExW(str2, STIF_SUPPORT_HEX, &n);

	if (r == true) {

		wprintf(L"The value is %d\n", n);
	}
	else {

		wprintf(L"The second conversion failed\n");
		return 1;
	}
	getchar();
	return 0;
}

