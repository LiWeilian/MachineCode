// chapter02.02strangeloop.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	int a[10];
	for (i = 0; i <= 10; i++)
	{
		a[i] = 0;
		printf("%d\n", i);
	}
	getchar();
	return 0;
}

