/*accept charcter from user and .If character is small display all the characyter in reverse order,& if its is capital display all character from 
  input till Z & in other case display as it is.*/

#include <stdio.h>

void display(char value)
{    
    int i=0;
    // int k=0;
   {
    if (value >= 'A' && value <= 'Z')
    {     
        for(i=value;i<'Z';i++) 
        { 
         value=value+1;
         printf(" %c ", value );
        
        }
    }

    else if( value>='a' && value<='z')
    { 
       for(i=value;i>'a';i--)
        { 
            value=value-1;
            printf(" %c ", value);
        }
    }
   }
}

int main()
{
    char ch = '\0';

    printf("Enter any character:");
    scanf("%c", &ch);

    display(ch);

    return 0;
}
/*
output:
 Enter any character:Q
 R  S  T  U  V  W  X  Y  Z

 Enter any character:m
 l  k  j  i  h  g  f  e  d  c  b  a

*/