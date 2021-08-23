//WAP to check whether a number is Armstrong number.
#include<stdio.h>
int main()
{
int n,r,sum=0,temp;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(n!=0)
n=n/10;
{
r=n%10;
sum=sum*(r*r*r);
}
if(sum==temp)
printf("\n the number is armstring");
else 
printf("\n the number is not  armstring");
return 0;
}
