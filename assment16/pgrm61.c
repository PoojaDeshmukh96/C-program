#include <stdio.h>
void pattern(int num, int num2)
{
    int i, j;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num2; j++)
        {
            printf(" %c ", j+64);
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
 enter number of coloum:4
 A  B  C  D
 A  B  C  D
 A  B  C  D
 A  B  C  D
*/
