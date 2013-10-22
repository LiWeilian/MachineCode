// chapter01SizeOf.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int gi;
	printf("Size of type short: %d\n", sizeof(short));
	printf("Size of type short *: %d\n", sizeof(short *));
	printf("Size of type int: %d\n", sizeof(int));
	printf("Size of type int *: %d\n", sizeof(int *));
	printf("Size of type long: %d\n", sizeof(long));
	printf("Size of type long *: %d\n", sizeof(long *));
	printf("Size of type float: %d\n", sizeof(float));
	printf("Size of type float *: %d\n", sizeof(float *));
	printf("Size of type double: %d\n", sizeof(double));
	printf("Size of type double *: %d\n", sizeof(double *));
	char c = 'a'; 
	scanf("%c", c);
	return 0;
}

