#include<stdio.h>
#define MASK 0x01
bool isopen(int i,int pos)
{
    for(;pos>0;pos--,i>>=1);
    return (i&MASK);
}//c99

int main()
{
    int input,pos;
    printf("Enter the interger:");
    scanf("%d",&input);
    printf("Enter the position of the bit:");
    scanf("%d",&pos);
    if(isopen(input,pos))
        printf("The bit is open.");
    else
        printf("The bit is close.");
    return 0;
}
