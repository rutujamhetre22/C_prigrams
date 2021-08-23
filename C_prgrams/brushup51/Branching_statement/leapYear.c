#include<stdio.h>
int main()
{
int year;
printf("enter the year :\n");
scanf("%d",&year);
if(year %4!=0)
{
printf("\n%d is not leap yaer",year);
}
if(year %4==0)
{
printf("\n%d is leap year",year);
}
return 0;
}
