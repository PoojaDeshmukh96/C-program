#include<stdio.h>
void display(int val)
{int i=0;
    for(i=1;i<=val;i++)
    {
        if((i%2)!=0)
        {
            printf(" %d ",i);
        }
    }
}
int main()
{
     int no1 = 0;
    int ret =0;
    printf("enter  number:");
    scanf("%d", &no1);

    display(no1);
    
    return 0;
}
