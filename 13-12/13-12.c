#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define LINE_MAX 60
#define NUM_MAX 31
int main()
{
    FILE *num,*pic;
    char loader[LINE_MAX];
    char numbers[NUM_MAX];
    if((num=fopen("input.txt","r"))==NULL)
    {
        fprintf(stderr,"can't find the file \"input.txt\".");
        exit(1);
    }
    pic=fopen("picture.txt","w");
    while(fgets(loader,LINE_MAX,num))
    {
        int m,n;
        for(m=0,n=0;n<LINE_MAX;n++)
        {
            if(isblank(loader[n]))
                continue;
            numbers[m++]=loader[n];
        }
        for(m=0;m<NUM_MAX-1;m++)
        {
            switch(numbers[m])
            {
                case '0':
                numbers[m]=' ';
                break;
                case '1':
                numbers[m]='.';
                break;
                case '2':
                numbers[m]='\'';
                break;
                case '3':
                numbers[m]=':';
                break;
                case '4':
                numbers[m]='~';
                break;
                case '5':
                numbers[m]='^';
                break;
                case '6':
                numbers[m]='*';
                break;
                case '7':
                numbers[m]='=';
                break;
                case '8':
                numbers[m]='%';
                break;
                case '9':
                numbers[m]='#';
                break;
            }
        }
        printf("%s",numbers);
        fputs(numbers,pic);
    }
}
