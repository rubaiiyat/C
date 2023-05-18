#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    scanf("%s %s",a,b);

    for (int i = 0; ; i++)
    {
       
        if (a[i]=='\0' && b[i]=='\0')
        {
            printf("same");
            break;
        }else if (a[i]=='\0')
        {
            printf("A choto");
            break;
        }else if (b[i]=='\0')
        {
            printf("B choto");
            break;
        }

        if (a[i]==b[i])
        {
            i++;
        }else if (a[i]<b[i])
        {
            printf("A choto");
            break;
        }
        else if (b[i]<a[i])
        {
            printf("B choto");
            break;
        }
      
    }
    
    
    return 0;
}