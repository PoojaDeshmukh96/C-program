#include <stdio.h>

int factors(int ino)
{
    int i= 0;
    if (ino <= 0)
    {
        ino=-ino;
    }
    else if (ino >= 0)
    {
        for (i = 1; i < ino; i++)
        {
            if((ino%i)==0 )                     // 24%(1..upto 24)==0....to check id the numb is the factr of 24
            {
               if((i%2)==0)                      //(1 upto 24) %2==0...means chkr  if facctor  is even or not  .
                                               //if(ino%i)==0 && (i%2)==0) above 2 condtn can be written like this also
              {
                   printf("\n %d",i);         // only even factr will be printed on screen
              }
            }
        }
    }
}

int main()
{
    int ival = 0;

    printf("enter any numb:");
    scanf("%d", &ival);

    factors(ival);

    return 0;
}