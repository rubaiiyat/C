#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    int arr[x];
    for (int i = 0; i < x; i++)
    {
       scanf("%d",&arr[i]);
    }
         
    int min=arr[0];

    int max=arr[0];
    for (int i = 0; i < x; i++)
    {
        if (arr[i]>max)
        
        {
             max=arr[i];
        } 
        if(arr[i]<min){
        min=arr[i];
       } 
    }
    
    for (int i= 0; i <= x-1; i++)
    {
        if(arr[i]==min){
            arr[i]=max;
        }else if(arr[i]==max){
            arr[i]=min;
        }
        printf("%d ",arr[i]);
    }
  
    return 0;
}