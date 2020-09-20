//accept N number from user & return the difference betwn largest & smallest number.
#include <stdio.h>
#include <stdlib.h>

int difference(int arr[], int size)
{

    int i = 0;
    int cnt = 0;
    int smallest = arr[0];
    int largest=arr[0];
    
    for (i = 1; i < size; i++)
    {
        if (smallest > arr[i])
            smallest = arr[i];

        else if (largest < arr[i])
            largest = arr[i];
    }
    return largest-smallest;
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
    ans = difference(p, n);

    printf("Difference number is : %d ", ans);

    free(p);

    return 0;
}
/*
 output:
 enter number of elements in array:6
 enter elements are:85 66 3 93 66 88
 Difference number is : 90
*/