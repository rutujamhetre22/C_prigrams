/*WAP to copy one structure into another. Use concept of nested structures.
a. Create Employee structure having attributes as id, name and basic salary.
b. Create Date structure having attributes as dd,mm,yy.
c. Nest Date structure into Employee as to display joining date of employee.*/
#include<stdio.h>
struct employee
{
int id;
char name[10];
float salary;
struct  date
{
int dd;
int mm;
int yyyy;
}d1;
}e1;
int main()
{
e1.id=10;
strcpy(e1.name,"rutuja");
e1.salary = 50000;
 e1.d1.dd=22;
 e1.d1.mm=05;
 e1.d1.yyyy=2020;
 
 printf("\n emplayee id : %d\n", e1.id);
 printf("\n emplayee salary : %f\n", e1.salary);
 printf("\n emplayee name : %s\n", e1.name);
 printf("\n joining date of employee (dd/mm/yyyy)%d/%d/%d\n:",e1.d1.dd,e1.d1.mm,e1.d1.yyyy);
 return 0;
 }
 
