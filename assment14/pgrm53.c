#include<stdio.h>
 void pattern(int num)
 {
     int i=0;
     for(i=1;i<=num;i++)
     {
         printf(" %d ",i);
         printf(" * ");
     }

 }
 int main()
 {
     int no=0;
   printf("Enter any number:");
   scanf("%d",&no);

   pattern(no);
   return 0;
 }

/* 
output:
Enter any number:5
1  *  2  *  3  *  4  *  5  *
 */