#include<stdio.h>/*实现不了。等待修改。。。
void power(double a,int b);
double multi(double a,int b);
int main()
{
    double a;
    int b;
    printf("Please enter a number:");
    scanf("%lf",&a);
    printf("Please enter an integer:");
    scanf("%d",&b);
    power(a,b);
    return 0;
}
void power(double a,int b)
{
    double po;
    if(a==0)
        po=0;
    else if(b==0)
        po=1;
    else if(b<0)
        {
            b=-b;
            po=multi(a,b);
            po=(1/po);
        }
    else
        po=multi(a,b);
    printf("%.2lf ^%d = %2lf\n",a,b,po);
}

double multi(double a,int b)
{
    int t,po;
    for(po=1;t<b;t++)
        po=po*a;
    return po;
}
