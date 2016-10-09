#include<stdio.h>
void maxi(int i,double a[]);
int main()
{
	int i;
	printf("Enter the size of the array.");
	scanf("%d",&i);
	double arr[i];
	printf("now enter the number you want to put into the array.\n");
	for(int n=0;n<i;n++)
		scanf("%lf",&arr[n]);
	maxi(i,arr);
	return 0;
}

void maxi(int i,double a[])
{
	int n=0;
	double ma,mi,minus;
	for(n=1,ma=mi=*a;n<i;n++){
		a++;
		if(ma < (*a)){
			ma = (*a);
			}
		else if(mi > (*a))
			mi =(*a);
		}
		minus=ma-mi;
		printf("The maximum minus the minimum is %.2lf.",minus);
}