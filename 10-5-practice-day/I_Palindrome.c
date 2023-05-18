#include <stdio.h>
#include <string.h>
int main()
{
    char arr[1000];
    scanf("%s",&arr);
    
    
    
    char i=0;
    char j=strlen(arr)-1;
    while(i < j)
    {
        char x=arr[i];
        char temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
         
    }
    if(arr[i]==arr[j]){
        printf("YES");
        }else{
        printf("NO");
        
    }
 
   
    
    return 0;
}