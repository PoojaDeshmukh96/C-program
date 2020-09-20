#include<stdio.h>

int count(int no)
{
  int cnt=0;
  while(no!=0)
  {
    cnt++;
    no/=10;
  }
   return cnt;
  
}
void pattern (int no)
{

   int i=0,j=0, t=0;
   int  size=count( no);

   for(i=0;i<size;i++)
    {
         t=no;
        for(j=0;j<size;j++)
      {

          printf(" %d ",t%10);
           t/=10;
      }
         printf("\n");
    }
}

int main()
{
  int num=0;

  printf("enter any number:");
  scanf("%d",&num);
  
  pattern(num);

  return 0;
}
/*
 output:
 enter any number:7846
 6  4  8  7
 6  4  8  7
 6  4  8  7
 6  4  8  7
*/