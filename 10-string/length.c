#include <stdio.h>
#include <string.h>
int main()
{
    char n[100];
    fgets(&n,100,stdin);
    int st=strlen(n);
    
   printf("%d",st-1);
    
    return 0;
}