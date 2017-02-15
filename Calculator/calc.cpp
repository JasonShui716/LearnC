#include "stdafx.h"
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include "calc.h"
extern char next;
bool IsSymbol(char ch)
{
    if (strchr("+-*/()", ch))
        return true;
    return false;
}

bool IsDigit(char *ch, int n)
{
    if (isdigit(ch[n]) || ch[n] == '.')
        return true;
    if ((ch[n] == '-' && (n == 0 || (ch[n - 1] == '(') && isdigit(ch[n + 1]))))
        return true;
    return false;
}

int Level(char sym)
{
    if (sym == '+' || sym == '-')
        return 1;
    if (sym == '*' || sym == '/')
        return 2;
    if (sym == '(')
        return 3;
    if (sym == ')')
        return 0;
}

bool GetNext(char next)
{
    if (IsSymbol(next))
        return true;
    return false;
}

void Calculate(Stack *number, Stack *symbol)
{
    Item num1, num2, sym, answer;
    double n1, n2;
    extern double ans;
    Pop(&num2, number);
    Pop(&num1, number);
    Pop(&sym, symbol);
    n1 = num1.n;
    n2 = num2.n;
    switch (sym.ch)
    {
    case '+':
        ans = n1 + n2;
        break;
    case '-':
        ans = n1 - n2;
        break;
    case '*':
        ans = n1 * n2;
        break;
    case '/':
        ans = n1 / n2;
        break;
    }
    answer.n = ans;
    Push(answer, number);
}

void Analyze(Item sym, Stack *number, Stack *symbol)
{
    Item topsymbol, trash;
    if (StackIsEmpty(symbol))
    {
        Push(sym, symbol);
        return;
    }
    GetTop(&topsymbol, symbol);
    if (topsymbol.ch == '('&&sym.ch == ')')
    {
        Push(sym, symbol);
        Pop(&trash, symbol);
        Pop(&trash, symbol);
        if (GetNext(next))
            return;
        Calculate(number, symbol);
        return;
    }
    if (Level(sym.ch) > Level(topsymbol.ch)||topsymbol.ch == '(')
    {
        Push(sym, symbol);
        return;
    }
    Calculate(number, symbol);
    Analyze(sym, number, symbol);
}