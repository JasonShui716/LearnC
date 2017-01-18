#define SEATS 12
#define MAX 15
struct plane
{
	int number;
	bool sold = 0;
	char *lname;
	char *fname;
};
void deln(char *str)
{
	int n = 0;
	while (1)
	{
		if (str[n] == '\n')
		{
			str[n] = '\0';
			break;
		}
		n++;
	}
}
void getname(struct plane * one)
{
	char temp[MAX];
	int length;
	printf("Please enter the passenger's first name:");
	fgets(temp, MAX, stdin);
	deln(temp);
	length = strlen(temp) + 1;
	one->fname = (char *)malloc(length);
	strcpy_s(one->fname, length, temp);
	printf("Please enter the passenger's last name:");
	fgets(temp, MAX, stdin);
	deln(temp);
	length = strlen(temp) + 1;
	one->lname = (char *)malloc(length);
	strcpy_s(one->lname, length, temp);
}

int find(struct plane *seat, int target)
{
	for (int n = 0; n < SEATS; n++)
	{
		if (seat[n].number == target)
			return n;
	}
	return 0;
}

char menu(void)
{
	char choice;
	printf("To choose a function, enter its letter label:\n");
	printf("a) Show number of empty seats\n");
	printf("b) Show list of empty seats\n");
	printf("c) Show alphabetical list of seats\n");
	printf("d) Assign a customer to a seat assignment\n");
	printf("e) Delete a seat assignment\n");
	printf("f) Quit     ");
	scanf_s("%c", &choice,1);
	getchar();
	return choice;
}

void show_empty_number(struct plane *seat)
{
	int empty = 0;
	for (int n = 0; n < SEATS; n++)
	{
		if (seat[n].sold)
			continue;
		empty++;
	}
	printf("\nThere are %d empty seats.\n\n", empty);
}

void show_empty_list(struct plane *seat)
{
	printf("\nEmpty seats:");
		for (int n = 0; n < SEATS; n++)
			if (!seat[n].sold)
				printf("#%d ", seat[n].number);
	printf("\n\n");
}

void show_alphabetical_list(struct plane *seat)
{
	struct plane temp;
	int top, seek;
	for (top = 0; top < SEATS - 1; top++)
	{
		for (seek = top + 1; seek < SEATS; seek++)
		{
			if (seat[top].sold && seat[seek].sold)
			{
				if (strcmp(seat[top].fname, seat[seek].fname) > 0)
				{
					temp = seat[top];
					seat[top] = seat[seek];
					seat[seek] = temp;
				}
				if (strcmp(seat[top].fname, seat[seek].fname) == 0 && strcmp(seat[top].lname, seat[seek].lname) > 0)
				{
					temp = seat[top];
					seat[top] = seat[seek];
					seat[seek] = temp;
				}
			}
		}
	}
	for (int n = 0; n < SEATS; n++)
	{
		if(seat[n].sold)
			printf("\n%s %s   #%d\n", seat[n].fname, seat[n].lname, seat[n].number);
		continue;
	}
	printf("\n");
}

void add_assign(struct plane *seat)
{
	int n;
	printf("\nPlease enter the number of the seat:");
	scanf_s("%d", &n);
	getchar();
	n = find(seat, n);
	if (seat[n].sold)
	{
		printf("The seat has been sold.\n\n");
		return;
	}
	getname(&seat[n]);
	seat[n].sold++;
	printf("The info has been added.\n\n");
}

void del_assign(struct plane *seat)
{
	int n;
	printf("\nPlease enter the number you want to delete.");
	scanf_s("%d", &n);
	getchar();
	n = find(seat, n);
	if (!seat[n].sold)
	{
		printf("It hasn't been sold.\n\n");
		return;
	}
	seat[n].sold = 0;
	printf("The assignment has been deleted.\n\n");
}