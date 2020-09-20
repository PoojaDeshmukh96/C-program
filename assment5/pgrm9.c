#include <stdio.h>

int nonfact(int n)
{
    int i = 0;
   int sum=0;
    for (i = 1; i <= n; i++)

    {
        if (n % i != 0) 
        {  
           
             sum=sum+i; //sum of non factors of n
           printf(" %d ", i); 
            
        }
    }
      printf(" \n summation is :%d ", sum);
}
int main()
{
    int num = 0, iret = 0;

    printf("enter any no:");
    scanf("%d", &num);

    iret = nonfact(num);

    return 0;
}