//wap to accept digit from user and return the count of digits  from 3 to7.
#include <stdio.h>
int cntrange(int num)
{
    int res = 0, cnt = 0;
    while (num != 0)
    {
        res = num % 10;

        if ((res>3)&&(res<7))
            cnt++;
        num = num / 10;
    }
    return cnt;
}
int main()
{
    int no = 0;
    int ans = 0;
    printf("Enter any number:");
    scanf("%d", &no);

    ans = cntrange(no);
    printf("Count of digits from 3 to 7 are :%d", ans);

    return 0;
}