/*WAP to demonstrate all four categories of functions for volume of the cylinder
(volume of cylinder: 3.14*r*r*h)
a) Function without parameters without return value.*/
#include<stdio.h>
int main()

{
cylinder();
}
int cylinder()
{
int r,h;
float cylinder;
printf("\n enter the value of r and h\n ");
scanf("%d%d",&r,&h);
cylinder=3.14*r*r*h;
printf("the valume of cylindr is %f",cylinder);
return 0;
}
