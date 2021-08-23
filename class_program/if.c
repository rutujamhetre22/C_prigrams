//if else ladder
#include<stdio.h>
int main()
{
int x,y;

printf("\n enter the coordinate of the circle:");
scanf("%d%d",&x,&y);
if(x>y && y>0)
printf("\n point (%d,%d) is lies on first quadrant",x,y);
else if(x<y && y>0)
printf("\n point (%d,%d) is lies on secand quadrant",x,y);
else if(x<y && y>0)
printf("\n point (%d,%d) is lies on secand quadrant",x,y);
else if(x<y && y<0)
printf("\n point (%d,%d) is lies on third quadrant",x,y);
else if(x>y && y<0)
printf("\n point (%d,%d) is lies on secand quadrant",x,y);
else if(x==y && y!=0)
printf("\n point (%d,%d) is lies on y-axis",x,y);
else if(x!=y && y==0)
printf("\n point (%d,%d) is lies on y-axis",x,y);


return 0;
}
