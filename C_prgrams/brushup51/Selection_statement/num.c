//WAP to check whether Number is positive or negative or ZERO.
#include<stdio.h>
int main()
{
int num;
printf("\n enter the number");
scanf("%d",&num);
if(num>0)
printf("\n %d is positive",num);
if(num<0)
printf("\n %d is negative",num);
if(num==0)
printf("\n %d is equal to 0",num);
return 0;
}
