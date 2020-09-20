//wap which accepts string from user & count number of white spaces.
#include <stdio.h>
int cntspace(char ar[30])
{
    int i = 0, cnt = 0;
    for (i = 0; ar[i] != '\0'; i++)
    {
        if (ar[i] == ' ') 
        {
            
            cnt = cnt + 1;
        }
    }
    return cnt;
}

int main()
{
    char arr[30];
    int ans = 0;
    printf("enter a string:");
    scanf("%[^\n]s", arr);

    ans = cntspace(arr);

    printf("white spaces are:%d", ans);

    return 0;
}
/*
output:
 enter a string:Hello guys how are you
 white spaces are:4

 enter a string:hie
 white spaces are:0
*/