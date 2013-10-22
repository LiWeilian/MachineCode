// chapter01.08.03_dllload.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <Windows.h>

typedef int (*SubPtr)(int, int);


void main()
{
	HMODULE h = LoadLibraryA("chapter01.08.03_dll_relocation.dll");
	if (NULL == h)
	{
		printf("cannot load dll\n");
		getchar();
		return;
	}
	SubPtr fp = (SubPtr)GetProcAddress(h, "sub");
	if (NULL == fp)
	{
		printf("cannot get function sub\n");
		getchar();
		return;
	}
	printf("3 - 2 = %d\n", fp(3, 2));

	getchar();
}

