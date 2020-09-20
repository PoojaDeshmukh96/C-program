#include<stdio.h>
void range(int num1,int num2)
{
    int i=0;
    if(num1<=num2)
    {
       for(i=num1;i<=num2;i++)
       {
        printf(" %d ",i);
       }
    }
    else
    {
        printf("invalid range.");
    }
    
}
int main()
{
    int no1=0,no2=0;
    int ret=0;
    printf("enter  staring and ending range");
    scanf("%d %d",&no1,&no2);

    range(no1,no2);

    return 0;
}