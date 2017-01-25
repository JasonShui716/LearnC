#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>
#define TSIZE 45
typedef struct film {
	char title[TSIZE];
	int rating;
}Item;

typedef struct node {
	Item item;
	struct node *next;
}Node;

typedef struct list {
	Node *head;
	Node *tail;
	int size;
}List;

void InitializeList(List *pList);
bool ListIsEmpty(const List *pList);
bool ListIsFull(const List *pList);
int ListItemCount(const List *pList);
bool AddItem(Item item, List *pList);
void Traverse(const List *pList, void(*pfun)(Item item));
void EmptyTheList(List *pList);
#endif