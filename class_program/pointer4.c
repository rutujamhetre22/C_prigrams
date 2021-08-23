#include<stdio.h>
int main()
{
int a=10;
int *p=&a;
int**q;
int***r;
q=&p;
r=&q;
printf("\n *p=%d",*p);
printf("\n **q=%d",**q);
printf("\n **r=%d",***r);
return 0;
}
