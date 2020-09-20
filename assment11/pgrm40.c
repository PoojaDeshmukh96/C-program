//wap which accpt range from user and  display numb that range in reverse order

#include <stdio.h>
int evnrange(int num1, int num2)
{
    int i = 0;

    if (num1 <= num2)                 //condtn for weather staring range is less than ending range
    {
        for (i = num2; i >= num1; i--)
        {
            printf(" %d ", i);
        }
    }
    else                              //if stating range is more than ending range
    {
        printf("invalid range.");
    }
}
int main()
{
    int no1 = 0, no2 = 0;
 
    printf("enter  staring and ending range");
    scanf("%d %d", &no1, &no2);

    evnrange(no1, no2);

    return 0;
}