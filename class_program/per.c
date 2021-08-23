/*WAP a program to accept Percentage from user and check the GRADE
A. Above 70% - Grade A
B. Between 60% to 70% - Grade B+.
C. Between 45% to 60% - Grade B.
D. Between 35% to 45% - Grade C.
E. Less than 35% - Fail
6.*/
#include<stdio.h>
int main()
{
float per;
printf("\n enter the percentage");
scanf("%f ,&per);
{
if(per >=70)
printf("\n grade A");
 
 if(per <=70 && per >=60)
printf("\n grade A");
 
return 0;
}
}
