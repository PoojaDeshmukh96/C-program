#include <stdio.h>

void pattern(int no)
{
    
    int a = 0, j = 0;

    int size = 0;// rev = 0;
   int rev=no;
    while (rev != 0)
    {
        printf("%d", rev % 10);
        for (j = rev % 10; j > 0; j--)
        {
            printf(" # ");
        }

        printf("\n");
        rev /= 10;
    }
}
int main()
{

    int num = 0;

    printf("enter any number:");
    scanf("%d", &num);

    pattern(num);

    return 0;
}
/*
 output:
 enter any number:7846
 6 #  #  #  #  #  #
 4 #  #  #  #
 8 #  #  #  #  #  #  #  #
 7 #  #  #  #  #  #  #
*/