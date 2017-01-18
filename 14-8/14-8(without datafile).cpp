// 14-8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "14-8(without datafile).h"

int main()
{
	char choice;
	struct plane seat[SEATS];
	for (int n = 0; n < SEATS; n++)
		seat[n].number = n + 1;
	do {
		do {
			choice = menu();
			if (!strchr("abcdef", choice))
			{
				printf("Input error. Please try again.\n");
				continue;
			}
		} while (!strchr("abcdef", choice));
		switch (choice)
		{
			case 'a':
				show_empty_number(seat);
				break;
			case 'b':
				show_empty_list(seat);
				break;
			case 'c':
				show_alphabetical_list(seat);
				break;
			case 'd':
				add_assign(seat);
				break;
			case 'e':
				del_assign(seat);
				break;
			case 'f':
				break;
		}
		
	} while (strchr("abcde", choice));
	getchar();
	return 0;
}

