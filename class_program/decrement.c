//WAP program decreament of numbers
#include<stdio.h>
int main()
{
int a;
printf("\n enter the value of a\n");
scanf("%d",&a);
a--;
{
printf("post decrement %d\n",a);
}
--a;
{
printf("pre decrement %d\n",a);
}
return 0;
}
