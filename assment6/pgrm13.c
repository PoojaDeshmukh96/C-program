#include<stdio.h>
 typedef int BOOL;
 #define TRUE 1
 #define FALSE 0

 BOOL chkeql(int no1,int no2)
 {
     if(no1==no2)
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
     int num1 = 0,num2=0;
    BOOL ret = FALSE;

    printf("enter two number:");
    scanf("%d %d", &num1,&num2);

    ret = chkeql(num1,num2);
    
    if(num1==num2)
    {
        printf("NUMBER ARE EQUALS");
    }
    else
    {
        
        printf("NUMBER ARE NOT  EQUALS");
    }
    
    return 0;
}
