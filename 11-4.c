#include <stdio.h>
#include <string.h>
#define SIZE 100
char *search(char *,char ch);
int main()
{
    char input[SIZE];
    char ch;
    char *loc;
    gets(input);
    ch=getchar();
    loc=search(input,ch);
    if(loc)
        printf("%c,%p\n",ch,loc);
    else
        printf("can't find.\n");
}

char *search(char *string,char ch)
{
    int m=0;
    int n=strlen(string);
    while((string[m])!=ch && m<n)
        m++;
    if(m==n)
        return NULL;
    else
        return &string[m];
}