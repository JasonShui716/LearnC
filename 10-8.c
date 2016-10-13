#include<stdio.h>
void cnp(int n,int m,double arr1[n][m],double arr2[n][m]);
int main()
{
  double array1[3][5]={{1,3,5,7,9},{2,2,3,4,5},{3,2,5,6,5}};
  double array2[3][5];
  cnp(3,5,array1,array2);//cnp=copy'n'print
  printf("test%.1f",array2[2][4]);
  return 0;
} 
void cnp(int n,int m,double arr1[n][m],double arr2[n][m])
{
  int ic,ir;
  for(ic=0;ic<n;ic++)
  {
   	for(ir=0;ir<m;ir++)
      {
      	**arr2=**arr1;
        printf("[%d][%d]%.1lf ",ic,ir,arr2[ic][ir]);
        arr1 = *(arr1+ic)+1;
        arr2 = *(arr2+ic)+1;
			}
      printf("\n");
  }
}           
