#include <stdio.h>
#include <string.h>
int main()
{
    char A[1000];
    fgets(A,1000,stdin);
    int len=strlen(A)-1;
    printf("%d",len);
    return 0;
}