// chapter02.01_DecodeHelloWorld.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string.h>

void main()
{
	char buf[128];
	memset(buf, 0, 128);
	gets(buf);
	if (strcmp(buf, "itspassword") != 0)
	{
		printf("wrong password, try again\n");
		return;
	}
	printf("you are right");
}