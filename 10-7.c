#include<stdio.h>
void copy_ptt (double *s,double *t,int n);
int main()
{
	int i;
	double *sorce;
	double source[]={1.1,2.2,3.3,4.4,5.5,6.6,7.7};
	double target1[3];
	sorce=&source[2];
	copy_ptt(sorce,target1,3);
	for(i=0;i<3;i++){
		printf("1[%d] %.1lf \n",i,target1[i]);
	}
}

void copy_ptt (double *s,double *t,int n)
{
	int i;
	for(i=0;i<n;i++){
		*t=*s;
		t++;
		s++;
	}
}
		