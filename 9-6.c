#include<stdio.h>
#include<ctype.h>
int chuli(char ch);
int main()
{
    char  input;
    int loca;
    while((input=getchar())!=EOF){
        loca=chuli(input);
        if(loca==-1)
            printf("\nn");
        else
            printf("\ny,the location is %d",loca);
    }
    return 0;
}
int chuli(char ch)
{
    int location;
    if(isupper(ch))
        location=(int)ch-64;
    else if(islower(ch))
        location=(int)ch-96;
    else
        location=-1;
    return location;

}
