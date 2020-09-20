//wap to take number from user and print the reverse of that number.
#include <stdio.h>
 void reverse(int num)
 {
      int rev=0,val=0;
      if(num<0)
      {
          num=-num;
      }
       while(num>0)
   {           
      rev=num%10;          //rev=1234%10 =>4    123%10  =>3     12%10 =>2         1%10 =>1
      val=val*10+rev;      //val=0*10+4  =>4    4*10+3  =>43    43*10+2 =>432     432*10+1 =>4321
      num=num/10;          //num=1234/10 =>123   123/10 =>12    12/10 =>1          0
   }
    printf("\n %d",val);
 }
 int main()
 {
     int no=0;
     printf("enter any number:");
     scanf("%d",&no);

     reverse(no);

 }