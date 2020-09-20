#include <stdio.h>
int cnvrtdist(int num)
{
  int val=0;
  val=1000*num;

  return val;
}
int main()
{
    int no = 0;
    int ret = 0;
    printf("enter distance:");
    scanf("%d", &no);

    ret = cnvrtdist(no);

    printf("Distance into meters is : %d", ret);

    return 0;
}