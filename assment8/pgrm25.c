#include <stdio.h>

void table(int val)
{
    int value = 1;   //to store the sum .
    int i = 0;       
    if (val <= 0)
    {
        val = -val;   //if numb is -ve contver it into +ve
        for (i = val; i >= 1; i--)  
        {
            value = value* i;  //value=1*5=5 => 5*4=20 => 20*3=60 => 60*2=120 => 120*1=120   //op=120
            printf(" %d ",i);  //value of i is printed
        
        }
        printf("\n %d ", value);
    }
    else              //if numb is +ve
    {
        for (i = val; i >= 1; i--)
        {
            value = value * i;
            printf(" %d ",i);
        }
           printf("\n %d ", value);
    }
}
int main()
{
    int no1 = 0;
    //int ret = 0;
    printf("enter  number:");
    scanf("%d", &no1);

    table(no1);

    return 0;
}
