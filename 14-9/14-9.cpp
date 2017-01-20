// 14-9.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "14-9.h"

int main()
{
	int flight;
	char choice;
	struct plane seat[FLIGHTNUM][SEATS];
	FILE *data;
	if (fopen_s(&data, "SeatsData.dat", "r") == 0)
	{
		for (int f = 0; f < FLIGHTNUM; f++)
			load_file(data, seat[f]);
		fclose(data);
	}
	for (int f = 0; f < FLIGHTNUM; f++)
		for (int n = 0; n < SEATS; n++)
		{
			seat[f][n].number = n + 1;
			if (!seat[f][n].sold)
			{
				clean_name(&seat[f][n]);
			}
		}
	flight = choose_flight();
	if (flight != 4)
		do {
			do {
				choice = menu();
				if (!strchr("abcdefq", choice))
				{
					printf("Input error. Please try again.\n");
					continue;
				}
			} while (!strchr("abcdefq", choice));
			switch (choice)
			{
			case 'a':
				show_empty_number(seat[flight]);
				break;
			case 'b':
				show_empty_list(seat[flight]);
				break;
			case 'c':
				show_alphabetical_list(seat[flight]);
				break;
			case 'd':
				add_assign(seat[flight]);
				break;
			case 'e':
				del_assign(seat[flight]);
				break;
			case 'f':
				check_status(flight, seat[flight]);
				break;
			case 'q':
				printf("\n");
				flight = choose_flight();
				break;
			}
			numsort(seat[flight]);
		} while (flight != 4);
	fopen_s(&data, "SeatsData.dat", "w");
	for (int f = 0; f < FLIGHTNUM; f++)
	{
		fprintf(data, "=======%s======\n", flight_list[f]);
		for (int n = 0; n < SEATS; n++)
		{
			fprintf(data, "%2d %s %s %s\n", n + 1, (seat[f][n].sold) ? "Sold " : "Empty", seat[f][n].fname, seat[f][n].lname);
			free(seat[f][n].fname);
			free(seat[f][n].lname);
		}
	}
	fclose(data);
	getchar();
	return 0;
}