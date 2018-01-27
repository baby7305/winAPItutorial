// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
#include <stdbool.h>
#include <wchar.h>

bool isLeapYear(int);

int wmain(void) {

	// Assume year >= 1582 in the Gregorian calendar.
	int years[] = { 2000, 2002, 2004, 2008, 2012, 2016, 2020,
		1900, 1800, 1600 };

	int size = sizeof(years) / sizeof(int);

	for (int i = 0; i<size; i++) {

		if (isLeapYear(years[i])) {

			wprintf(L"%ld is a leap year\n", years[i]);
		}
		else {

			wprintf(L"%ld is not a leap year\n", years[i]);
		}
	}
	getchar();
	return 0;
}

bool isLeapYear(int year) {

	if (year % 4 != 0) {

		return false;
	}
	else if (year % 400 == 0) {

		return true;
	}
	else if (year % 100 == 0) {

		return false;
	}
	else {

		return true;
	}
}

