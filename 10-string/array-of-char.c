#include <stdio.h>
int main()
{
    int a[10];
    
    for (int i = 0; i < 10; i++)
    {
       scanf("%c",&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
       printf("%c\n",a[i]);
    }
    
    
    return 0;
}