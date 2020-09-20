#include <stdio.h>
#include <stdlib.h>
int count(int arr[], int size)
{
    int i = 0;
    int count=0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            //printf(" %d ", arr[i]);
            count=count+1;
        }
    }
    return count;
}

int main()
{
    int n = 0;
    int *p = NULL;
    int i = 0,ans=0;

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
    ans=count(p, n);
    printf("count is: %d",ans);
    free(p);

    return 0;
}
/*
 output:
 enter number of elements in array:6
 enter elements are:85 66 3 80 93 88
 count is 3
*/