#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int x;
    scanf("%d",&x);

    int arr2[x];
    for (int i = 0; i < x; i++)
    {
       scanf("%d",&arr2[i]);
    }
    
   int sum[n+x];
    for (int i = 0; i< n; i++)
    {
        sum[i]=arr[i];
        
    }

    int i=n;
    for (int j = 0; j < x; j++)
    {
        sum[i]=arr2[j];
        i++;
    }
    
     
  
    for (int i = 0; i <n+x; i++)
    {
        printf("%d ",sum[i]);
    }
    
    return 0;
}