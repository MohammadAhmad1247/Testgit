#include <stdio.h>
int main()
{
int b,e,i,y, square=1;
printf ("enter base:");
scanf("%d", &b);
printf("enter exponent:");
scanf("%d", &e);
for (i=1;i<=e;i++)
{

square=square*b;
}
 printf("fitay mu:%d",square);

getchar();
getchar();
}



