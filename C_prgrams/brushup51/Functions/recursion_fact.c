#include<stdio.h>
int findfactorial(int);
int main()
{ 
int n,f;
printf("\n recursion: find the factorial of a number :\n");
printf("\n input a number :");
scanf("%d",&n);
f=findfactorial(n);
printf("the factorial of %d is: %d\n\n",n,f);
return 0;
}
int findfactorial(int n)
{
if(n==1)
return 1;
else
return(n*findfactorial(n-1));
}
