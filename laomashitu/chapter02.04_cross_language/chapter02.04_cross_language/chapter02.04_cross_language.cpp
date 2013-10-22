// chapter02.04_cross_language.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>

typedef int (*AddPtr)(int, int, int, int);

void main()
{
	HMODULE h = LoadLibraryA("CrossLanguage.dll");
	if(NULL == h)
	{
		printf("cannot load\n");
		getchar();
		return;
	}
	AddPtr fp = (AddPtr)GetProcAddress(h, "Add");
	if(NULL == fp)
	{
		printf("cannot get function sub\n");
		getchar();
		return;
	}
	int i = fp(1, 2, 3, 4);
	printf("1 + 2 + 3 + 4 = %d\n", i);
	getchar();
}
