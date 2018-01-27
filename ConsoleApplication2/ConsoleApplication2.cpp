// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include <wchar.h>
#include "Shlwapi.h"

#pragma comment(lib, "Shlwapi.lib")

int wmain(void) {

	wchar_t buf[] = L"Today is a rainy day.";
	wchar_t *search_word = L"rainy";
	int len = wcslen(search_word);

	LPWSTR pr = StrStrW(buf, search_word);

	if (pr == NULL) {

		wprintf(L"No match\n", buf);
	}
	else {

		wprintf(L"%.*ls is found\n", len, pr);
	}
	getchar();
	return 0;
}

