#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<1){
        printf("Please Provide Positive Number");
    }else if(x%2==0){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}