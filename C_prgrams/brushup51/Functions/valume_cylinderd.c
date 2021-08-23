/*WAP to demonstrate all four categories of functions for volume of the cylinder
(volume of cylinder: 3.14*r*r*h)
Function with parameters with return value.*/
#include<stdio.h>
int main()
{

int r,h,cylinder;
printf("\n enter the value of r and h");
scanf("%d%d",&r,&h);
cylinder=3.14*r*r*h;
printf("\n the value of cylinder is %d",cylinder);
}
int cylinder (int r,int h)

{
int cylinder;
cylinder=3.14*r*r*h;
return 0;
}
