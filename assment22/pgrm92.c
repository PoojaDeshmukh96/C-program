#include <stdio.h>
#include <stdlib.h>
int diff(int arr[], int size)
{
    int i = 0;
    int sum1=0,sum2=0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            //printf(" %d ", arr[i]);
            sum1=sum1+1;
        }
        else
        {
            sum2=sum2+1;
        }
        
    }
    return sum1-sum2;
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
    ans=diff(p, n);
    printf("Difference is: %d",ans);
    free(p);

    return 0;
}
/*
 output:
 enter number of elements in array:7
 enter elements are:85 66 3 93 88 90 80
 Difference is: 1
*/