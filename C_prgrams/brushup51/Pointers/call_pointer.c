/*Write a program that declares a double, an int, and char variables. Next declare and initialize
a pointer to each of the three variables. Your program should then print the address of, and
value stored in.*/
#include<stdio.h>
int main()
{
int a=10,*p;
double b=3.14,*q;
char c='s',*r;
p=&a;
q=&b;
r=&c;
printf("\n address =%p and value=%d",p,*p);
printf("\n address =%p and value=%1f",q,*q);
printf("\n address =%p and value=%c",r,*r);
return 0;
}
