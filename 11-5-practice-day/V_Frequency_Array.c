#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int arr[n];
    int count[100000]={0};
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
     
        int val=arr[i];
        count[val]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n",count[i]);
        
    }
    
    return 0;
}