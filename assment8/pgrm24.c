#include <stdio.h>

void table(int val)
{
    int value = 0;
    int i = 0;
    if (val <= 0)
    {
        val = -val;
        for (i = 10; i >= 1; i--)
        {
            value = val * i;
            printf(" %d ", value);
        }
    }
    else
    {
        for (i = 10; i >= 1; i--)
        {
            value = val * i;
            printf(" %d ", value);
        }
    }
}
int main()
{
    int no1 = 0;
    //int ret = 0;
    printf("enter  number:");
    scanf("%d", &no1);

    table(no1);

    return 0;
}
