// WAP to find whether a point lies inside,outside on or is center, if the circle is std circle
/* x*x+y*y==r*r lies on circle
   x*x+y*y>r*r outside on circle
   x*x+y*y<r*r inside on circle
   (x==0)(y==0) is center of the circle*/
#include<stdio.h>
int main()
{
int x,y,r;
int dr = x*x+y*y;
int rr = r*r;
printf("\n enter the x and y:");
scanf("%d%d",&x,&y );
printf("\n enter the radius of circle:");
scanf("%d%d",&r);
if(dr==rr)
printf("\n point(%d%d) is lies on circle",x,y);
if(dr>rr)
printf("\n point(%d%d) is outside on the circle",x,y); 
if(dr<rr)
printf("\n point(%d%d) is inside  on the circle",x,y); 
if(x==0)
if(y==0)
printf("\n point(%d%d) is center  on the circle",x,y); 
return 0;
}
