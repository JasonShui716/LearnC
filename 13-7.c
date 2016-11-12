#include<stdio.h>
#include<stdlib.h>
#define MAX 100
char line[MAX];
FILE *onc(FILE *fp,char *fname)/*open and check*/
{
  gets(fname);
  if((fp=fopen(fname,"r"))==NULL)
  {
    fprintf(stderr,"can't open the file %s.",fname);
    exit(0);
  }
  return fp;
}
FILE *print(FILE *fp,char ch)
{
  if((fgets(line,MAX,fp))!=NULL)
  {
    puts(line);
  }
  return fp;
}
int main()
{
  FILE *f1,*f2;
  int c1,c2;
  char f1name[40];
  char f2name[40];
  printf("Please enter the first file name:");
  f1=onc(f1,f1name);
  printf("Please enter the second file name:");
  f2=onc(f2,f2name);
  while((c1=getc(f1))!=EOF||(c2=getc(f2))!=EOF)
  {
    if(c1==-1)
    {
      ungetc(c2,f2);
    }
    else
      ungetc(c1,f1);
    f1=print(f1,c1);
    f2=print(f2,c2);
  }
}
