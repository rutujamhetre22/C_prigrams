//WAP to accept a number from user and find out sum of even digits from that given number.
#include<stdio.h>
int main()
{
int m,n,sum=0;
printf("enter the numbners");
scanf("%d",&m);
while(m>0)
{
n=m%10;
if(n%2==0)
{
sum=sum+n;
}
m=m/10;
}
printf("the sum of all even digits=%d",sum);
return 0;
}
