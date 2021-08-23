#include<stdio.h>
void f(){
printf("\n let have same fun");
}
int main()
{
void(*fp)()=&f;
(*fp)();
f();
return 0;
}
