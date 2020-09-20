//wap whic accpt range from user and display even no into that range
#include<stdio.h>
void evnrange(int num1,int num2)
{
    int i=0;
    if(num1<=num2)
    {
       for(i=num1;i<=num2;i++)
       if((i%2)==0)
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

     evnrange(no1,no2);

    return 0;
}