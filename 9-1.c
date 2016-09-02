/*纯完成任务，并不人性化也不美观QAQ*/
#include<stdio.h>
double min(double x,double y);
int main()
{
    double a,b,m;
    printf("Please enter a number:");
    scanf("%lf",&a);
    printf("Please enter another number:");
    scanf("%lf",&b);
    m=min(a,b);
    printf("The less one between %lf and %lf is %lf.",a,b,m);
    return 0;
}

double min(double x,double y)
{
    if(x<y)
        return x;
    else
        return y;
}
