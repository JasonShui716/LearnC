#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100
int main()
{
  FILE *fi,*fo;
  int ch;
  char finame[40];
  char foname[40];
  char line[MAX];
  printf("Please enter the input file name:");
  gets(finame);
  if((fi=fopen(finame,"r"))==NULL)
  {
    fprintf(stderr,"can't open the file %s.",finame);
    exit(0);
  }
  printf("Please enter the output file name:");
  gets(foname);
  fo=fopen(foname,"w");
  while((ch=getc(fi))!=EOF)
  {
    ungetc(ch,fi);
    fgets(line,MAX,fi);
    for(int i=0;line[i]!='\0';i++)
    {
      line[i]=toupper(line[i]);
    }
    fputs(line,fo);
  }
  fclose(fi);
  fclose(fo);
}
