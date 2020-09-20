#include <stdio.h>

int count(int no)
{
    int cnt = 0;
    while (no != 0)
    {
        cnt++;
        no /= 10;
    }
    return cnt;
}

int reverse(int no)
{
    int rev = 0, a = 0;

    while (no != 0)
    {
        a = no % 10;
        rev = rev * 10 + a;
        no = no / 10;
    }
    return rev;
}

void pattern(int no)
{
    int i = 0, j = 0;
    int t = 0;

    int size = count(no);  //to count digits in a number.
    int rev = reverse(no); //to reverse a number.

    for(i = size; i > 0; i--)
    {
        t = rev;
 
        for (j = i; j <= size; j++)
        {
            printf(" %d ", t % 10);
            t /= 10;
        }

        printf("\n");

    }
}
int main()
{

    int num = 0;

    printf("enter any number:");
    scanf("%d", &num);

    pattern(num);

    return 0;
}
/*
 output:
 enter any number:7836
 7
 7  8
 7  8  3
 7  8  3  6
*/