#include<stdio.h>/*问题：分类返回值
double power(double a,int b);
int main()
{
    double a,po;
    int b;
    printf("Please enter a number:");
    scanf("%lf",&a);
    printf("Please enter an integer:");
    scanf("%d",&b);
    po=power(a,b);
    printf("%lf ^ %d = %lf",a,b,po);
    return 0;
}
double power(double a,int b)
{
    int t,po;
    if(a==0)
        return 0;
    else if(b==0)
        return 1;
    else if(b<0)
        b=-b;
    else;
    for(po=1;t<b;t++)
        po=po*a;
    return
}
