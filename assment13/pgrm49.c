//wap to accept digit from user and return multiplication of all digits.
#include <stdio.h>

int multi(int num)
{
    int res = 0, mul = 1;
    while (num != 0)
    {   
        res = num % 10;  //eke ek digit seperate hora and store in res
        
        //if res=0 hai so usko 1 se intitlize krdo so that if numb main 0 hoga toh vo 1 ho jyega & finl output 0 ni hoga.

        if(res==0)    //if ye contn ni liki and if numb main 0 hoga toh final o/p 0 ho jyega qki any numb multiply by 0 is 0. 
         res=1;     

        mul=mul*res;     //den vo digit multiply hora
        num = num / 10;   
    }
    return mul;
}
int main()
{
    int no = 0;
    int ans = 0;
    printf("Enter any number:");
    scanf("%d", &no);

    ans = multi(no);
    printf("Multiplication is:%d", ans);

    return 0;
}