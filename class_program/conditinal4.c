//WAP to find the largest of 3 numbers using condisnal operator
#include<stdio.h>
int main()
{
int a,b,c;
printf("\n enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
a>b?
(a>c ? printf("\n %d is largest",a) : printf("\n %d is largest",c))
:
(b>c? printf("\n %d is largest",b) : printf("\n %d is largest",c));
return 0;
}
