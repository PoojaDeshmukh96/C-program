#include <stdio.h>

void pattern(int num, int num1)
{
    int i = 0, j = 0;
    int k=1;               //k is used to print the number in a sequence.
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j<=num1; j++)
        {
            printf(" %d ",k++);
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
enter number of coloum:4
 1  2  3  4
 5  6  7  8
 9  10  11  12
*/