#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    char sentence[300];
    scanf("%s",&sentence);
    n=strlen(sentence)-1;
    printf("%d\n",n+1);
    for(m=n;m>=0;m--)
    {
        printf("%c",sentence[m]);
    }
}
