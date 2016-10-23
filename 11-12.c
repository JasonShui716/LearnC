#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 80
int main()
{
    char read[SIZE];
    char copy[SIZE];
    int m,n,i;
    int blank[SIZE];
    gets(read);
    for(blank[0]=0,i=1,n=0;n<strlen(read);n++)
    {
        if(isblank(read[n]))
        {
            blank[i]=n;
            i++;
        }
    }
    blank[i]=strlen(read);
    for(m=0,n=blank[i-1];n<blank[i];m++,n++)
    {
        if(n>=blank[i-1]||n<blank[i])
        {
            copy[m]=read[blank[i-1]];
            putchar(copy[m]);
            continue;
        }
        i--;
        n=blank[i-1];
    }
    putchar('e');
}