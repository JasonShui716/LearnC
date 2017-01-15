char abbrmon[12][4] = { "JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC" };
struct date
{
	int day;
	int mon;
	int year;
};
int main();
int anamonth(char *chmon)
{
	int n;
	for (n = 0; n < 12; n++)
	{
		if (strcmp(chmon, abbrmon[n]))
			continue;
		break;
	}
	return (n + 1);
}
void calc(struct date days)
{
	int totdays = 0;
	int modays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	(days.year % 400 == 0) || (days.year % 4 == 0 && days.year % 100 != 0) ? modays[1] = 29 : 1;
	for (int n = 0; n < days.mon; n++)
	{
		if (n + 1 == days.mon)
		{
			if (days.day > modays[n])
			{
				fprintf(stderr,"You enter the wrong date.\n");
				getchar();
				exit(1);
			}
			totdays += days.day;
			break;
		}
		totdays += modays[n];
	}
	printf("The date is the %dth day of %d.", totdays, days.year);
}