//Write a program which accept number from user & off the 7th bit of that number and return modified number.
#include <stdio.h>

int chkbit(int b)
{
    
    int x = 7,no=0;
    
      no=(b & ~(1<<x-1));          //bitwise and
     printf("modified number is:%d",no);
       
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
 enter a number:79
 modified number is:15
 
 enter a number:66
 modified number is:2
*/