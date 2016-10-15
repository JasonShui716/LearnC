#include <stdio.h>
#include <string.h>
#define SIZE1 50
#define SIZE2 60
char  *sncpy(char *s1,char *s2,int n);
int min(int a,int b);
int main()
{
    char orig[SIZE1];
    char tocp[SIZE2];
    char *out;
    int n;
    gets(orig);
    gets(tocp);
    scanf("%d",&n);
    out=sncpy(orig,tocp,n);
    puts(out);
}

char *sncpy(char *s1,char *s2,int n)
{
    int l1=strlen(s1);
    int l2=strlen(s2);
    int m=min(l2,n);
    int i;
    if(l1>m)
        s1[m]='\0';
    for(i=0;i<m;i++)
        s1[i]=s2[i];
    return s1;
  }
int min(int a,int b)
{
    if(a>b)
         return b;
    else
        return a;
}