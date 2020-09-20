//accept N number from user & return the difference betwn largest & smallest number.
#include <stdio.h>
#include <stdlib.h>

void digit(int arr[], int size)
{

    int i = 0;
    int cnt = 0;
    int res=0;
  
    for (i = 0; i < size; i++)
  {  
      while(arr[i]!=0)
      {
        //printf("hello");
        res=arr[i]/10;
        cnt=cnt+1;
        //arr[i]=arr[i]/10;
      }
     if(cnt==3)
     {
        printf(" %d ",arr[i]);
     }
  } cnt=0;

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
     digit(p, n);

    // printf("Difference number is : %d ", ans);

    free(p);

    return 0;
}