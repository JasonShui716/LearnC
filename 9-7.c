#include<stdio.h>
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
    double pow;
    if(a==0)
        pow=0;
    else if(b==0)
        pow=1;
    else if (b<0)
        {
            b=-b;
            pow=multi(a,b);
            pow=(1/pow);
            b=-b;
        }
    else
        pow=multi(a,b);
    printf("%.3lf ^%d = %.5lf\n",a,b,pow);
}

double multi(double a,int b)
{
    int t=0;
    double po=1;
    for (po=1;t<b;t++)
        po=po*a;
    return po;
}
