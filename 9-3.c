#include<stdio.h>
void hanshu(char ch,int a,int b);
int main()
{
    char input;
    int times,lines;
    printf("please input a character:");
    scanf("%c",&input);
    printf("please enter a integer :");
    scanf("%d",&times);
    printf("please enter another integer ");
    scanf("%d",&lines);
    hanshu(input,times,lines);
    return 0;
}

hanshu(char ch,int a,int b)
{
    int loop_1,loop_2;
    for(loop_1=0;loop_1<b;loop_1++){
        for(loop_2=0;loop_2<a;loop_2++)
            putchar(ch);
        printf("\n");
        }
}
