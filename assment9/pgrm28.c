#include<stdio.h>
int evenfactor(int num)
{  
    int sum=1;
    int i=0;
    if(num>=0)
  {
    for(i=num;i>=1;i--)
    {
      if(i%2==0)
      { // printf(" %d ",i); this is to print value of i.in reverse order.
          sum=sum*i;
      }
    }
    return sum;
  }    
  else 
  { 
    num=-num;
    for(i=num;i>=1;i--)
    {
      if(i%2==0)
      { // printf(" %d ",i); this is to print value of i.in reverse order.
          sum=sum*i;
      }
    }
    return sum;
  }
}
int main()
{
    int no=0;
    int ret=0;

    printf("enter any number:");
    scanf("%d",&no);

    ret=evenfactor(no);
    printf("\n value is %d ",ret); 

    return 0;
}