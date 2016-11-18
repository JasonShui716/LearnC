#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int rand1(int k);
int main()
{
    float origin[25]={346.5,348,333,348.5,349,329,331.5,330,347.5,347,332,331.5,348,332.5,347,332,329,329,330,347.5,348,327.5,347,352,331.5};
    float target[25]={0};
    float total[5]={0};
    int k;
    int m,n,t;
    for(t=0;t<2000000;t++)
    {
      for(m=0;m<25;m++)
      {
        k=rand()%100;
        k=rand1(k);
        target[k]=origin[m];
      }
      for(n=0;n<25;n++)
      {
        total[n/5] += target[n];
       }
	if(abs(total[0]-total[1])<MAX&&abs(total[1]-total[2])<MAX&&abs(total[2]-total[3])<MAX&&abs(total[3]-total[4])<MAX&&abs(total[4]-total[0])<MAX)
      {
        for(m=0;m<25;m++)
	{
          printf("%.1f,\n",target[m]);
	}
	printf("\n");
      }
      for(n=0;n<25;n++)
      {
        target[n]=0;
        total[n/5]=0;
      }
    }
}

int rand1(int k)
{
  static int arr[25]={-1};
  static int times=0;
  int a;
  int n=(unsigned int)(k*rand())%25;
  while(1)
  {
    for(a=0;a<24;a++)
    {
      if(n!=arr[a]&&times!=0)
        continue;
      break;
    }
    if(a==24||times==0)
    {
      arr[times]=n;
      break;
    }
    else
      n=rand()%25;
  }
  if(times==24)
  {
    times=0;
    for(a=0;a<25;a++)
      arr[a]=-1;
  }
  times++;
  return n;
}