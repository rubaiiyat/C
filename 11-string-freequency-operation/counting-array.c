#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    int count[7]={0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for (int i = 0; i < n; i++)
    {
      int val=arr[i];
        count[val]++;
    }
    for (int i = 0; i <=6; i++)
    {
        printf("%d = %d\n",i,count[i]);
    }
    
    
    
    return 0;
}