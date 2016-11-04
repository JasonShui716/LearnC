char metric1[]="kilometers";
char metric2[]="liters";
char us1[]="miles";
char us2[]="gallons";
char end1[]="liters per 100 km";
char end2[]="miles per gallon";
char *mode1,*mode2,*end;
float dis,fuel,endvalue;
void set_mode(int m)
{
    switch(m)
    {
        case 0:
        mode1=metric1;
        mode2=metric2;
        end=end1;
        break;
        case 1:
        mode1=us1;
        mode2=us2;
        end=end2;
        break;
        default:
        break;
    }
}
void get_info(void)
{
    printf("Enter distance traveled in %s:",mode1);
    scanf("%f",&dis);
    printf("Enter fuel consumed in %s:",mode2);
    scanf("%f",&fuel);
    if(*end==*end1)
        endvalue=fuel*100/dis;
    else
        endvalue=dis/fuel;
}
void show_info(void)
{
    printf("Fuel consumption is %.2f %s.\n",endvalue,end);
}