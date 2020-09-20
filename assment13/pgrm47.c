//wap to accept digit from user and find count of odd no of digit
#include <stdio.h>
int oddcnt(int num)
{
    int res = 0, cnt = 0;
     while (num != 0)
    {
         res = num % 10;
      
        if ((res % 2) != 0)
            cnt++;
        num = num / 10;
    }
    return cnt ;
}
int main()
{
    int no = 0;
    int ans = 0 ;
     printf("enter any number:");
    scanf("%d", &no);

    ans = oddcnt(no);
    printf("count of odd digits are %d", ans);

    return 0;
}