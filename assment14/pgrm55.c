#include <stdio.h>
void pattern(int num)
{
    int i = 0;
    for (i = 1; i<=2*num; i++)
    {
        if ((i % 2) == 0)
            printf(" %d ", i);
    }
}
int main()
{
    int no = 0;
    printf("Enter any number:");
    scanf("%d", &no);

    pattern(no);
    return 0;
}

/*
output:
 Enter any number:8
 2  4  6  8  10  12  14  16
*/