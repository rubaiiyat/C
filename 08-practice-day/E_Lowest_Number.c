#include <stdio.h>
int main()
{
    int i,n,min,index;
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for (i = 1; i < n; i++)
    {
      if ( min>arr[i] )
      {
        min=arr[i];
        
       
      }
     
    }
     printf("%d %d",min,i);
     
    return 0;
}