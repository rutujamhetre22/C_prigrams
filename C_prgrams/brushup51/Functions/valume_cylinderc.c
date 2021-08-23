/* WAP to demonstrate all four categories of functions for volume of the cylinder
(volume of cylinder: 3.14*r*r*h)
Function without parameter with return value.*/
#include<stdio.h>
int cylinder();
int main()
{
int r,h;
printf("enter the value of r and h:");
scanf("%d%d",&r,&h);
return r,h;
}
int cylinder(r,h)
{
int cylinder;
cylinder=3.14*r*r*h;
printf("\n the value of cylinder is %d",cylinder);
return cylinder;
}
