#include<stdio.h>
#include<string.h>
int *make_array(int elem, int val);
void show_array(const int ar[],int n);
int main(void)
{
    int *pa;
    int size;
    int value;
    
    printf("Enter the number of elements:");
    scanf("%d",&size);
    while(size>0)
    {
        printf("Enter the initialization value:");
        scanf("%d",&value);
        pa=make_array(size,value);
        if(pa)
        {
            show_array(pa,size);
            free(pa);
        }
        printf("\nEnter the mumber of elements (<1 to quit):");
        scanf("%d",&size);
    }
    printf("Done.\n");
    return 0;
}

int *make_array(int size,int val)
{
   int *ptt;
   ptt=(int *)malloc(size*sizeof(int));
   int i;
   for(i=0;i<size;i++)
   	ptt[i]=val;
   return ptt;
}

void show_array(const int ar[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(i%8==0)
            printf("\n");
        printf("%d",ar[i]);
    }
}   