#include<stdio.h>
void copy_arr (double s[],double t[],int n);
void copy_ptt (double *s,double *t,int n);
int main()
{
	int i;
	double source[5]={1.1,2.2,3.3,4.4,5.5};
	double target1[5];
	double target2[5];
	copy_arr(source,target1,5);
	copy_ptt(source,target2,5);
	for(i=0;i<5;i++){
		printf("1[%d] %.1lf \n",i,target1[i]);
		printf("2[%d] %.1lf \n",i,target2[i]);
	}
}

void copy_arr (double s[],double t[],int n)
{
	int i;
	for(i=0;i<n;i++)
	     t[i] = s[i];
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
		