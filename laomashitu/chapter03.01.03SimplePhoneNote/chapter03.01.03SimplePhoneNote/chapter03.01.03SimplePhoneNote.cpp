// chapter03.01.03SimplePhoneNote.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string.h>

int _tmain(int argc, _TCHAR* argv[])
{
	while (true)
	{
		//�ȴ��û����벢��ȡ��������
		//-ld�������ļ�
		//-sa�������ļ�
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

