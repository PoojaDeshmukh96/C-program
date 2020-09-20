#include <stdio.h>
void pattern(int num, int num2)
{
    int i, j;
    for (i = num; i >=1; i--)
    {
        for (j =num2; j >=1; j--)
        {
            printf(" %d ", j);
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
 enter number of rows:3
 enter number of coloum:5
 5  4  3  2  1
 5  4  3  2  1
 5  4  3  2  1
*/