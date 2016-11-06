#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
int *ctoi(char *num_cr,int l);
void trans(int *num1,int *num2);
void bigmulti(int *num1,int *num2);
int smallmulti(int a,int b);
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
	if(l1<l2)
	{
		int *temp;
		int t;
		temp=num2;
		num2=num1;
		num1=temp;
		t=l2;
		l2=l1;
		l1=t;
	}
}

void bigmulti(int *num1,int *num2)
{
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
		{
			process[col][row]=smallmulti(num1[m1],num2[m2]);
			printf("process[%d][%d]=%d\n",col,row,process[col][row]);
		}	
	int cache=0;
	int tot;
	for(col=l-1;col>=0;col--)
	{
		for(row=0,tot=0;row<l2;row++)
		{
			tot += process[col][row];
			printf("c:%d r:%d tot:%d p[%d][%d]=%d\n",col,row,tot,col,row,process[col][row]);
		}			
		tot += cache;
		result[col]=tot%2;
		cache=tot/2;
		printf("\n");
	}
	int i;
	printf("result:");
	for(i=0;i<l;i++)	
		printf("%d",result[i]);
}
int smallmulti(int a,int b)
{
	if(a==1&&b==1)
		return 1;
	else
		return 0;
}


