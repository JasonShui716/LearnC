#include <stdio.h>
int main()
{
    char alpha;
    int n,m;
    for(m=1;m<=6;m++)
    {
        for(n=1,alpha='F';n<=m;n++)
        {
            printf("%c",alpha);
            alpha=alpha-1;
        }
        printf("\n");
    }
}
