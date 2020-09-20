#include<stdio.h>
void display(int num)
{   int i=0;
    if(num>=0)
    {
        for(i=1;i<=num;i++)
        {
            printf(" * ");
        }
        for(i=1;i<=num;i++)
        {
            printf(" $ ");
        }
    }
    else if(num<=0)
    {
        num=-num;
        for(i=1;i<=num;i++)
        {
            printf(" * ");
        }
        for(i=1;i<=num;i++)
        {
            printf(" $ ");
        }
    }
    
}
int main()
{
    int no=0;
    printf("enter number:");
    scanf("%d",&no);

    display(no);

    return 0;

}
