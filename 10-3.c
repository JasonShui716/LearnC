#include<stdio.h>
int maxi(int i,int a[i]);
int main()
{
	int max;
	int i;
	printf("Enter the size of the array.");
	scanf("%d",&i);
	int arr[i];
	printf("now enter the number you want to put into the array.\n");
	for(int n=0;n<i;n++)
		scanf("%d",&arr[n]);
	max=maxi(i,arr);
	printf("the maximum of the array is %d ",max);
	return 0;
}

int maxi(int i,int a[])
{
	int n,ma;
	for(n=1,ma=*a;n<i;n++){
		a++;
		if(ma < (*a))
			ma = (*a);
		else;
		}
		return ma;
	}