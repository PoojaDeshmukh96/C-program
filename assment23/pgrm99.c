//accpt N number from user & accept range,display all elements from that range
#include <stdio.h>
#include <stdlib.h>

int occr(int arr[], int size, int val1,int val2)
{
    int i = 0;
    
    for (i = 0; i < size; i++)
    {
        if (arr[i] >val1 && arr[i]<val2)
        {
            printf(" %d ",arr[i]);
        }
    }

}

int main()
{
    int n = 0, first = 0,last=0;
    int *p = NULL;
    int i = 0;
    int ans = 0;

    printf("enter number of elements in array:");
    scanf("%d", &n);

    printf("enter first and last range :");
    scanf("%d %d", &first,&last);

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
    ans = occr(p, n,first,last);

   // printf("Index of first occurance is : %d ", ans);
    free(p);

    return 0;
}
/*
 output:
 enter number of elements in array:6
 enter first and last range :60 90
 enter elements are:85 66 3 76 93 88
 66  76  88
 */