#include <stdio.h>

void pattern(int num, int num1)
{
    int i = 0, j = 0;
    for (i = num; i >= 1; i--)
    {
        for (j = num1;j >= 1; j--)
        {
            printf(" %d ", i);
        }
        printf("\n");
    }
}
int main()
{
    int no1, no2;
    printf("enter number of rows:");
    scanf("%d", &no1);
    printf("enter number of coloum:");
    scanf("%d", &no2);

    pattern(no1, no2);

    return 0;
}

/*
output:
enter number of rows:4
enter number of coloum:5
 4  4  4  4  4
 3  3  3  3  3
 2  2  2  2  2
 1  1  1  1  1
*/