/*WAP to demonstrate all four categories of functions for volume of the cylinder
(volume of cylinder: 3.14*r*r*h)
Function with parameter without return value.*/
#include<stdio.h>
int main()
{
int r,h;
printf("enter the value of r and h:");
scanf("%d%d",&r,&h);
valume_cylinder(r,h);

}

int valume_cylinder(int r,int h)
{
int valume_cylinder;
valume_cylinder=3.14*r*r*h;
printf("the value of cylinder is %d",valume_cylinder);
}
