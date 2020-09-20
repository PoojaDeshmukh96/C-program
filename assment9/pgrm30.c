#include<stdio.h>
int factdiff(int num)
{
    int i=0;
    int sum1=1,sum2=1;
    int value=0;
    //if number is positive
    if(num>=0)  
    {
        for(i=1;i<=num;i++)
        {
            if(i%2==0)             //chk if number is even
            {
                 sum1=sum1*i;        //sum of evn number
              //  printf("%d",i);
            } 
             else      //chk if numb is odd
            {
                 sum2=sum2*i;        //sum of odd numb
                // printf("%d",i);
            }
         }
      
     value=sum1-sum2;
     return value; 
   } 
   //if number is negative.
    else if(num<=0)
     {
        num=-num;
        for(i=1;i<=num;i++)
        {
            if(i%2==0)
            {
               sum1=sum1*i;
               // printf("%d",sum1);
            }
        
           else
            {
                sum2=sum2*i;
                 //printf("%d",sum1);
            }
         }
      
      value=sum1-sum2;
      return value;
    }
}

int main()
{
    int no=0;
    int ret=0;
    printf("enter any number:");
    scanf("%d",&no);

    ret=factdiff(no);
    printf("Difference is : %d",ret);

    return 0;
}