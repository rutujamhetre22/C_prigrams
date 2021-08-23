//WAP to calculate average marks of a 10 students.
#include<stdio.h>
int main()
{
int a[10],i,sum=0;
float avg;
printf("enter the 10 numbewrs");
for(i=0;i<=9;i++)
scanf("%d",&a[i]);
for(i=0;i<=9;i++)
sum=sum+a[i];
avg=sum/9.0;
printf("%f is average",avg);
return 0;
}
