#include <stdio.h>

#define RATE_SIMP 0.10
#define RATE_COMP 0.05
#define INIT_AMT 1000
int main( void )
{
    double daphne = INIT_AMT;
    double deidre = INIT_AMT;
    int years = 0;

    while (deidre <= daphne)
    {
        daphne += RATE_SIMP * INIT_AMT;
        deidre += RATE_COMP * deidre;
        ++years;
    }
    printf("Investment values after %d years:\n", years);
    printf("Daphne: $%.2f\n", daphne);
    printf("Deidre: $%.2f\n", deidre);

    return 0;
}
