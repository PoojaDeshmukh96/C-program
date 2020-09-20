//wap to accept digit from user and return the difference between summation of even and odd digits.
#include <stdio.h>

int difference(int num)
{
    int res = 0,sum1=0,sum2=0;
    while (num != 0)
    {
        res=num%10;

        if((res%2)==0)
        {
            sum1=sum1+res;
        }
        else
        {
            sum2=sum2+res;
        }
        num=num/10;
    }
    return sum1-sum2;
}
int main()
{
    int no = 0;
    int ans = 0;
    printf("Enter any number:");
    scanf("%d", &no);

    ans = difference(no);
    printf("Difference is :%d", ans);

    return 0;
}