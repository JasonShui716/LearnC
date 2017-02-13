#pragma once
typedef char Item;
typedef struct node {
    Item item;
    struct node *next;
}Node;

typedef struct stack {
    Node *top;
    int size;
}Stack;

void InitializeStack(Stack *pStack);
bool StackIsEmpty(const Stack *pStack);
bool StackIsFull(const Stack *pStack);
bool GetTop(Item *item, Stack *pStack);
bool Push(Item item, Stack *pStack);
bool Pop(Item *item, Stack *pStack);
