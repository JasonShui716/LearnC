#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
int *ctoi(char *num_cr,int l);
void trans(int *num1,int *num2);
void bigmulti(int *num1,int *num2);
int smallmulti(int a,int b);
void add(int *p[],int *r);
int l,l1,l2;
int main()
{
	char num1_c[SIZE],num2_c[SIZE];	
	printf("Please enter the first binary number:");
	gets(num1_c);
	printf("Then the second.");
	gets(num2_c);
	l1=strlen(num1_c);
	l2=strlen(num2_c);
	int *num1=ctoi(num1_c,l1);
	int *num2=ctoi(num2_c,l2);
	trans(num1,num2);
	bigmulti(num1,num2);
}

int *ctoi(char *num_c,int l)
{
	int n;	
	int *num=malloc(l*sizeof(int));
	for(n=0;n<l;n++)
		num[n]=num_c[n]-48;
	return num;
}
	
void trans(int *num1,int *num2)
{
	if(strlen(num1)<strlen(num2))
	{
		int *temp;
		temp=num2;
		num2=num1;
		num1=temp;
	}
}

void bigmulti(int *num1,int *num2)
{
	putchar('b');	
	l=l1+l2;
	int *result=malloc(l*sizeof(int));
	int (*process)[l2]=malloc(l*l2*sizeof(int));
	int col,row;
	for(col=0;col<l;col++)
		for(row=0;row<l2;row++)
			process[col][row]=0;
	int m1,m2;
	for(m2=l2-1,row=0;m2>=0;m2--,row++)
		for(m1=l1-1,col=l-1-row;m1>=0;m1--,col--)
			process[col][row]=smallmulti(m1,m2);
	add(process,result);
	int i;
	for(i=0;i<l;i++)
		printf("%d",result[i]);
}
int smallmulti(int a,int b)
{
	putchar('s');	
	if(a==0||b==0)
		return 0;
	else
		return 1;
}

void add(int *p[],int *re)
{
	putchar('a');	
	int cache=0;
	int c,r,loc,tot;
	for(c=l-1,loc=l-1;c>=0;c--)
	{
		for(r=0,tot=0;r<l2;r++)
			tot += p[c][r];
		tot += cache;
		re[loc]=tot%2;
		cache=tot/2;
	}
}
