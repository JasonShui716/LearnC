#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 50
void reads(char *,int n);
int main()
{
    int n;
    char input[SIZE];
    char output[SIZE];
    scanf("%d",&n);
    getchar();
    gets(input);
    strcpy(output,input);
    puts(output);
    reads(output,n);
    puts(output);
}

void reads(char *string,int n)
{
    int m=0;
    while(!isspace(string[m]))
        m++;
    if(m<n)
        string[m]='\0';
    else
        string[n]='\0';
}