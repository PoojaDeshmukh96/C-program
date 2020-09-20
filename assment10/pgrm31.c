#include<stdio.h>
float area(float num)
{
    float pi=3.14;

    return pi*num*num;
  //  return value;

}
int main()
{
    float no=0.0;
    float ret=0.0;
    printf("enter any number:");
    scanf("%f",&no);

    ret=area(no);

    printf("area is %f",ret);

    return 0;
}