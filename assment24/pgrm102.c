//accept N number from user & return smallest number.
#include <stdio.h>
#include <stdlib.h>

int minimum(int arr[], int size)
{

    int i = 0;
    int cnt = 0;
    int smallest = arr[0];

    for (i = 1; i < size; i++)
    {
        if (smallest > arr[i])
        smallest = arr[i];
    }
    return smallest;
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
    ans = minimum(p, n);

    printf("Smallest number is : %d ", ans);

    free(p);

    return 0;
}
/*
 output:
 enter number of elements in array:5
 enter elements are:45 77 34 12 9
 Smallest number is : 9
*/