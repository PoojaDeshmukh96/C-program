//Write a program which accept number from user & off the 7th bit of that number and return modified number.
#include<stdio.h>
int chkbit(int b)
{  
   
   int k=15;            //k is the bit we want to check
    if(b& (1<<k))     //(100000 &(1<<15)
   {
     printf("bit is on");
   }
   else
   {
       printf("bit is of");
   }
}
int main()
{
    int no=0;
    printf("enter a number:");
    scanf("%d",&no);
    chkbit(no);
     //printf("bit is on");
}
/*
 output:
 enter a number:100000
 bit is on

 enter a number:10000
 bit is of
*/