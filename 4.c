#include <stdio.h>
int main()
{
    int a=1;
    int b;
    while (++a<=50)
    {
        b=pow(a,3);
        printf("%3d %10d\n",a,b);
    }
}

/*previous version(wrong result):
    #include <stdio.h>
int main()
{
    int a=1;
    while (a<50)
    {
        printf("%3d %10d\n",a,pow(a,3));
        a=a+1;
    }
}
*/
