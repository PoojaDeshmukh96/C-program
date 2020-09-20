//wap to take digit from user and find that digit have 0 or not
#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chkzero(int num)
{
    int  result = 0;
    while(num!=0)     //tabtak chlega ye contn jb tk num=0 in no jata
   {
     result=num%10;   //digit ka last num result m store hoga

     if(result==0)    //if reslt m aya value == 0 hain
     return TRUE;     //return true means if part execute hoga

     num=num/10;       //if result == 0 nahi hain den ye line excute hoge 
   }
   return FALSE;       //if  zero in mila den ye line execute hoge & main main else part run hoga
   
}
int main()
{
    int no = 0;
    int ans = 0;

    printf("enter any number:");
    scanf("%d", &no);

    ans = chkzero(no);
    if (ans==TRUE)
    {
        printf("Number  has zero");
    }
    else
    {
        printf("Number  has no zero");
    }
}