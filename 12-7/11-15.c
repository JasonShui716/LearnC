#include<stdio.h>
#include<ctype.h>
int main(int argc, char *argv[])

{

char ch;

if (argv[1][0] == '-') //注意argv[0]是EXE的路径，所以参数是argv[1]、argv[2]……

if (argv[1][1] == 'u')

while(( ch=getchar() ) != EOF) 
	putchar( toupper(ch) );

else if (argv[1][1] == 'l')

while(( ch=getchar() ) != EOF) putchar( tolower(ch) );

else if (argv[1][1] == 'p')

while(( ch=getchar() ) != EOF) putchar(ch);

return 0;

} 