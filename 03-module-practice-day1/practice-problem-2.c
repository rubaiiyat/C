#include <stdio.h>
int main ()
{
    double x,y;
    scanf("%lf %lf", &x, &y);
    int sum=x+y;
    int sub=x-y;
    int mul=x*y;
    double div=x/y;
    printf("Sum= %d \nSub= %d \nmul= %d \nDiv= %0.2lf", sum,sub,mul,div);
    return 0;
}