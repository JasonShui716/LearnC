#include<stdio.h>
#include<math.h>
#define FIRST 100.0
int main()
{
    int years=0;
    double da,de;
    while(da>=de)
    {
        years++;
        da=FIRST+years*FIRST*0.10;
        de=FIRST*pow(1.05,years);

    }
    printf("Daphne=%.2f,Deirdre=%.2f,years=%d",da,de,years);
}
