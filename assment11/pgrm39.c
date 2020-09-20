//wap which accpt range from user and return addtn of even numb only from  that range(only +v no)

#include <stdio.h>
int evnrange(int num1, int num2)
{
    int i = 0, Add = 0;
    if (num1 > 0)                                  //condtn for chking wheather no is +ve or not
    {
        if (num1 <= num2)                           //condtn for weather staring range is less than ending range
        {
            for (i = num1; i <= num2; i++)
                if ((i % 2) == 0)                   //chk if numb is even or not 
                {
                    // printf(" %d ", i);
                    Add = Add + i;                  //addtn of even numb only
                }
        }
        else                                        //if stating range is more than ending range
        {
            printf("invalid range.");
        }
    }
    else                                            //if numb is -ve than else part is executed
    {
        printf("invalid range.");
    }
    return Add;
}
int main()
{
    int no1 = 0, no2 = 0;
    int ret = 0;
    printf("enter  staring and ending range");
    scanf("%d %d", &no1, &no2);

    ret = evnrange(no1, no2);

    printf("\n Addition is:%d", ret);
    return 0;
}