//Create a structure Employee. Accept data for 5 employees and display it.
#include<stdio.h>
#include<stdlib.h>
typedef struct {
char name [30];
int id;
int salary;
}employee;

int main()
{
int i, n=5;
employee employees[5];
printf("enter %d empliyee details \n\n",n);
scanf("%d",&n);

 for(i==0;i<n;i++){
 printf("Employee %d:- \n",i+1);
printf("name:");
scanf("%s",&employees[i].name);
printf("id:");
scanf("%d",&employees[i].id);
printf("salary");
scanf("%d",&employees[i].salary);
printf("\n");
}

 for(i==0;i<n;i++)
{
printf("name\t:");
printf("%s\n",employees[i].name);

printf("id\t:");
printf("%d\n",employees[i].id);

printf("name\t:");
printf("%d\n",employees[i].salary);
printf("\n");
}
return 0;
}
