#define CSIZE 4
#define SNUM 3 //number of subjects..
#define MAX 30
struct name {
	char *fname;
	char *lname;
};
struct student {
	struct name one;
	float grade[3];
	float average;
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
void getname(struct name * one)
{
	char temp[MAX];
	int length;
	printf("Please enter the student's first name:");
	fgets(temp, MAX, stdin);
	deln(temp);
	length = strlen(temp) + 1;
	one->fname = (char *)malloc(length);
	strcpy_s(one->fname, length, temp);
	printf("Please enter the student's last name:");
	fgets(temp, MAX, stdin);
	deln(temp);
	length = strlen(temp) + 1;
	one->lname = (char *)malloc(length);
	strcpy_s(one->lname, length, temp);
}