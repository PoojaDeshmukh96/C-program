#include<stdio.h>

float calper(float no1,float no2)
{ 
   float value=0;

   value=no2/no1*100;
  
    return value;
  
}
int main()
{
    int num1 = 0, num2 = 0;
    float ret = 0;

    printf("enter total number:");
    scanf("%d", &num1);
    
    printf("marks obtain is:");
    scanf("%d", &num2);

    ret = calper(num1, num2);
    
    printf("percentage is %f:",ret);

    return 0;
}
