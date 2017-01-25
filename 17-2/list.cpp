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
	pList->tail = NULL;
	pList->head = NULL;
	pList->size = 0;
}

bool ListIsEmpty(const List *pList)
{
	if (pList->size == 0 && pList->head == NULL)
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
	return pList->size;
}

bool AddItem(Item item, List *pList)
{
	Node *pnew;
	pnew = (Node *)malloc(sizeof(Node));
	if (pnew == NULL)
		return false;
	CopyToNode(item, pnew);
	if (pList->head != NULL)
		pList->tail->next = pnew;
	pnew->next = NULL;
	if (pList->head == NULL)
		pList->head = pnew;
	pList->tail = pnew;
	++pList->size;
	return true;
}

void Traverse(const List *pList, void(*pfun)(Item item))
{
	Node *pnode = pList->head;
	while (pnode != NULL)
	{
		(*pfun)(pnode->item);
		pnode = pnode->next;
	}
}

void EmptyTheList(List *pList)
{
	Node *pSave;
	int n = 0;
	while (pList->head != NULL)
	{
		pSave = pList->head->next;
		free(pList->head);
		pList->head = pSave;
		printf("\n%d ptr has been free.", ++n);
	}
	puts("");
}
