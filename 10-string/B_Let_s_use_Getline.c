#include <stdio.h>
#include <string.h>
int main()
{
    char x[1000000];
    fgets(x,1000000,stdin);

    for (int i = 0; x[i]!='\\' ; i++)
    {
         printf("%c",x[i]);
    }

    return 0;
}