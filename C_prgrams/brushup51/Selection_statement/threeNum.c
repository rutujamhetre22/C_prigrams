//Accept three numbers from user and find out largest number among three and also find out
//whether that three numbers are equal or not.(else if ladder

#include<stdio.h>
int main()
{
int a,b,c;
printf("\n enter three numbers");
scanf("%d%d%d",&a,&b,&b);
if(a>b)
{
 if(a>c)
printf("\n %d is gereatest number",a);
else
printf("\n %d is greatest number", c);
}


else{
 if(b>c)
printf("\n %d is greatest number",b);
else
printf("\n %d is greatest number",c);
}
return 0;
}
