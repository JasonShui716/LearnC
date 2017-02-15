// calculator.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "stack.h"
#include "calc.h"
double ans;
char next;

int main()
{
    Stack number, symbol;
    char formula[SMAX];
    char snum[NMAX];
    Item num, sym;
    fgets(formula, SMAX, stdin);
    InitializeStack(&number);
    InitializeStack(&symbol);
    if (StackIsFull(&number) || StackIsFull(&symbol))
    {
        fprintf(stderr, "No memory available.");
        exit(1);
    }
    for (int n = 0; formula[n] != '\n'&&formula[n] != '='; n++)
    {
        next = formula[n + 1];
        if (IsDigit(formula[n])) 
        {
            int m = 0;
            do {
                snum[m] = formula[n];
                m++;
                n++;
            } while (IsDigit(formula[n]));
            snum[m] = '\0';
            n--;
            next = formula[n + 1];
            num.n = atof(snum);
            Push(num, &number);
        }
        else if (IsSymbol(formula[n]))
        {
            sym.ch = formula[n];
            Analyze(sym, &number, &symbol);
        }
        else
            fprintf(stderr, "Illegal input.");
        while ((next == '\n' || next == '=') && !StackIsEmpty(&symbol))
            Calculate(&number, &symbol);
    }
    printf("normal:%lf\n", ans);
    printf("short:%g\n", ans);
    system("pause");
    return 0;
}

