// chapter01.06.01switch.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


void main()
{
	int flag;
	flag = 20;
	switch(flag)
	{
		case 1:
			printf("1\n");
			break;
		case 2:
			printf("2\n");
			break;
		case 3:
			printf("3\n");
			break;
		case 4:
			printf("4\n");
			break;
		case 5:
			printf("5\n");
			break;
		default:
			printf("%d\n", flag);
	}
	getchar();
}