// write a recursive function to calculate sum of first n natural numbers.
#include <stdio.h>
int sum_natural(int n)
{
    if (n == 1) { return 1;}
// sum_natural=1+2+3+4+5+6+...(n-1)+n
    return sum_natural(n-1)+n;
}
int main() {
    int n;
    printf("Enter a Number to sum:");
    scanf("%d",&n);
    printf("The Sum is %d.",sum_natural(n));
    return 0;
}
