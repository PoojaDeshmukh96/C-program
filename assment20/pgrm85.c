
#include <stdio.h>

void pattern(int no1, int no2)
{
    int i, j;
    for (i = 1; i <= no1; i++)
    {
        for (j = 1; j <= no1; j++)
        {
            if (i == j || j==1 || i==no1 || j==no2 || i==1)
            {
                printf(" %d ",j);
            }

            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int num1 = 0, num2 = 0;
    printf("enter no of rows:");
    scanf("%d", &num1);

    printf("enter no of colums:");
    scanf("%d", &num2);

    pattern(num1, num2);

    return 0;
}
/*
 output:
 enter no of rows:5
 enter no of colums:5
 1  2  3  4  5
 1  2        5
 1     3     5
 1        4  5
 1  2  3  4  5
*/