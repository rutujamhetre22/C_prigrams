//WAP to find whether a point lies in 1st,2nd, x-axis, y-axis or origin
/*x>0Y>0 :1
x<0y>0 :2
x<0Y<0 :3
x>0y>0 :4
x==0y!=0 : y-axis
x!=0y==0 : x-axis
x==0y==0 origin*/
#include<stdio.h>
int main()
{
int x,y;
printf("\n enter the values of X and y:");
scanf("%d%d",&x,&y);
if(x>0&&y>0)
printf("\n point (%d,%d) is firts quadrant",x,y);
if(x<0&&y>0);
printf("\n point (%d,%d) is secand  quadrant",x,y);
if(x<0&&y<0)
printf("\n point (%d,%d) is third quadrant", x,y);
if(x>0&&y<0)
printf("\n point (%d,%d) is fourt quadrant", x,y);
if(x==0&&y!=0)
printf("\n point (%d,%d) is y-axis",x,y);
if(x!=0&&y==0)
printf("\n point(%d,%d) is x-axis", x,y);
if(x==0&&y==0)
printf("\n point(%d,%d) is origin", x,y);
return 0;
}
