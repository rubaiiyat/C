#include <stdio.h>
int main()
{
    char n[]="abir\0";
    int size=sizeof(n)/sizeof(char);

    printf("%d\n",size);
    printf("%s",n);
    
    

    return 0;
}