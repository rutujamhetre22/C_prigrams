//WAP to compare two strings using strcmp ().

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100], b[100];    
    printf("Enter the first string\n");    
    scanf("%s",&a);    

    printf("Enter the second string\n");    
        scanf("%s",&b);    
    
    if( strcmp(a,b) == 0 )
        printf("strings are equal.\n");
    else
        printf("strings are not equal.\n");
        return 0;
}
