#include<stdio.h>
float area(float num1,float num2)
{
     float area=0.0;
    area= num1*num2;
    return area;
}
int main()
{
    float heig=0.0,wid=0.0;
    float ret=0.0;
    printf("enter height and weidth:");
    scanf("%f %f",&heig,&wid);

    ret=area(heig,wid);

    printf("area is %f",ret);

    return 0;
}