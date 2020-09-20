#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chknumber(int no)
{
    // int no=0;
    if(no>=100)
    {
        return 1;

    }
    else
    {
        return 0;
    }
    

}

 int main()
 {
     int num=0;
    BOOL ret=FALSE;

     printf("enter the number:");
     scanf("%d",&num);

     ret= chknumber(num);
      
      if(num>=100)
    {
        printf("number is greater");

    }
    else
    {
        printf("number is not greater");

    }
     return 0;
 }