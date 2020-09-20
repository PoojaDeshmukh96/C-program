
//wap to accept digit from user and find the frequency of 4 in it.

#include <stdio.h>

int cnt(int num)
{
    int val = 0, cnt = 0;

    while (num != 0)
    {
        val = num % 10; //ek ek digit seperate kro

        if (val == 4) //den vo seperate digit ko chk kro if it is equal to 4 or no
            cnt++;    //if it is equal den cnt ko increament kro

        num = num / 10; //den ye step kro else if val is not eql den dirt ye setp run hoge
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
    printf("count of 4 in number is %d", ans);

    return 0;
}