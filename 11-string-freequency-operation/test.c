#include <stdio.h>
int main()
{
    char a[]="apple";
    char b[]="orange";
    a[20]=b[20];
    printf("%s",a[20]);
    return 0;
}