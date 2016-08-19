#include<stdio.h>

int main(void)
{
 int i_even = 0, sum_even = 0, i_odd = 0, sum_odd = 0, num;
 printf("Please input numbers (0 to quit):");
 while(1)
 {
  scanf("%d",&num);
  if (num == 0) break;
  switch(num % 2)
  {
  case 0: i_even++;
    sum_even += num;
    break;
  case 1: i_odd++;
    sum_odd += num;
  }
 }
 printf("even number's count: %d\n",i_even);
 printf("even number's sum  : %d\n",sum_even);
 printf("odd  number's count: %d\n",i_odd);
 printf("odd  number's sum  : %d\n",sum_odd);
 return(0);
}
