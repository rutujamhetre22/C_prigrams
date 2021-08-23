/*WAP using following menus-
Choice-1: Accept number and find out square and cube.
Choice-2: Check whether the given year is LEAP or not.
If user enters wrong choice appropriate message should get displayed.*/
//Choice-1: Accept number and find out square and cube.
#include<stdio.h>
int main()
{
int num,choice;
printf("\n enter the number");
scanf("%d",&num);
printf("enter your choice");
scanf("%d",&choice);
switch (choice)
{
case 1:
printf("\n square of the give number is %d",num*num);
break;
case 2:
printf("\n cupe of the give number is %d",num*num*num);
break;
default:
printf("enter your correct choice");
}
return 0;
}
