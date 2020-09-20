#include <stdio.h>

void pattern(int num, int num1)
{
    int i = 0, j = 0;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num1; j++)
        {
            printf(" %c ", i + 64);
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
 A  A  A  A  A
 B  B  B  B  B
 C  C  C  C  C
 */