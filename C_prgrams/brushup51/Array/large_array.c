//WAP to find greatest number in an array.
#include<stdio.h>
int main()
{
int a[6]={5,9,1,80,3,6};
int large,i;
large = a[0];
for(i=1;i<6;i++)
if(a[i]>large)
{
large = a[i];

}
printf("large %d\n",large);
return 0;
}
