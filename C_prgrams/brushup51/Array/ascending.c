#include<stdio.h>
int main()
{
int i,j,a,n,numbers[30];
printf("enter the value of n");
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<n;i++)
scanf("%d",&numbers[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(numbers[i]>numbers[j])
{
a=numbers[i];
numbers[i]=numbers[j];
numbers[j]=a;
}
}
}
printf("ascending order is \n");
for(i=0;i<n;i++)
printf("%d\n",numbers[i]);

return 0;
}
