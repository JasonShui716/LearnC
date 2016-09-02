#include<stdio.h>
double xiejun(double a,double b);
int main()
{
    double a,b,xj;
    printf("Please enter a number:");
    scanf("%lf",&a);
    printf("Please enter another number:");
    scanf("%lf",&b);
    xj=xiejun(a,b);
    printf("the xiejun of %.3lf and %.3lf is %.3lf",a,b,xj);
    return 0;
}

double xiejun(double a,double b)
{
    double a_d,b_d,xj,xj_d;
    a_d=1 / a;
    b_d=1 / b;
    xj_d=(a_d+b_d)/2;
    xj=1 / xj_d;
    return xj;

}
