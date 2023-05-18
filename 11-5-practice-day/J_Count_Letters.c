#include <stdio.h>
#include <string.h>
int main()
{
    char s;
    int letter[26]={0};
    
    while (scanf("%c",&s)!=EOF)
    {
        int val=s-97;
        letter [val]++;
       
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (letter[i]!=0)
        {
            printf("%c : %d\n",i+'a',letter[i]);
        }
        
    }
    
    return 0;
}