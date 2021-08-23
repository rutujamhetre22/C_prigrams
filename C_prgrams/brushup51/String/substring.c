//Find a substring in a string.
#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
int i,j,k;
printf("Enter the first string:");
scanf("%s",&str1);
printf("Enter the secand string:");
scanf("%s",&str2);
for(i=0;str2[i]!='\0';i++);
for(k=0,j=0;str1[k]!='\0' && str2[k]!='\0' ;i++)
{
if(str1[k]==str2[j])
{
j++;
}
else
{
j=0;
}
}
if(j==1)
{
printf("substring found at postion %d",k-j+1);
}
else
{
printf("substring are not found ");
}
return 0;
}


