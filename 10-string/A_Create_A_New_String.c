#include <stdio.h>
#include <string.h>
int main()
{
    char x[1000];
    char y[1000];

    scanf("%s %s",&x,&y);
    
    
    int st1=strlen(x);
    int st2=strlen(y);

    printf("%d %d\n",st1,st2);
    printf("%s %s",x,y);
    
    
    return 0;
}