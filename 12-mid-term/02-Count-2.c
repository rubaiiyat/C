#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    scanf("%s",&s);

    int sum=0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]=='a')
        {
            sum++;
        }
        if (s[i]=='e')
        {
            sum++;
        }
        if (s[i]=='i')
        {
            sum++;
        }
        if (s[i]=='o')
        {
            sum++;
        }
        if (s[i]=='u')
        {
            sum++;
        }
       
    }
    
    printf("%d",sum);
    
    return 0;
}