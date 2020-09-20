//wap to accept digit from user and find count of even no of digit

#include <stdio.h>

int cntevn(int num)
{
    int val = 0, cnt = 0;

    while (num != 0)
    {
      val = num % 10;
    
    if ((val % 2) == 0) 
         cnt++;       

        num = num / 10; 
    }
    return cnt; 
}
int main()
{
    int no = 0;
    int ans = 0;

    printf("enter any number:");
    scanf("%d", &no);

    ans = cntevn(no);
    printf("count of even digits is %d", ans);

    return 0;
}