#include <stdio.h>
void pns(int *arr1,int *arr2,int *arr3,int n);//pns=plus'n'save
int main()
{
    int array1[4]={2,4,5,8};
    int array2[4]={1,0,4,6};
    int array3[4];
    pns(array1,array2,array3,4);
    return 0;
}

void pns(int *arr1,int *arr2,int *arr3,int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        *(arr3+i)=*(arr1+i)+*(arr2+i);
        printf("%d   ",*(arr3+i));
    }
}