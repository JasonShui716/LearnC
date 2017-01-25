// 17-2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "list.h"
void deln(char *str)
{
	for (int n = 0; str[n] != '\0'; n++)
		if (str[n] == '\n')
			str[n] = '\0';
}

void showmovies(Item item)
{
	deln(item.title);
	printf("Movie:%s   Rating:%d\n", item.title, item.rating);
}

int main()
{
	List movies;
	Item temp;
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "No memory available.\n");
		exit(1);
	}
	puts("Enter first movie title:");
	fgets(temp.title, TSIZE, stdin);
	while (temp.title[0] != '\r'&&temp.title[0] != '\n')
	{
		puts("Enter your rating<0-10>:");
		scanf_s("%d", &temp.rating);
		getchar();
		if (!AddItem(temp, &movies))
		{
			fprintf(stderr, "Problem allocating memory\n");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("The list is now full.");
			break;
		}
		puts("Enter next movie title(empty line to stop):");
		fgets(temp.title, TSIZE, stdin);
	}
	if (ListIsEmpty(&movies))
		printf("No data entered.");
	else
	{
		printf("Here is the movie list:\n");
		Traverse(&movies, showmovies);
	}
	printf("You entered %d movies.", ListItemCount(&movies));
	EmptyTheList(&movies);
	puts("Bye!");
	return 0;
}

