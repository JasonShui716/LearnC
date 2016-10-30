#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define SIZE 100
int main()
{
	int m,n,i,p,o;
	char read[SIZE];
	gets(read);
	m=strlen(read);
	n=m-1;
	read[m]=' ';
	for (i=n;i>=0;i--)
	{
	    if (read[i]!=' '&&i!=0)
	         continue;
	    else
	    {
	         o=i+1;
	         if (i==0)
	         {
	              o=0;
	              while (o<=n)
	              {
	                  putchar(read[o]);
	                  o++;
	              }
	              getchar();
	         }
	         else if(n!=m-1)
	         {
	              while(o<=n)
	              {
	                  putchar(read[o]);
	                  o++;
	              }
	         }
	         else
	         {
	             while (o<=m)
	             {
	                  putchar(read[o]);
	                  o++;
	              }
	         }
	         n=i;
	    }
	}
}
	