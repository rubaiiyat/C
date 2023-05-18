#include <stdio.h>
#include <string.h>
int main()
{
    char A[100];
    char B[100];
    scanf("%s %s",&A,&B);
    strcpy(B,A);
    printf("%s",B);
    return 0;
}