#include <stdio.h>
int main()
{
    char  input ;
    int counter=0;
    while((input=getchar())!='#')
    {
        counter++;
        if(counter%8!=0)
        {
            printf("%d ",(int)input);
        }
        else
            printf("%d\n",(int)input);
    }
}
