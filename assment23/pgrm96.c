#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chk(int arr[], int size,int num)
{
    int i = 0;
    int cnt=0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n = 0;
    int val=0;
    int *p = NULL;
    int i = 0;
    BOOL ans=FALSE;

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
    ans = chk(p, n,val);

    if(ans ==TRUE)
      {
        printf("number is present.");
      }
    else 
     {
       printf("number is not present.");
     }
    free(p);

    return 0;
}
/*
 output:
 enter number :66
 enter elements are:64 77  66 16 66 9
 number is present.
*/