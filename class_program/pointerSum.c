//Demonstrate addition of two floating type numbers by using call by address.
#include<stdio.h>
int main()
{
int a,b,sum;
int *p
int*q;
printf("\n enter two numbers");
scanf("%d%d",&a,&b);
a=*p;
b=*q;
sum=*p+*q;
printf("\n sum of %d",sum);
return 0;
}
