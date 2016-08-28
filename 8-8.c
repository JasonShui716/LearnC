#include<stdio.h>
char choice(void);
char getfirst(void);
double correct(void);
int main()
{
    double first,second;
    char choic;
    while(1)
    {
        printf("Enter the operation of your choice:\n");
        printf("a.add                s.subtract\n");
        printf("m.multiply           d.divide\n");
        printf("q.quit\n");
        choic=choice();
        if(choic=='q')
            break;
        else{
        printf("Enter first number:");
        first=correct();
        printf("Enter second number:");
        second=correct();
        switch(choic)
        {
            case 'a':
            printf("%f + %f =%f\n",first,second,first+second);
            break;
            case 's':
            printf("%f - %f =%f\n",first,second,first-second);
            break;
            case 'm':
            printf("%f * %f = %f\n",first,second,first*second);
            break;
            case 'd':
            while(1)
            {
                if(second==0){
                    printf("Enter a number other than 0");
                    second=correct();
                    }
                else
                    break;
            }
            printf("%f / %f = %f\n",first,second,first / second);
            break;
        }
    }
    }
}
    char choice(void)
    {
        char ch;
        while(1){
        ch=getfirst();
        if(ch=='a'||ch=='s'||ch=='m'||ch=='d'||ch=='q')
            break;
        else
            printf("Please choose a letter from a ,s, m, d, q.");
        }
        return ch;
}
    char getfirst(void)
    {
        char cha;
        cha=getchar();
        while(getchar()!='\n');
        return cha;
    }
    double correct(void)
    {
        double dou;
        char input;
        while((scanf("%f",&dou))!=1)
            {
                while((input=getchar())!='\n')
                    putchar(input);
                printf(" is not an correct input.\nPlease enter again.");
            }
        return dou;
    }
