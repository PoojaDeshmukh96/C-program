
#include <stdio.h>
#include <stdlib.h>

int count(int arr[], int size,int num)
{
    int i = 0;
    int cnt = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i]== num)
        {
            cnt = cnt + 1;
        }
    }
    return cnt;
}

int main()
{
    int n = 0;
    int val=0;
    int *p = NULL;
    int i = 0;
    int ans = 0;

    printf("enter number of elements in array:");
    scanf("%d", &n);

    printf("enter number:");
    scanf("%d",&val);

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
    ans = count(p,n,val);

    printf("count is %d ", ans);
    free(p);

    return 0;
}
/* 
 output:
 enter number of elements in array:6
 enter number:66
 enter elements are:85 66 3 66 93 88
 count is 2
*/