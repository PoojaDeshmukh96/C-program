//accept N number from user and display all such element which are divisible by 5.
#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int size)

{  
    int i=0;
    for(i=0;i<size;i++)
   {
    if(arr[i]%5==0)
    {
        printf(" %d ",arr[i]);
    }
    
   }
   
}
int main()
{
    int n=0;
    int i=0;
   int *p=NULL;
   printf("Enter the number of elements:");
   scanf("%d",&n);

   p=(int *)malloc(n * sizeof(int));

   if(p==NULL)
   {
       printf("unable to allocate memory");
       return -1;
   }
   printf("enter elements are:");
   for(i=0;i<n;i++)
   {
       scanf("%d",&p[i]);
   }
   display(p,n);

   return 0;
}
/*
output:
 Enter the number of elements:5
 enter elements are:85 66 3 80 93 88
 85  80
 */