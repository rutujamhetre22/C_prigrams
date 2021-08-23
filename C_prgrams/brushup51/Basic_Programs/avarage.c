//WAP to accept five subject marks and find out total and average of the marks.
#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5;
float avg,total;
printf("\n enter 5 subject marks");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
total = m1+m2+m3+m4+m5;
avg = total/5;
printf("\ntotal marks of subject =%f",total);
printf("\naverage marks of subject =%f",avg);
return 0;
}
