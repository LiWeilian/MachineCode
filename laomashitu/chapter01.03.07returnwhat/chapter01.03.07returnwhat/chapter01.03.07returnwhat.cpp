// chapter01.03.07returnwhat.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


struct myrd
{
	int i1;
	int i2;
	int i3;
};

myrd myfunc()
{
	myrd r1;
	r1.i1 = 1;
	r1.i2 = 2;
	r1.i3 = 3;
	return r1;
};

void main(int count, char ** args)
{
	myrd r;
	r = myfunc();
	getchar();
}

