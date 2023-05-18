#include <stdio.h>
int main()
{
    int a[5];
    int x=sizeof(a)/sizeof(char);
    printf("%d",sizeof(x));
    return 0;
}