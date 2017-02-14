// calculator.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "stack.h"
#include "calc.h"
#define SMAX 80
#define NMAX 10
int ans;
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
    for (int n = 0; formula[n] != '\n'; n++)
    {
        next = formula[n + 1];
        if (isdigit(formula[n])) 
        {
            int m = 0;
            do {
                snum[m] = formula[n];
                m++;
                n++;
            } while (isdigit(formula[n]));
            snum[m] = '\0';
            n--;
            next = formula[n + 1];
            num.n = atoi(snum);
            Push(num, &number);
        }
        else if (issymbol(formula[n]))
        {
            sym.ch = formula[n];
            Analyze(sym, &number, &symbol);
        }
        else
            fprintf(stderr, "Illegal input.");
        while (next == '\n' && !StackIsEmpty(&symbol))
            Calculate(&number, &symbol);
    }
    printf("%d\n",ans);
    system("pause");
    return 0;
}

