// WAP to check whether a number is even or odd
#include<stdio.h>
int main()
{
int num;
printf("\n enter the number:");
scanf("%d",&num);
if(num%2==0)
{
printf("\n %dis even number",num);
}
if(num%2!=0)
{
printf("\n %d is odd number",num);
}
return 0;
}
