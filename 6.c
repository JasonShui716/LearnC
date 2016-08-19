 #include <stdio.h>
int main()
{
    int a=1;
    while (a<50)
    {
        printf("%3d %10d\n",a,a*a*a);
        a=a+1;
    }
}
