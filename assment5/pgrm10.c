#include <stdio.h>

int nonfact(int n)
{
    int i = 0;
    int sum=0;
    int sum1=0;
    int sum2=0;
    for (i = 1; i < n; i++)

    {
        if (n % i== 0) 
        {  
           
             sum=sum+i; //sum of non factors of n

        }
        else 
        {
           sum1=sum1+i;
           
        }
 } 
               // printf(" \n factors :%d ", sum); 
               // printf(" \n non-factors :%d ", sum1);
       sum2=sum-sum1; 
     
}
int main()
{
    int num = 0, iret = 0;

    printf("enter any no:");
    scanf("%d", &num);

    iret = nonfact(num);
  printf(" \n difference :%d ", iret);
    return 0;
}