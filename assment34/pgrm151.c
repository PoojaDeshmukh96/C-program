//WAP a program which accepts one number & position from user & check whether a bit at that postion is on or off.
#include <stdio.h>

int chkbit(int b,int p)
{
    if(b & (1 << p-1))  
        printf("bit is on");
    else
      printf("bit is off");
    
}

int main()
{
    int no = 0,pos=0;
    printf("enter a number:");
    scanf("%d", &no);
 
    printf("enter a position:");
    scanf("%d", &pos);
    chkbit(no,pos);

    return 0;
}
/*
 output:
 enter a number:10 
 enter a number:2
 bit is on.
 
 enter a number:15
 enter a number:7
 bit is off.
*/