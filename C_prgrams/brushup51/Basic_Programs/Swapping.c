// Accept two numbers and perform swapping with third variable.
#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter the first Number :/n");
scanf("%d",&a);
printf("enter the secand number :/n");
scanf("%d",&b);
temp = a;
a = b;
b = temp;
printf("/nafter swapping a :=%d\n",a);
printf("/nafter swapping b :=%d\n",b);

return 0;
}
