#include<stdio.h>

void pattern(int num)
{ 
    int i;
   for(i=1;i<=num;i++)
     { 
       // ASCII values of capital starts from 65 to 91(A-Z)
         printf(" %c ",i+64);  //In this step(i+64) ,as value of i increamented then alphabet will be printed .
     }
   
}

int main()
{
    int no=0;
    printf("Enter a number:");
    scanf("%d",&no);

    pattern(no);
    return 0;

}
/*
 output:
 Enter a number:6
 A  B  C  D  E  F
*/