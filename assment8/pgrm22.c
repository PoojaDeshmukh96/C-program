#include <stdio.h>
void number(int val)
{
    switch(val)
    {
        case 0:
             printf("zero");
             break;

         case 1:
           printf("one");
           break;
        
         case 2:
          printf("two");
          break;

         case 3:
          printf("three");
          break;

         case 4:
          printf("four");
          break;

         case 5:
          printf("five");
          break;

         case 6:
          printf("six");
          break;

        case 7:
          printf("seven");
          break;   
        
        case 8:
          printf("eight");
          break;   
           
        case 9:
          printf("nine");
          break;
        
         case -1:
           printf("one");
           break;
        
         case -2:
          printf("two");
          break;

         case -3:
          printf("three");
          break;

         case -4:
          printf("four");
          break;

         case -5:
          printf("five");
          break;

         case -6:
          printf("six");
          break;

        case -7:
          printf("seven");
          break;   
        
        case -8:
          printf("eight");
          break;   
           
        case -9:
          printf("nine");
          break;
        
        default:
        printf("invalid choice");

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
