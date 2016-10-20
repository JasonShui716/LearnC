#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 100
#define NUMBER 10
char menu(void);
void ori(char *input[],int i);
void asc(char *input[],int i);
void a_len(char *input[],int i);
void f_len(char *input[],int i);
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
        a_len(input,i);
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
    int n,seq;
    char *temp;
    