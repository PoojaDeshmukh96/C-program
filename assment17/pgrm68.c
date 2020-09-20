#include <stdio.h>
void pattern(int no1, int no2)
{
    int i = 0, j = 0;
    //int r=0;
    for (i = 1; i <= no1; i++)
    {   
         for(j=1;j<=no2;j++)
         {
             if((i%2)!=0)
              {
                printf(" %d ",j);
              }
            else
            {
            // j=-j;
               printf("%d ",-j);
            }
        }
        printf("\n");
    }
}

int main()
{
    int num1 = 0, num2 = 0;
    printf("enter number of rows:");
    scanf("%d", &num1);

    printf("enter number of coloum:");
    scanf("%d", &num2);

    pattern(num1, num2);
    return 0;
}
/*
output:
 enter number of rows:5
 enter number of coloum:5
  1  2  3  4  5
 -1 -2 -3 -4 -5
  1  2  3  4  5
 -1 -2 -3 -4 -5
  1  2  3  4  5
*/