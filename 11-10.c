#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 100
#define NUMBER 5
char menu(void);
void ori(char *input[],int i);
void asc(char *input[],int i);
void s_len(char *input[],int i);/*string*/
void f_len(char *input[],int i);/*first*/
char deal(char *input[],int i);
void sort_n_print(char *ptt[],int length[],int i);
int main()
{
    int i,n;
    char *re;
    char choice;
    char input[NUMBER][SIZE];
    printf("Please input strings you want.Less than %d strings.\n",NUMBER);
    for(i=0;i<NUMBER||re==NULL;i++)
    {
        re=gets(input[i]);
    }
    char *ptt[i];
    for(n=0;n<i;n++)
    {
        ptt[n]=input[n];
    }
    do
    {
        choice=deal(ptt,i);
    }while(choice!='q');
    return 0; 
}    
char deal(char *input[],int i)
{
    char choice;
    choice=menu();
    switch(choice)
    {
        case 'a':
        ori(input,i);
        break;
        case 'b':
        asc(input,i);
        break;
        case 'c':
        s_len(input,i);
        break;
        case 'd':
        f_len(input,i);
        break;
        case 'q':
        break;
    }
    return choice;
}
        
char menu(void)
{
    char ch;
    printf("Please choose a mode as your output.\n");
    printf("a.The original strings.\nb.The strings sort by ASCII.\n");
    printf("c.The strings sort by length.\n");
    printf("d.The strings sort by the length of the first word.\nq.quit.\n");
    while(1)
    {
        scanf("%c",&ch);
        getchar();
        if(ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='q')
            break;
        else
            printf("Please choose your letter from a,b,c,d and q.");
    }
    return ch;
}

void ori(char *input[],int i)
{
    int n;
    for(n=0;n<i;n++)
    {
        puts(input[n]);
    }
}

void asc(char *input[],int i)
{
    /*xuan ze pai xu suan fa(selection sort)*/
    int n,seq;
    char *temp;
    char *ptt[i];
    for(n=0;n<i;n++)
    {
        ptt[n]=input[n];
    }
    for(n=0;n<i-1;n++)
    {
        for(seq=n+1;seq<i;seq++)
        {
            if(strcmp(ptt[n],ptt[seq])>0)
            {
                temp=ptt[n];
                ptt[n]=ptt[seq];
                ptt[seq]=temp;
            }
         }
    }
	for(n=0;n<i;n++)
	{
	    puts(ptt[n]);
	}
}

void s_len(char *input[],int i)
{
    int length[i];
    int n;
    char *ptt[i];
    for(n=0;n<i;n++)
    {
        ptt[n]=input[n];
        length[n]=strlen(ptt[n]);
    }
    sort_n_print(ptt,length,i);
}

void f_len(char *input[],int i)
{
    int length[i];
    int n,ch;
    char *ptt[i];
    for(n=0;n<i;n++)
    {
        ptt[n]=input[n];
        for(ch=0;ch<strlen(input[n]);ch++)
        {
            if(isspace(input[n][ch]))
                break;  
        }
        length[n]=ch;
    }
    sort_n_print(ptt,length,i);
}       

void sort_n_print(char *ptt[],int length[],int i)
{
    int n,seq;
    char *temp;
    int tmp;
    for(n=0;n<i-1;n++)
    {
        for(seq=n+1;seq<i;seq++)
        {
            if(length[n]>length[seq])
            {
                temp=ptt[n];
                tmp=length[n];
                ptt[n]=ptt[seq];
                length[n]=length[seq];
                ptt[seq]=temp;
                length[seq]=tmp;
            }
        }
    }
    for(n=0;n<i;n++)
    {
    	puts(ptt[n]);
    }
}