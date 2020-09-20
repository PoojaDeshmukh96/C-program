//WAP a program which check whether 5th & 18th bit is on or off.
#include <stdio.h>
int chkbit(int b)
{  
     int x=5,y=18;
    
    if(b& (1<<x))     
       printf("\n5th bit is on");
   else
       printf("\n 5thbit is off");
       
   if(b& (1<<y))     
       printf("\n18th bit is on");
   else
       printf("\n18th bit is off");
}

int main()
{
    int no = 0;
    printf("enter a number:");
    scanf("%d", &no);
    chkbit(no);
    
    return 0;
}
/*
output:
enter a number:1000
5th bit is on
18th bit is off

enter a number:900000
5th bit is on
18th bit is on
*/