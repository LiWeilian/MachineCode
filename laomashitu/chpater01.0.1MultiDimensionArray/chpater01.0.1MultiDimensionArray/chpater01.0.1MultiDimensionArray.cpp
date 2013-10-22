// chpater01.0.1MultiDimensionArray.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	for(int i = 0; i<3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			printf("%d\n", a[i][j]);
		}
	}
	getchar();
	return 0;
}

