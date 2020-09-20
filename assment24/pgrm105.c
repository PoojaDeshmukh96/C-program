//accept N number from user & display summation of digits of each number.
#include <stdio.h>
#include <stdlib.h>

void digit(int arr[], int size)
{

    int i = 0;
    int res = 0;
    int sum = 0;

    for (i = 0; i < size; i++)
    {
        while (arr[i] != 0)
        {
            //printf("hello");
            res = arr[i] % 10;
            sum = sum + res;
            arr[i]=arr[i]/10;
        }
        printf(" %d ",sum);
        sum=0;
    }
}
int main()
{
    int n = 0;
    int *p = NULL;
    int i = 0;
    int ans = 0;

    printf("enter number of elements in array:");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    if (p == NULL)
    {
        printf("unable to allocate memory:");
        return -1;
    }
    printf("enter elements are:");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    digit(p, n);

    // printf("Difference number is : %d ", ans);

    free(p);

    return 0;
}
/*
output:
 enter number of elements in array:6
 enter elements are:8225 665 3 76 953 858
 17  17  3  13  17  21
 */
