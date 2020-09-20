//wap which accepts string from user & display only digits from that string.
#include <stdio.h>
void digit(char ar[30])
{
    int i = 0,cnt=0;
    for (i = 0; ar[i] != '\0'; i++)
    {
        if (ar[i] >= '0' && ar[i] <= '9')
        {
            printf("%c ",ar[i]);
        
        }
    }
    
}

int main()
{
    char arr[30];
    int ans=0;
    printf("enter a string:");
    scanf("%[^\n]s", arr);

    digit(arr);

   // printf("Modified string is:%d", ans);

    return 0;
}
/*
output:
 enter a string:pooja123desh@
 1 2 3
*/