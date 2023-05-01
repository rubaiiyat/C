#include <stdio.h>
int main()
{
    char x;
    scanf("%c",&x);

    if(x>='a'&&x<='z'){
        int lowToUpper=x-32;
      printf("%c",lowToUpper);
    }else {
        int upperToLow=x+32;
        printf("%c",upperToLow);
    }
   
    return 0;
}