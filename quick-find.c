#include <stdio.h>
#define N 100
int main()
{
    int p,q,i,t;
    int id[N];
    for(i=0;i<N;i++)
        id[i]=i;
    while(scanf("%d %d",&p,&q)==2)
    {
        if(id[p]==id[q])
            continue;
        for(t=id[p],i=0;i<N;i++)
            if(id[i]==t)
               id[i]=id[q];
        printf("%d %d\n",p,q);        
    }
}