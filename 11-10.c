#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 100
#define NUMBER 10
char menu(void);
void ori(char *input[],int i);
void asc(char *input[],int i);
void s_len(char *input[],int i);/*string*/
void f_len(char *input[],int i);/*first*/
void deal(char *ch,int i);
int main()
{
    int i;
    char *re;
    char *choice;
    char input[NUMBER][SIZE];
    printf("Please input strings you want.Less than 10 strings.");
    for(i=0;i<NUMBER||re==NULL;i++)
    {
        re=gets(input[i]);
    }
    do
    {
        deal(choice,i);
    }while((*choice)!='q');
    return 0; 
}    
void deal(char *ch,int i)
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
        case 'c';
        s_len(input,i);
        break;
        case 'd':
        f_len(input,i);
        break;
        case 'q':
        break;
    }
    ch=&choice;
}
        
char menu(void)
{
    char ch;
    printf("Please choose a mode as your output.");
    printf("a.The original strings.\nb.The strings sort by ASCII.\n");
    printf("c.The strings sort by length.\n");
    printf("d.The strings sort by the length of the first word.\nq.quit.");
    while(1)
    {
        ch=getchar();
        ch=tolower(ch);
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
    for(n=0;n<i-1;n++)
    {
        for(seq=n+1;seq<i;seq++)
        {
            if(strcmp(input[n],input[seq])>0)
            {
                temp=input[n];
                input[n]=input[seq];
                input[seq]=temp;
            }
         }
    }
}

void s_len(char *input[],int i)
{
    int length[i];
    int n,seq;
    char *temp;
    for(n=0;n<i;n++)
    {
        length[n]=strlen(input[n]);
    }
    for(n=0;n<i-1;n++)
    {
        for(seq=n+1;seq<i;seq++)
        {
            if(length[n]>length[seq])
            {
                temp=input[n];
                input[n]=input[seq];
                input[seq]=temp;
            }
        }
    }
}

void f_len(char *input[],int i)
{
    int length[i];
    int n,ch,seq;
    char *temp;
    for(n=0;n<i;n++)
    {
        for(ch=0;ch<strlen(input[i]);ch++)
        {
            if(isspace(input[i][ch]))
                break;
        }
    }
    for(n=0;n<i-1;n++)
    {
        for(seq=n+1;seq<i;seq++)
        {
            if(length[n]>length[seq])
            {
                temp=input[n];
                input[n]=input[seq];
                input[seq]=temp;
            }
        }
    }
}
       