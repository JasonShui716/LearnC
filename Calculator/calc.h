#pragma once
#include <stdbool.h>
#include "stack.h"
bool issymbol(char ch);
int Level(char sym);
void Analyze(Item sym, Stack *number, Stack *symbol);
void Calculate(Stack *number, Stack *symbol);
int ToDigit(char num);
bool GetNext(char next);
