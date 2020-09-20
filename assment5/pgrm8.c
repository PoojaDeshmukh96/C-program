#include<stdio.h>

int revfact(int n)
{
  int i=0;
  
   for(i=n-1;i<n;i--)
      
   {
       if(n%i==0)   //if value and i ka modulo 0 aya den sum kro means only multiple of that value he aayege
       {
      
          printf(" %d " , i);   
       }     
   }
  
}
int main()
{
    int num=0,iret=0;

    printf("enter any no:");
    scanf("%d",&num);

    iret=revfact(num);

    return 0;

}