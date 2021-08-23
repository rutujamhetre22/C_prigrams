//Create a structure Employee. Pass it to a function by value.
 #include <stdio.h>
#include <string.h>
 
struct employee 
{
int id;
char name[20];
float salary;          
};
 
void func(struct employee data);
 
int main() 
{
struct employee data;
 
data.id=1;
strcpy(data.name, "Ratuja");
data.salary = 50000;
 
func(data);
return 0;
}
 
void func(struct employee data)
{
printf(" Id is: %d \n", data.id);
printf(" Name is: %s \n", data.name);
 printf(" Percentage is: %f \n", data.salary);
}
