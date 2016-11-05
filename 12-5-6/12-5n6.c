#include "satistics.h"
int main()
{
    int top,seek,temp;
    int value[TIMES];
	unsigned int seed;
	printf("Please enter the seed.");
	scanf("%u",&seed);
	srand(seed);
    for(n=0;n<TIMES;n++)
        value[n]=(rand()%10)+1;
    for(top=0;top<n-1;top++)
        for(seek=top+1;seek<n;seek++)
            if(value[top]<=value[seek])
            {
                temp=value[top];
                value[top]=value[seek];
                value[seek]=temp;
            }
    for(n=0;n<TIMES;n++)
        printf("%d\n",value[n]);
    satistic(value);
	getchar();
	getchar();
}