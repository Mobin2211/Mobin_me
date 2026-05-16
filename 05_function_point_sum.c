#include <stdio.h>

int sum(int,int);
int sum(int a, int b)
{
    return a+b;
}
int main() 
{
 int a,b;
printf("Enter a Number:");
   scanf("%d",&a);
 
printf("Enter another Number:");
   scanf("%d",&b);
   
printf("the sum of a and b is %d",sum(a,b));

    return 0;
}
