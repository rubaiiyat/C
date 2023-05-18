#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000],b[100];
    scanf("%s %s",&a,&b);
    int val=strcmp(a,b);
    
        if (val<0)
        {
            printf("A choto");
            
        }else if(val>0){
            printf("B choto");
           
        }else{
            printf("same");
        }

    
    return 0;
}