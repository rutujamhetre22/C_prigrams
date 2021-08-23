/*WAP to accept Cost Price from user and ask whether the user is a student or not. If the user
is student and cost price is greater than 500, give discount of 10% ELSE discount will be 5%. If
user is not student and cost price is greater 500 then give discount of 8% ELSE discount will be
2%. (Take all inputs from USER) */


#include<stdio.h>

void main()
{
int ch;
float cp,result;
printf("enter the cost price");
scanf("%f",&cp);
printf("are you a student tyoe 1 for yes and 0 for no");
scanf("%d",&ch);
if((ch==1) && (cp>500))
{
result =cp-(cp*10/100);
printf("price is %f",result);
}
else if((ch==1)&&(cp<500))
{
result =cp-(cp*5/100);
printf("price is %f",result);

}
else if((ch==0)&&(cp>500))
{
result=cp-((cp*8/100));
printf("price is%f",result);
}
else
{
result=cp-(cp*2/100);
printf("price is %f",result);
}
return 0;
}
