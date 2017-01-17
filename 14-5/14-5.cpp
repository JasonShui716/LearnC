// 14-5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "14-5.h"

int main()
{
	struct student unit[CSIZE];
	float caverage = 0.0;
	char *order[3] = { "first","second","last" };
	for (int n = 0; n < CSIZE; n++)
	{
		getname(&unit[n].one);
		unit[n].average = 0.0;
		for (int m = 0; m < SNUM; m++)
		{
			printf("%d", n);
			printf("Please enter the %s grade.", order[m]);
			scanf_s("%f", &unit[n].grade[m]);
			getchar();
			unit[n].average += unit[n].grade[m];
		}
		unit[n].average=unit[n].average/(float)SNUM;
	}
	for (int n = 0; n < CSIZE; n++)
	{
		printf("#%d  %s %s  ", n + 1, unit[n].one.fname, unit[n].one.lname);
		for (int m = 0; m < SNUM; m++)
			printf("%s grade: %.2f", order[m], unit[n].grade[m]);
		printf("\nThe average grade is %.2f.\n", unit[n].average);
		caverage += unit[n].average;
	}
	caverage /= (float)CSIZE;
	printf("\nThe average grade of the class is %.2f\n", caverage);
	getchar();
	return 0;
}

