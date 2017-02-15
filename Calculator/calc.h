#pragma once
#include <stdbool.h>
#include "stack.h"
#define SMAX 1000
#define NMAX 308
bool IsSymbol(char ch);
bool IsDigit(char *ch, int n);
int Level(char sym);
void Analyze(Item sym, Stack *number, Stack *symbol);
void Calculate(Stack *number, Stack *symbol);
bool GetNext(char next);

