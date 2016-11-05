#define TIMES 1000
#include <stdio.h>
#include <stdlib.h>
int time[10]={0,0,0,0,0,0,0,0,0,0};
int n;
void satistic(int *value)
{
    for(n=0;n<TIMES;n++)
        switch(value[n])
        {
            case 1:
            time[0]++;
            break;
            case 2:
            time[1]++;
            break;
            case 3:
            time[2]++;
            break;
            case 4:
            time[3]++;
            break;
            case 5:
            time[4]++;
            break;
            case 6:
            time[5]++;
            break;
            case 7:
            time[6]++;
            break;
            case 8:
            time[7]++;
            break;
            case 9:
            time[8]++;
            break;
            case 10:
            time[9]++;
            break;
        }
    printf("    1    2    3    4    5   \n");
    printf("%5d%5d%5d%5d%5d\n",time[0],time[1],time[2],time[3],time[4]);
    printf("    6    7    8    9   10 \n");
    printf("%5d%5d%5d%5d%5d\n",time[5],time[6],time[7],time[8],time[9]);
}