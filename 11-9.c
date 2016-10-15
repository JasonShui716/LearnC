#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100
void delspace(char *);
int main()
{
    char input[SIZE];
    gets(input);
    while(input[0]!='\0')
    {
        delspace(input);
        puts(input);
        gets(input);
    }
}

void delspace(char *str)
{
    int m,n;
    while(1)
    {
        for(m=0;str[m]!=' '&&str[m]!='\0';m++);
        if(m==strlen(str))
            break;
        for(n=0;str[m+n]!='\0';n++)
            str[m+n]=str[m+n+1];
    }
}
