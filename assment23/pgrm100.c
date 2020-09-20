//accpt N number from user & return product of all odd elements
#include <stdio.h>
#include <stdlib.h>

int product(int arr[], int size)
{
    int i = 0;
    int sum=1;
    for (i = 0; i < size; i++)
    {
        if (arr[i] %2!=0)
        {
            sum=sum*arr[i];
        }
    }
    return sum;
}

int main()
{
    int n = 0, first = 0, last = 0;
    int *p = NULL;
    int i = 0;
    int ans = 0;

    printf("enter number of elements in array:");
    scanf("%d", &n);

    //printf("enter first and last range :");
    //scanf("%d %d", &first, &last);

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
    ans = product(p, n);

     printf("Product of odd numbers are : %d ", ans);
    free(p);

    return 0;
}
 /*
 output:
 enter number of elements in array:6
 enter elements are:15 66 3 70 10 88
 Product of odd numbers are : 45
*/