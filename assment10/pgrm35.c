#include <stdio.h>
double sqrmeter(int num)
{
   float val=0.0;
   val=0.0929*num;
   return val;
}
int main()
{
    int no =0;
    double ret =0.0;
    printf("enter area in feets:");
    scanf("%d",&no);

    ret=sqrmeter(no);

    printf("Area in meters is : %f", ret);

    return 0;
}