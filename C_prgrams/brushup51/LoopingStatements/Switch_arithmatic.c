/*WAP using switch case for arithmetic operation on two numbers, if user enters an operator as
choice, the appropriate operation should perform.
If user enters wrong choice appropriate message should get displayed.
i.e. + is for addition
-
is for subtraction*/
#include<stdio.h>
int main()
{
int a,b;
int operation;
printf("\n enter the two numbers");
scanf("%d%d",&a,&b);
printf("\n enter your choice");
scanf("%d",&operation);
switch(operation)
{
case 1 :
printf("\n the addition of the give numbers is:%d",a+b);
break;
case 2 :
printf("\n the subtraction of the give numbers is :%d",a-b);
break;
case 3 :
printf("\n the multipliction of the give numbers is :%d",a*b);
break;
case 4 :
printf("\n the division of the give numbers is :%d",a/b);
break;
case 5 :
printf("\n the remainder  of the give numbers is :%d",a%b);
break;
default :
printf("\n enter your correct choice");
return 0;
}
}
