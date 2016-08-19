#include <stdio.h>
int main()
{
    int input;
    int ji_tt,ou_tt,total,ji_ct,ou_ct,counter;
    ji_tt=ou_tt=total=ji_ct=ou_ct=counter=0;
    scanf("%d",&input);
    while(1)
        {
        if(input!=0)
        {
            counter++;
            total=+input;
                switch(input%2)
                {
                    case 0:
                    ji_ct++;
                    ji_tt=+input;
                    break;
                    case 1:
                    ou_ct++;
                    ou_tt=+input;
                    break;
                }
            }
     if(input==0)
            break;
    }
    printf("ou shu you %d ge,gong ji %d,ping jun wei %d\nji shu you %d ge, gong ji %d,ping jun wei %d.\n"
            "gong you %d ge shu ,zong ji %d,ping jun wei %d\n",ou_ct,ou_tt,ou_tt/ou_ct,ji_ct,ji_tt,ji_tt/ji_ct,counter,total,total/counter);
    return 0;
}
