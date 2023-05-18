#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    scanf("%s",&s);

    int capital=0;
    int small=0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]>='A' && s[i]<='Z')
        {
            capital++;
        }
        if (s[i]>='a' && s[i]<='z')
        {
            small++;
        }
        
    }
    printf("%d %d",capital,small);
    return 0;
}