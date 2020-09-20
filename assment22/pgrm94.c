#include <stdio.h>
#include <stdlib.h>

int count(int arr[], int size)
{
    int i = 0;
    int cnt=0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == 11)
        {
            cnt=cnt+1;
        }
    }
    return cnt;
}

int main()
{
    int n = 0;
    int *p = NULL;
    int i = 0;
    int ans=0;

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
    ans = count(p, n);
    
    printf("count of 11 is %d ",ans);
    free(p);

    return 0;
}
/*
 output:
 enter number of elements in array:5
 enter elements are:11 33 2 11 111
 count of 11 is : 2

*/