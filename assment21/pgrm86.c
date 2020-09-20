//accept N number from user and return difference betn summation of even and odd elemt & summation of odd elmt.
#include<stdio.h>
#include<stdlib.h>

int diff(int arr[],int length)       //function
{    int i=0;
    int sum1=0,sum2=0;
    for(i=0;i<length;i++)
{
    if(arr[i]%2==0)
   {
     sum1=sum1+arr[i];
    }
    else
    {
        sum2=sum2+arr[i];
    }
}
    return sum1-sum2;
}

int main()
{
    int i=0;
    int n = 0;
    int ans=0;
    int *p = NULL;        
   
    printf("enter number of elements:");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));  //dynamic memory

    if (p == NULL)
    {
       printf("unable to allocate memory:");
       return -1;
    }
   
    printf("element are:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }

    ans=diff(p,n);          //funtn call
    printf("result is %d",ans);

    return 0;
}
/*
 output:
 enter number of elements:6
 element are:85 66 3 80 93 88
 result is 53
*/