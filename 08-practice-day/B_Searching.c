#include <stdio.h>
int main()
{
    int i,n,x;
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x); 
    int ans=-1;
    for (i = 0; i < n; i++)
    {
        if(arr[i]==x){
           ans=i;
           break;
        }
         
    }
    printf("%d\n",ans);
    return 0;
}