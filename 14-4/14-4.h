#define NUMBER 2
#define NMAX 20
struct name
{
	char *fname;
	char *mname;
	char *lname;
};
struct id
{
	int sscnumber;
	struct name one;
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
void getname(struct name *one)
{
	char temp[NMAX];
	int length;
	printf("Please enter your first name:");
	fgets(temp, NMAX, stdin);
	deln(temp);
	length = strlen(temp) + 1;
	one->fname = (char *)malloc(length);
	strcpy_s(one->fname, length, temp);
	printf("Please enter your middle name:");
	fgets(temp, NMAX, stdin);
	deln(temp);
	length = strlen(temp) + 1;
	one->mname = (char *)malloc(length);
	strcpy_s(one->mname, length, temp);
	printf("Please enter your last name:");
	fgets(temp, NMAX, stdin);
	deln(temp);
	length = strlen(temp) + 1;
	one->lname = (char *)malloc(length);
	strcpy_s(one->lname, length, temp);

}
void showinfo(struct id *member, int n)
{
	printf("%d  %s,%s %c%c - %d\n", n+1, member->one.fname, member->one.lname, (strlen(member->one.mname) == 0) ? ' ' : member->one.mname[0], (strlen(member->one.mname) == 0) ?' ':'.', member->sscnumber);
	free(member->one.fname);
	free(member->one.lname);
	free(member->one.mname);
}