#include<stdio.h>
#define MASK 0x01
int openbit(int i)
{
    int opennum;
    while(i!=0)
    {
        if(i&MASK==1)
            opennum++;
        i>>=1;
    }
    return opennum;
}

int main()
{
    int i;
    scanf("%d",&i);
    printf("The number of openbit is %d.",openbit(i));
}