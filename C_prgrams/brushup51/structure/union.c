//Demonstrate use of union and find out size of union variable and the attributes from union.
#include <stdio.h>
int main()
{
union demo
{

int m;
float n;
char ch;
};
union demo u;
printf("The size of union = %d\n", sizeof(u));
u.m = 25;
printf("%d %f %c\n", u.m, u.n, u.ch);
 u.n = 0.2;
printf("%d %f %c\n", u.m, u.n, u.ch);
u.ch = 'p';
printf("%d %f %c\n", u.m, u.n, u.ch);

}
