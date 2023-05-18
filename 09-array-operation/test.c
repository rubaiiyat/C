#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);

    int arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        arr[2]=arr[5];
        
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}