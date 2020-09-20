#include <stdio.h>
#include <stdlib.h>

int firstoccr(int arr[], int size, int num)
{
    int i = 0;
    int cnt = 0;
    for (i =0; i <size ; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n = 0, val = 0;
    int *p = NULL;
    int i = 0;
    int ans = 0;

    printf("enter number of elements in array:");
    scanf("%d", &n);

    printf("enter number :");
    scanf("%d", &val);

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
    ans = firstoccr(p, n,val);

    printf("Index of first occurance is : %d ", ans);
    free(p);

    return 0;
}
/*
 output:
 enter number of elements in array:6
 enter number :66 
 enter elements are:85 66 87 66 9 2
 occurance is : 1
*/