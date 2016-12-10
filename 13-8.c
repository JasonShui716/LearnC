#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_s 100
#define MAX_n 10
char files[MAX_n][MAX_s];
int fileget()
{
    int num=0;
    do
    {
        printf("Please enter the #%d file name:",num+1);
        fgets(files[num],MAX_s,stdin);
        files[num][strlen(files[num])-1]='\0';
        num++;
    }while(*files[num-1]!='\0'&&num<10);
    return num;
}

int main()
{
    char ch;
    int n=0;
    int fnum;
    printf("Please enter an character:");
    scanf("%c",&ch);
    getchar();
    printf("Please enter the files you want to search in.Enter an empty line to stop.\n");
    printf("Most 10 files.\n");
    n=fileget();
    FILE *(fp[n]);
    for(fnum=0;fnum<n;fnum++)
    {
       int times=0;
       long count,last;
       char fch;
       if(files[fnum]=='\0')
        break;
       if((fp[fnum]=fopen(files[fnum],"r"))==NULL)
       {
           fprintf(stderr,"Can\'t open the file %s.\n",files[fnum]);
           exit(0);
       }
       fseek(fp[fnum],0L,SEEK_END);
       last=ftell(fp[fnum]);
       for(count=0L;count<=last;count++)
       {
           fseek(fp[fnum],count,SEEK_SET);
           fch=getc(fp[fnum]);
           if(fch==ch)
            times++;
       }
       printf("The number of character \'%c\' in #%d file %s : %d\n",ch,fnum+1,files[fnum],times);
    }
}
    