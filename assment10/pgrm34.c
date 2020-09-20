#include <stdio.h>
float cnvrttemp(float num)
{
    float val = 0.0;
    val=(num-32)*5/9; //bracket can cause error .

      return val;
}
int main()
{
    float no = 0.0;
    float ret =0.0;
    printf("enter temperature:");
    scanf("%f",&no);

    ret=cnvrttemp(no);

    printf("Temperature into celsius is : %f", ret);

    return 0;
}