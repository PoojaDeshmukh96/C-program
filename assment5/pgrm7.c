#include<stdio.h>

int multfact(int val)
{
  int i=0;
  int sum=1;
   for(i=1;i<val;i++)
   {
       if(val%i==0)   //if value and i ka modulo 0 aya den sum kro means only multiple of that value he aayege
       {

        sum=sum*i;  //sum of the numb those are multiple of i
        printf(" %d " , i);  //numb which are multiple of  val
       }
   }
        printf("\n %d",sum); //sum is printing
}

int main()
{
    int num=0,iret=0;

    printf("enter any no:");
    scanf("%d",&num);

    iret=multfact(num);

    return 0;

}