//accept N number from user & return lagrest number.
#include <stdio.h>
#include <stdlib.h>

int maximum(int arr[], int size)
{
  
    int i = 0;
    int cnt = 0;
    int largest=arr[0];

    for (i = 1; i <size; i++)
    {
        if(largest<arr[i])
        largest=arr[i];
    }
    return largest;
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
    ans = maximum(p, n);

    printf("Largest number is : %d ", ans);
 
    free(p);

    return 0;
}
 /*
 output:
 enter number of elements in array:4
 enter elements are:54 77 9 99
 Largest number is : 99
*/