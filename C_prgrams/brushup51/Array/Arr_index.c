//Write a program to search particular value in an array and return the index number where it is
//located.
#include<stdio.h>
#define size 5
int main()
{
int i,num;
int a[]={12,13,11,14,15};
printf("enter the numbers  for serching");
scanf("%d",&num);
for(i=0;i<size;i++)
{
if(a[i]==num)
{
printf("\n the index numbers of %d is %d", num,i);
}
else
printf("the given numbers is not present:");
exit(0);
}

 return 0;
}
