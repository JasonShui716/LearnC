#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 80
int main()
{
    char read[SIZE];
    gets(read);
    int i,m1,m2;
    int n=m2=strlen(read);
    for(i=n-1;i>=0;i--)
    {
        if(isspace(read[i])||i==0)
            m2=i;
        else
            continue;
        
        for(m1=i;m1<m2;m1++)
        {
            putchar(read[m1]);
        }
    }
}
// ???????????still wrong
