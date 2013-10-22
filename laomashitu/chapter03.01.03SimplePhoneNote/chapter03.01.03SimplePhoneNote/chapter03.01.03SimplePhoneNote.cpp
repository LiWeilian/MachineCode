// chapter03.01.03SimplePhoneNote.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string.h>

int _tmain(int argc, _TCHAR* argv[])
{
	while (true)
	{
		//等待用户输入并获取输入命令
		//-ld，导入文件
		//-sa，导出文件
		char cmd[80];
		while (1)
		{
			scanf("%[^\n]", cmd);
			fflush(stdin);
			if (strcmp(cmd, "-ld") == 0)
			{
				printf("ok\n");
			}
			else
			{
				break;
			}
		}
	}
	return 0;
}

