#include<stdio.h>
#define COL 3
#define ROW 3
void copy_arr(double a[][ROW],double b[][ROW]);
int main()
{
	double tar[3][3]={{0,0,0},{1,1,1},{2,2,2}};
	double arr[3][3]={{2.5,4.3,7.3},{2.3,3.1,5.4},{4.8,9.4,3.0}};
	copy_arr(tar,arr);	
	printf("test:%.1lf",tar[2][1]);
	return 0;
}
void copy_arr(double a[][ROW],double b[][ROW])
{
	int c,r;
	for(c=0;c<COL;c++)
		{
			for(r=0;r<ROW;r++)
				{
					a[c][r]=b[c][r];
				}
		}
}
		