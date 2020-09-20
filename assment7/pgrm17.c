#include<stdio.h>
 
 void display(int no)
 {
     int i=0;
     for(i=1;i<=no;i++)
     {
         printf(" %d ",i);
     }
 }
int main()
{
  int val=0;
  printf("enter any number:");
  scanf("%d",&val);

  display(val);

  return 0;
}