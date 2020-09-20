#include <stdio.h>
void pattern(int no)
{
    int a = 0, j = 0;

    int size = 0, rev = 0;

    while (no != 0)
    {
        a = no % 10;
        rev = rev * 10 + a;
        no = no / 10;
    }

    while (rev != 0)
    {
        for ( j = rev % 10; j>0;j--)
        {
            printf(" %d ", j);
        }

        printf("\n");
        rev /= 10;
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
 enter any number:7846
 7  6  5  4  3  2  1
 8  7  6  5  4  3  2  1
 4  3  2  1
 6  5  4  3  2  1
 */