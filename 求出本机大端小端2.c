#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int chek_sys()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int ret = chek_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}