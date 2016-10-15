#include <stdio.h>
#define SIZE 50
void cut(char *);
int main()
{
    char input[SIZE];
    gets(input);
    cut(input);
    puts(input);
}

void cut(char *string)
{
    int m=0;
    while(!isspace(string[m]))
        m++;
    string[m]='\0';
}