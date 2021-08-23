/*WAP to find out perimeter of the Square and Rectangle.
Perimeter of square=sum of all four sides
Perimeter of Rectangle=2*(l+b)*/
#include<stdio.h>
int main()
{
int a;
int l,b,sp,rp;
printf("\nenter the side of square");
scanf("%d",&a);
printf("\n enter the length and width of rectangle");
scanf("%l%b",&l,&b);

sp=a+a+a+a;
rp=2*(l+b);
printf("\n perrimetre of sqaure =%d",sp);
printf("\n perimetre of rectangle =%d",rp);
return 0;
}
