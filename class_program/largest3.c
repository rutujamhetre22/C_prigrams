//WAP to finf largest in 3 numbers 
#include<stdio.h>
int main()
{
int a,b,c;
printf("\n enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
   {
   if(a>c)
    printf("\n %d is greatest number",a);
    else
    printf("\n %d is greatest number",c);
  }
else
  {
    if(b>c)
    printf("\n %d is greatest number",b);
    else
    printf("\n %d is greatest number",c);
  }
return 0;
}
