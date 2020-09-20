#include <stdio.h>

void pattern(int no1, int no2)
{
    int i, j;
    for (i = 1; i <= no1; i++)
    {
        for (j = 1; j <= no2; j++)
        {
            if (j == 1 ||j==no2 ||j==i ||i==1||i==no1)
            {
                printf(" * ");
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
 enter no of rows:6
 enter no of colums:6
 *  *  *  *  *  *
 *  *           *
 *     *        *
 *        *     *
 *           *  *
 *  *  *  *  *  *
*/ 