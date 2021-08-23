#include<stdio.h>
int main()
{
int a=10,b=12,c=14;
int*p=&a;
printf("\n *p=%d",*p);
int*q=&b;
printf("\n *p=%d",*q);
int*r=&c;
printf("\n *p=%d",*r);
}
