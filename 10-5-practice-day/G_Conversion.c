#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100000];
    fgets(arr,100000,stdin);

    char bal=0;
    for (int i = 0; i < strlen(arr); i++)
    {
         bal=arr[i];
       if (bal==',')
       {
        bal=' ';
       }
        if (bal>='A' && bal<='Z')
        {
            bal=bal+32;
        }else if(bal>='a' && bal<='z'){
            bal=bal-32;
        }
       
      printf("%c",bal);
      
    }
   
    return 0;
}