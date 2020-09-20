//Accept string from user & reverse the content of that string by toggling the case.
#include <stdio.h>

char strcmpre(char *ar)
{
    char *first,*last,temp;
    first=ar;
    last=ar;
    
    while(*last != '\0') 
    {
      if(*last>='A' && *last<='Z')
       {
        *last= *last +32;
        last++;
       }
      else if(*last>='a' && *last<='z')
       {
         *last= *last-32;
          last++;

       }
       else
       {
         last++;
       }
       
    }
      last--;
   
    while(first <=last)
    {
       
       temp= *first;
       *first=*last;
       *last=temp;
        
       first++;
       last--;
      
     }
}

int main()
{
    int i = 0;
  
    char arr[30] ;//= "Hello";
        
     printf("enter string:");
     scanf("%[^\n]s",arr);

     strcmpre(arr);
    
     printf("reverse string is:%s",arr);
  
    

    return 0;
}
/*
 enter string:hello world
 reverse string is:DLROW OLLEH
*/