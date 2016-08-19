#include<stdio.h>
#include<ctype.h>

int main(void)
{
     char input;
     int sp_ct = 0;
     int nl_ct = 0;
     int other = 0;

     while ((input = getchar()) != '#')
     {
         if (isblank(input))
             sp_ct++;
         else if (input == '\n')
             nl_ct++;
         else
             other++;
     }
     printf("spaces: %d, newlines: %d, others: %d\n", sp_ct, nl_ct, other);

    return 0;
}
