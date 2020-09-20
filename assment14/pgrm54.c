#include<stdio.h>
void pattern(int num)
{
  int i=0;
  for(i=1;i<=num;i++)
  {
      printf(" # ");
      printf(" %d ",i);
      printf(" * ");
  }

} 

int main()
{
   int no=0;
   printf("Enter  number of elements:");
   scanf("%d",&no);

   pattern(no);

   return 0;
}
/* output:
   Enter  number of elements:4
   #  1  *  #  2  *  #  3  *  #  4  *
*/