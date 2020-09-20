#include<stdio.h>

void pattern(int no)
{
    int i=0;
   if(no<=0)
   {
     no=-no;  
     for(i=0;i<no;i++)
      {
       printf(" $ ");
       printf(" * ");
      } 
   }
   else
   {
    for(i=0;i<no;i++)
     {
       printf(" $ ");
       printf(" * ");
     } 
   }
}
int main()
{
    int val=0;

    printf("enter number:");
    scanf("%d",&val);
      pattern(val);
}