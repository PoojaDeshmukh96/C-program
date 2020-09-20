#include <stdio.h>

int i, sum = 0;
int chkevn(int ino)
{
    if (ino <= 0)
    {
        return 0;
    }
    else if (ino >= 0)
    {
        for (i = 1; i <= ino; i++)
        {
            printf("\n %d", 2 * i);// 2 ko into kro by the value of i
          //  sum = 2 * i;
        }
    }
}

int main()
{
    int ival = 0;

    printf("enter any numb:");
    scanf("%d", &ival);

    chkevn(ival);

    return 0;
}