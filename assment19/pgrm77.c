#include<stdio.h>

void pattern(int no1,int no2)
{
   int i,j;
   for(i=no1;i>=1;i--)
   {
       for(j=1;j<=no2;j++)
       {
           if(j<=i)
           {
               printf(" * ");
           }
           else
           {
                printf("  ");
           }
           
       }
       printf("\n");
   }
}
int main()
{
  int num1=0,num2=0;
  printf("enter no of rows:");
  scanf("%d",&num1);

  printf("enter no of colums:");
  scanf("%d",&num2);

  pattern(num1,num2);

  return 0;

}
 /*
 output:
 enter no of rows:4
 enter no of colums:4
 *  *  *  *
 *  *  *
 *  *
*/