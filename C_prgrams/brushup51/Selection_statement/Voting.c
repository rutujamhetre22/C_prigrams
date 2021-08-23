//WAP to check whether a person is eligible for voting or not.
#include<stdio.h>
int main()
{
int age;
printf("Enterthe age");
scanf("%d",&age);
if(age>=18)
{
printf("\n%d eligible for voting",age);
}
if(age<18)
{
printf("\n%d not eligible for voting",age);
}
return 0;
}
