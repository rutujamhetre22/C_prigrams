//WAP to find largest of 2 numbers using conditional operator
#include<stdio.h>
int main()
{
int a,b;
printf("enter two numbers");
scanf("%d%d",&a,&b);
a>b?printf("\n %d is largest numbers",a) : printf("\n %d largest number ",b);
return 0;
}

