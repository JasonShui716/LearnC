#include<stdio.h>
#define SPACE ' '
void chline(char ch,int i,int j);
int main()
{
    char input;
    int a,b;
    printf("Please enter a character:");
    input=getchar();
    printf("Please enter a number:");
    scanf("%d",&a);
    printf("Please enter anoter number:");
    scanf("%d",&b);
    chline(input,a,b);
    return 0;
}

void chline(char ch,int i,int j)
{
    int blank;
    for(blank=0;blank<i;blank++)
        putchar(SPACE);
    for(;i<=j;i++)
        putchar(ch);
}
