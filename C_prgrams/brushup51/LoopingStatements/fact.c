//WAP factorial 
#include<stdio.h>
int main()
{
int i,n,f=1;
printf("\n enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
f=f*i;
printf("\n factorial of %d = %d",n,f);
return 0;
}

