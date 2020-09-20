//WAP a program which accepts one number & range of position from user.Toggle all bits from that range and display modifies number.
#include <stdio.h>

int counton(int a,int f,int l)
{    
    int i = 0, num = 0;

     num=((1<<l)-1)^((1<<(f-1))-1);
      
      return (a^num);
}

int main()
{
    unsigned int no1 = 0,first=0,last=0;

    printf("enter a number:");
    scanf("%d%d%d", &no1,&first,&last);

 int ans= counton(no1,first,last);

    printf("modified number is:%d", ans);

    return 0;
}
/*
output:
 enter a number:17 2 3
 modified number is:23
 
 enter a number:50 2 5
 modified number is:44
*/