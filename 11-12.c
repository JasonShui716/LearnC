#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 80
int main()
{
    char read[SIZE];
    gets(read);
    int n,i,d;
    n=strlen(read)-1;
    for(i=n;i>=0;i--)
    {
        if(read[i]!=' '&&i!=0)
            continue;
        for(d=i+1;d<=n;d++)
        {
           if(i!=0)
           {
           	putchar(read[d]);
           	continue;
           }
           if(n==(strlen(read)-1))
           	putchar(' ');
           putchar(read[d-1]);
        }
        n=i;
    }
}
//Actually, It's a compromise.I think I should spend more time correcting it.