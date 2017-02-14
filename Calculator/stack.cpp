#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

static void CopyToNode(Item item, Node *pNode)
{
    pNode->item = item;
}

void InitializeStack(Stack *pStack) 
{
   pStack->top = NULL;
   pStack->size = 0;
}

bool StackIsEmpty(const Stack *pStack)
{
    if (pStack->size == 0)
        return true;
    else
        return false;
}

bool StackIsFull(const Stack *pStack)
{
    Node *pt;
    bool full;
    pt = (Node *)malloc(sizeof(Node));
    if (pt == NULL)
        full = true;
    else
        full = false;
    free(pt);
    return full;
}

bool GetTop(Item *item, Stack *pStack)
{
    if (StackIsEmpty(pStack))
        return false;
    *item = pStack->top->item;
    return true;
}

bool Push(Item item, Stack *pStack)
{
    Node *pNode;
    if (StackIsFull(pStack))
        return false;
    pNode = (Node *)malloc(sizeof(Node));
    if (pNode == NULL)
    {
        fprintf(stderr, "Error.");
        exit(1);
    }
    CopyToNode(item, pNode);
    if (StackIsEmpty(pStack))
        pNode->next = NULL;
    else 
        pNode->next = pStack->top;
    pStack->top = pNode;
    ++pStack->size;
    return true;
}

bool Pop(Item *item, Stack *pStack)
{
    Node *pt = pStack->top;
    if (StackIsEmpty(pStack))
        return false;
    GetTop(item, pStack);
    pStack->top = pStack->top->next;
    --pStack->size;
    free(pt);
    return true; 
}