#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
int main(int argc, char const *argv[])
{
	FILE *fp;
	char string[MAX];
	if(argc!=3)
	{
		printf("Please enter the correct parameter again.");
		exit(1);
	}
	if((fp=fopen(argv[1],"r"))==NULL)
	{
		fprintf(stderr,"Can\'t open the file.");
		exit(1);
	}
	while(fgets(string,MAX,fp))
		if(strstr(string,argv[2]))
			puts(string);
	return 0;
}