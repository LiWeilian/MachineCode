// chapter01.08.03_dll_relocation.cpp : 定义 DLL 应用程序的导出函数。
//

#include "chapter01.08.03_dll_relocation.h"
#include "stdafx.h"

int gi;

int sub(int x, int y)
{
	gi = 0x12345678;
	return x - y;
}