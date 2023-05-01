#include <stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x=='z'){
        x='a';
        printf("%c",x);
        
    }else{
    printf("%c",x+1);
    }
    

    return 0;
}