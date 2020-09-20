//WAP which accepts two string from user & check whether both the string are same or not without conidering case.
#include <stdio.h>
#include <string.h>

void compare(char *ar, char *br)
{  
    while(( *ar >='A'  && *ar <= 'Z' )|| (*br >='A'  && *br <= 'Z' ) )
      { 
         *ar= *ar+32;
         *br= *br+32;

         ar++;
         br++;
      }
    while (*ar==*br)
      {
         if( *ar == '\0'  && *br == '\0')
         break;
     
          ar++;
          br++;
      }
    
    if( *ar == '\0'  && *br == '\0')
       printf("Strings are same.");
     else
       printf("Strings are not same");
  }

int main()
{
    char arr[30];
    char brr[30];

    printf("enter a string:");
    scanf("%[^\n]s", arr);

    printf("enter a string:");
    scanf("%s", brr);

    compare(arr, brr);

    return 0;
}
/*
 output:
 enter a string:HelLO
 enter a string:hELlo
 Strings are same.

 enter a string:world
 enter a string:hello
 Strings are not same.
*/