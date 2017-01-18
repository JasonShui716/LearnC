// 14-8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "14-8.h"

int main()
{
	char choice;
	struct plane seat[SEATS];
	FILE *data;
	if (fopen_s(&data, "SeatsData.dat", "r")==0)
	{
		load_file(data, seat);
		fclose(data);
	}
	else
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
		numsort(seat);
	} while (strchr("abcde", choice));
	fopen_s(&data, "SeatsData.dat", "w");
	for (int n = 0; n < SEATS; n++)
	{
		if (!seat[n].sold)
			clean_name(&seat[n]);
		fprintf(data, "%2d %s %s %s\n", n + 1, (seat[n].sold) ? "Sold " : "Empty", seat[n].fname, seat[n].lname);
	}
	fclose(data);
	getchar();
	return 0;
}