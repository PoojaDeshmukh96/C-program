#include <stdio.h>
void display(int val)
{
    int i = 0;
  int  value=0;
    for (i = 1; i <=5; i++)
    {
        value=i*val;
            printf(" %d ", value);
    }
}
int main()
{
    int no1 = 0;
    int ret = 0;
    printf("enter  number:");
    scanf("%d", &no1);

    display(no1);

    return 0;
}
