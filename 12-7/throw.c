#include<stdio.h>
#include<stdlib.h>
extern int sets,sides,dice;
extern char set[];
void throw(void)
{
    printf("set:%d\n",set);
    sets=atoi(set);
    int times;
    int *value=(int *)malloc(sets * sizeof(int));
    int *value_one=(int *)malloc(dice * sizeof(int));
    for(times=0;times<sets;times++)
    {
        int times_one,total_one;
        for(times_one=total_one=0;times_one<dice;times_one++)
        {
            srand((unsigned int)rand());
            value_one[times_one]=(rand()%sides)+1;
            total_one += value_one[times_one];
            printf("%d\n",value_one[times_one]);
        }
        value[times]=total_one;
    }
    printf("Here are %d sets of %d %d-sided throws.\n",sets,sides,dice);
    for(times=0;times<sets;times++)
        printf("  %d",value[times]);
        printf("\n");
    free(value);
    free(value_one);
}