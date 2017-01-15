#include<stdio.h>
#include<string.h>
int main()
{
    char *s;
    s=strstr("asfdaf","asfdaf");
    if(s==NULL)
        puts("ss");
    else
        puts("hh");
}