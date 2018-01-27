// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include <wchar.h>

int wmain(void) {

	DWORD BufSize = MAX_PATH;
	DWORD mhz = MAX_PATH;
	HKEY key;

	long r = RegOpenKeyExW(HKEY_LOCAL_MACHINE,
		L"HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0", 0, KEY_READ, &key);

	if (r != ERROR_SUCCESS) {

		wprintf(L"RegOpenKeyExW() failed %ld", GetLastError());
		return 1;
	}

	r = RegQueryValueExW(key, L"~MHz", NULL, NULL, (LPBYTE)&mhz, &BufSize);

	if (r != ERROR_SUCCESS) {

		wprintf(L"RegQueryValueExW() failed %ld", GetLastError());
		return 1;
	}

	wprintf(L"CPU speed: %lu MHz\n", mhz);

	r = RegCloseKey(key);

	if (r != ERROR_SUCCESS) {

		wprintf(L"Failed to close registry handle %ld", GetLastError());
		return 1;
	}
	getchar();
	return 0;
}

