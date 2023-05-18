#include <stdio.h>
int main()
{
    char A[100];
    char B[100];
    scanf("%s %s",&A,&B);
    for (int i = 0; i <= 2; i++)
    {
    
        A[i]=B[i];

        printf("%c",A[i]);
    }
    
    return 0;
}