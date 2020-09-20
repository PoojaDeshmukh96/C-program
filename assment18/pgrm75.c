#include <stdio.h>
void pattern(int no1, int no2)
{
    int i = 0, j = 0;
    for (i = 1; i <= no1; i++)
    {
        for (j = 1; j <= no2; j++)
        {
            if (j == no2 || j == 1 || i == 1 || i == no1)
            {
                printf(" %d ",j);
            }
            else
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int num1 = 0, num2 = 0;
    printf("enter number of rows:");
    scanf("%d", &num1);

    printf("enter number of coloum:");
    scanf("%d", &num2);

    pattern(num1, num2);
    return 0;
}
/*
 output:
 enter number of rows:4
 enter number of coloum:4
 1  2  3  4
 1  *  *  4
 1  *  *  4
 1  2  3  4
*/