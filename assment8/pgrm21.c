#include <stdio.h>
void number(int val)
{
  if(val<50)
  {
  printf("number is small");
  }
  else if((val>=50)&&(val<=100))
  {
     printf("number is median");
  }
  else if(val>100)
  {
        printf("number is greater");
  }
  
}
int main()
{
    int no1 = 0;
    //int ret = 0;
    printf("enter  number:");
    scanf("%d", &no1);

    number(no1);

    return 0;
}
