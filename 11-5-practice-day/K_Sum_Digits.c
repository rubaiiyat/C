#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    char arr[1000000];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",&arr[i]);
    }

    for (int i = 0; i <n ; i++)
    {
        if (arr[i]>='0'&& arr[i]<='9')
        {
           sum+=(arr[i]-'0');
        }
        
    }
     printf("%d",sum);
    return 0;
}