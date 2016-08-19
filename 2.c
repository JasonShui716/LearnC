/* *的用法 */
#include <stdio.h>
#include <string.h>
int main()
{
    unsigned a,b;
    float u;
    int v,one,two,three;
    printf("bao liu wei shu:");
    scanf("%u",&a);
    printf("shu ru xiao shu:");
    scanf("%f",&u);
    printf("%.*f\n",a,u);
    printf("zhan yong wei shu:");
    scanf("%u",&b);
    printf("shu ru zheng shu:");
    scanf("%d",&v);
    printf("%*d\n",b,v);
    printf("shu ru san ge shu:");
    scanf("%*d %*d,%d",&three);
    printf("di san ge shu shi %d",three);
}
