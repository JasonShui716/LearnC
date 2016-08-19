#include <stdio.h>
int main()
{
    int input;
    int ji_tt,ou_tt,ji_ct,ou_ct;
    ji_tt=ou_tt=ji_ct=ou_ct=0;
    double ji_ave=0.0;
    double ou_ave=0.0;

    while (1)
    {
            scanf("%d",&input);
            if(input!=0)
            {
                switch(input%2)
                    {
                        case 1:
                        ji_ct++;
                        ji_tt+=input;
                        break;
                        case 0:
                        ou_ct++;
                        ou_tt+=input;
                        break;
                    }
            }
            if(input==0)
                break;
    }
    if(ji_ct!=0)
        ji_ave=ji_tt/ji_ct;
    if(ou_ct!=0)
        ou_ave=ou_tt/ou_ct;

    printf("ou=%d,ou_total=%d,ou_average=%.2f,ji=%d,ji_total=%d,ji_average=%.2f,",ou_ct,ou_tt,ou_ave,ji_ct,ji_tt,ji_ave);
    return 0;
}
