#include <stdio.h>
int main()
{
    char input;
    int ctr;
    input=getchar();
    while(input!='#')
    {
        if(input=='.')
            {
            putchar('!');
            ctr++;
            }
        else if(input=='!')
            {
            putchar('!');
            putchar('!');
            ctr++;
            }
        else
            putchar(input);
    }
    printf("\n ci shu=%d",ctr);

}
