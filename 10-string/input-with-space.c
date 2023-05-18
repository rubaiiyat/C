#include <stdio.h>
#include <string.h>
int main()
{
    char n[20];
    fgets(n, 10 ,stdin);
    n[7]='\0';
    printf("%s ",n);
    return 0;
}