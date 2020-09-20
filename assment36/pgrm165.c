//Accept string from user & check whether a string is palindrome without considering its case.
#include<stdio.h>
 
 void chkpal(char *str)
 {
   char *first;
   char *last;
   first=str;
   last =str;

 while(*last!='\0')   //if its case is capital convert it to small
  { 
     if(*last>='A' && *last<='Z')
     {
        *last= *last +32;
        last++;
     }
      else
      {
          last++;

      }
  } 
  last--;

  
 while(*first==*last)   //checkig if last and last char are same or not 
  {
    if(*first <= *last)

     {
         first++;
          last--;
     }
    else 
         break;
 }

   if(last<first)    
   {
        printf("Pallindrome");
   }
   else
   {
     printf("Not pallindrome");
   }
 
   

 }
 int main()
 {
     char arr[30];
    
     printf("enter string:");
     scanf("%[^\n]s",arr);
    
     chkpal(arr);
  
     return 0;
 }
 /*
 output:
 enter string:madam
 Pallindrome

enter string:ABcba
Pallindrome

enter string:hello
Not pallindrome
*/