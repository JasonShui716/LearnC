#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

static void CopyToNode(Item item, Node *pNode)
{
	pNode->item = item;
}

void InitializeList(List *pList)
{
	*pList = NULL;
}

bool ListIsEmpty(const List *pList)
{
	if (*pList == NULL)
		return true;
	else
		return false;
}

bool ListIsFull(const List *pList)
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

int ListItemCount(const List *pList)
{
	int count = 0;
	Node *pNode = *pList;
	while (pNode != NULL)
	{
		count++;
		pNode = pNode->next;
	}
	return count;
}

bool AddItem(Item item, List *pList)
{
	Node *pnew;
	Node *scan = *pList;
	pnew = (Node *)malloc(sizeof(Node));
	if (pnew == NULL)
		return false;
	CopyToNode(item, pnew);
	pnew->next = NULL;
	if (scan == NULL)
	{
		*pList = pnew;
		pnew->prev = NULL;
	}
	else
	{
		while (scan->next != NULL)
			scan = scan->next;
		scan->next = pnew;
		pnew->prev = scan;
	}
	return true;
}

void Traverse(const List *pList, void(*pfun)(Item item))
{
	Node *front = *pList;
	Node *end = NULL;
	while (front != NULL)
	{
		(*pfun)(front->item);
		end = front;
		front = front->next;
	}
	puts("And the rotated list:");
	while (end != NULL)
	{
		(*pfun)(end->item);
		end = end->prev;
	}
}

void EmptyTheList(List *pList)
{
	Node *pSave;
	while (*pList != NULL)
	{
		pSave = (*pList)->next;
		free(*pList);
		*pList = pSave;
	}
}