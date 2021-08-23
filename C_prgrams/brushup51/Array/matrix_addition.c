// Write a C program to compute sum of diagonal elements of a 2D array of size 3*3
#include<stdio.h>
int main()
{
int a[3][3],b[3][3],c[3][3];
int i,j;
printf("\n enter 3*3 matrix A");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i] [j]);
printf("\n enter 3*3 matrix B");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&b[i] [j]);

printf("\n sum of");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
c[i] [j]=a[i] [j] + b[i] [j];
printf("\n addition f matrix is \n ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d  ",c[i] [j]);
printf("\n");
}
return 0;
}
