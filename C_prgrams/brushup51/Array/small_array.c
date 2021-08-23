//WAP to find greatest number in an array.
#include<stdio.h>
int main()
{
int a[6]={5,9,1,80,3,6};
int small,i;
small = a[0];
for(i=1;i<6;i++)
if(a[i]<small)
{
small = a[i];

}
printf("samll %d\n",small);
return 0;
}
