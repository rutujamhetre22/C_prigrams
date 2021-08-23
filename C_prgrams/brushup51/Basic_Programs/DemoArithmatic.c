//WAP to demonstrate arithmetic operation on two integer numbers.
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of a & b \n");
scanf("%d%d",&a,&b);
c = a+b;
printf("sum of : =%d\n",c);
c = a-b;
printf("subtraction of : = %d\n",c);
c = a*b;
printf("mutiplication = %d\n",c);
c = a/b;
printf("division = %d\n",c);
c = a%b;
printf("remainder = %d",c);
return 0;
}
