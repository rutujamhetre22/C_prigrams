#include<stdio.h>
int main()
{
int choice;
int a,b,c;
printf("\n enter 1 for addtion");
printf("\n enter 2 for subtraction");
printf("\n enter 3 for multiplication");
printf("\n enter 4 for modulas");
scanf("%d",&choice);
printf("\n enter two numbers a and b");
scanf("%d%d",&a,&b);
switch(choice)
{
default:
printf("\n wrong operation selection");
break;
case 1:
printf("\n add(%d,%d)=%d",a,b,(a+b));
break;
case 2:
printf("\n sub(%d,%d)=%d",a,b,(a-b));
break;
case 3:
printf("\n multi(%d,%d)=%d",a,b,(a*b));
break;
case 4:
printf("\n mod(%d,%d)=%d",a,b,(a%b));
break;
}

return 0;
}
