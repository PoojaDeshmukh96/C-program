#include <stdio.h>
#include <stdlib.h>
void display(int arr[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i]%11==0)
        {
            printf(" %d ", arr[i]);
        }
    }
}

int main()
{
    int n = 0;
    int *p = NULL;
    int i = 0;

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
    display(p, n);
    free(p);

    return 0;
}
/*
 output:
 enter number of elements in array:6
 enter elements are:85 66 3 55 93 88
 66  55  88
*/