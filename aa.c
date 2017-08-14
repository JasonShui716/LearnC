;;;;;;;;;;;//链表
#include<stdio.h>
#include<stdlib.h>

typedef struct node * Position;

Position Creat(void);
void Print(Position);
void Delete(int,Position);
void Insert(int,Position,Position);
Position Find(int,Position);
Position FindPrevious(int,Position);
void Deletechain(Position);
int IsEmpty(Position);
int IsLast(Position);
void Ps(void){printf("处理后\n");}
    
struct node
{
    int data;
    Position next;
};



int main()
{
    Position head;
    
    head=Creat();
    
    Print(head);

    Deletechain(head);
    
    return 0;
}

Position Creat(void)
{
    Position p1,p2,head;
    int i;
    
    head=0;
    
    for(i=1;i<=5;i++)
    {
        p1=malloc(sizeof(Position));
        p1->data=i;
        
        if(head==0)
        {
            head=p1;
            p2=head;
        }
        else{
            p2->next=p1;
            p2=p1;
        }
    }
    p1->next=NULL;
    
    return head;
}


void Print(Position head)              //打印链表
{
    Position p=head;
    printf("链表各个节点的数据为：\n");
    
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

Position Find(int x,Position head)
{
    Position p=head;
    
    while(p!=NULL&&p->data!=x)
        p=p->next;
        
    return p;
}

Position FindPrevious(int x,Position head)
{
    Position p=head;
    
    while(p->next!=NULL&&p->next->data!=x)
        p=p->next;
    
    return p;
}


void Delete(int x,Position head)        //没找到就什么也不做，找到了就删除
{                                           //如何删除首节点？
    Position p1,p2;
    
    p1=head;
    p2=head;
    
    while(p1->data!=x&&p1->next!=NULL)
    {
        p2=p1;
        p1=p1->next;
    }
    
    if(p1->data==x)
    {
        p2->next=p1->next;
        free(p1);
    }
    
}

void Insert(int x,Position head,Position p)   //向后插入
{
    Position insert;
    
    insert=(Position)malloc(sizeof(Position));
  
    
    insert->data=x;
    insert->next=p->next;
    p->next=insert;
 
}


void Deletechain(Position head)
{
    Position p=head,temp;
    
    head=NULL;
    
    while(p)
    {
        temp=p->next;
        free(p);
        p=temp;
    }
}


int IsEmpty(Position head)
{
    return head==NULL;
}


int IsLast(Position now_)
{
    return now_->next==NULL;
}
