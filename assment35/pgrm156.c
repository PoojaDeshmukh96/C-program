//WAP a program which accepts one number from user & count number of ON(1)bits.(without using % * / operator)
#include <stdio.h>

int counton(int b)
{
    int no = 0,cnt=0;
   while(b!=0)
   {
     if(b & 1==1)         
     {
         cnt++;
        
     }
     b=b>>1;
     
   }
   return cnt;
   
}

int main()
{
     unsigned int no = 0;
     
    printf("enter a number:");
    scanf("%d", &no);

    int ans=counton(no);
 
    printf("count is:%d", ans);

    return 0;
}
/*
 output:
 enter a number:11
 count is:3

 enter a number:12
 count is:2
*/