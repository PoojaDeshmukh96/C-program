//wap to accept digit from user and find the count of digit which are less then 6  in.
#include <stdio.h>

int cnt(int num)
{
    int val = 0, cnt = 0;

    while (num != 0)
    {
        val = num % 10; //ek ek digit seperate kro

        if (val<6) 
            cnt++;    

        num = num / 10; 
    }
    return cnt; //return cnt
}
int main()
{
    int no = 0;
    int ans = 0;

    printf("enter any number:");
    scanf("%d", &no);

    ans = cnt(no);
    printf("count of digit less then 6 is %d", ans);

    return 0;
}