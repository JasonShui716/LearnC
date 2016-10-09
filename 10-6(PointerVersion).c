#include<stdio.h>
#define COL 3
#define ROW 3
void copy_arr(double a[][ROW],double b[][ROW]);
int main()
{
	double tar[3][3]={{0,0,0},{1,1,1},{2,2,2}};
	double arr[3][3]={{2.5,4.3,7.3},{2.3,3.1,5.4},{4.8,9.4,3.0}};
	copy_arr(tar,arr);	
	printf("test%.1lf",tar[2][1]);
	return 0;
}
void copy_arr(double a[][ROW],double b[][ROW])
{
	int i,n;
	for (i=0;i<COL;i++)
	{		
		for (n=0;n<ROW;n++)
			{
			**a=**b;
			a=*(a+i)+1;
			b=*(b+i)+1;
			}
	}
}

	