#include<stdio.h>

int main(void)
{
 int a=0,b=0;
 char ch;
 printf("Please input a string end by #:");
 while((ch = getchar()) != '#')
 {
  if(ch == '.') {putchar('!'); a++;}
  else if(ch == '!') {putchar('!');putchar('!'); b++;}
  else putchar(ch);
 }
 printf("\nthe times of '.' replaced by '!':  %d\n",a);
 printf("the times of '!' replaced by '!!': %d\n",b);
 return(0);
}
