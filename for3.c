#include <stdio.h>
int main()
{
    int n,n_l,n_h;
    printf("enter an number:");
    scanf("%d",&n_l);
    printf("enter another number:");
    scanf("%d",&n_h);
    printf("     n       square      cube   \n");
    for(n=n_l;n<=n_h;n++)
    {
        printf("%6d %10d %10d\n",n,n*n,n*n*n);
    }

}
