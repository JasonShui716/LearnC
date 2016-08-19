#include<stdio.h>
int main()
{
    double money=100.00;
    int years=0;
    while(money>=0)
    {
        years++;
        money+=money*0.08;
        money=money-10.00;
    }
    years--;
    printf("%.2f\n  %d",money,years);
}
