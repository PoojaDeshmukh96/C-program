#include<stdio.h>
void pattern(int no1,int no2)
{
   int i=0,j=0,k=1;
   //int r=0;
   for(i=1;i<=no1;i++)
   {
       if((i%2)!=0)
       {   k=1;
           for(j=1;j<=no2;j++)
          { 
           // r=k*2;
            printf(" %d ",k*2);
            k++;
          }
       }
       else
       {    k=0;
            for(j=1;j<=no2;j++)
           { 
            // r=k+1;
             printf(" %d ",k+1);
             k+=2;

           }
       
       }
       printf("\n");
   }
}

int main()
{
    int num1=0,num2=0;
    printf("enter number of rows:");
    scanf("%d",&num1);
 
    printf("enter number of coloum:");
    scanf("%d",&num2);

    pattern(num1,num2);
    return 0;
}
/*
 output:
 enter number of rows:4
 enter number of coloum:5
 2  4  6  8  10
 1  3  5  7  9
 2  4  6  8  10
 1  3  5  7  9
*/