#include <stdio.h>
int main()
{
    int a, b,x;
    scanf("%d %d",&a,&b);

    x=a-b;

    if(x>0){ 
        printf("%d",x);
    }else{
        printf("%d",0);
    }
    return 0;
}