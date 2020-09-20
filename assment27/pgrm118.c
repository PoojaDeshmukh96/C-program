//WAP which accpets string from user and return the difference btwn frequences of small characters & captital characters .
#include <stdio.h>

int count(char *src)
{
    int cnt = 0,cnt1=0;

    while (*src != '\0')
    {
        if (*src >= 'a' && *src <= 'z')
        {
            cnt++;
        }
        else if(*src >= 'A' && *src <= 'Z')
        {        
            cnt1++;

        }
        
        src++;
    }
    return cnt-cnt1;
}
int main()
{
    char arr[20];
    int ans = 0;

    printf("enter a string:");
    scanf("%[^\n]s", arr);

    ans = count(arr);
    printf("Difference is: %d ", ans);

    return 0;
}
/*
output:
 enter a string:Marvellous
 Difference is: 8
*/