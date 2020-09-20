//program to convert us doller into indian rs.// 

#include<stdio.h>
int convertdllr(int num)
{
    int value=0;
    value=num*70; //converting doller into rs

    return value; //return converted value

}
int main()
{
    int no=0;
    int ret=0;

    printf("enter any number:");
    scanf("%d",&no);

    ret=convertdllr(no);
    printf("value is %d",ret); //print the value

    return 0;
}