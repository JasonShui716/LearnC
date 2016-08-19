#include <stdio.h>
#include <string.h>
int main()
{
    char wo[30];
    scanf("%s",wo);
    printf("size:%lu\n",sizeof wo);
    printf("length:%lu\n",strlen(wo));
    printf("%s",wo);
}
