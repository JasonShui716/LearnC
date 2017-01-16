// 14-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include "14-4.h"


int main()
{
	struct id member[NUMBER];
	for (int n = 0; n < NUMBER; n++)
	{
		printf("Please enter your social security number:");
		scanf_s("%d", &member[n].sscnumber);
		getchar();
		getname(&member[n].one);
	}
	for (int n = 0; n < NUMBER; n++)
	{
		showinfo(&member[n], n);
		getchar();
	}
	return 0;
}

