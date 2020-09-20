#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL chk(int arr[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i]==11)
        {
            return 1;
        }
            
    }
    return 0;
}

int main()
{
    int n = 0;
    int *p = NULL;
    int i = 0;
    BOOL ans =TRUE;

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
    ans = chk(p, n);
    if(ans==TRUE)
    {
        printf("Number 11 is present");
    }
    else
    {
     printf("Number 11 is not present");
    }
    free(p);

    return 0;
}
/*
 output:
 enter number of elements in array:6
 enter elements are:85 66 11 80 93 88
 Number 11 is present
*/