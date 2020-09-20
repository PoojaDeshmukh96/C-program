/*accept charcter from user and .If character is small display it corresponding capital,& if its is capital display its corresponding 
   small & if its is symbol display as it is.*/

#include <stdio.h>

void display(char value)
{
    if (value >= 'a' && value <= 'z')
    {      
        printf(" Changed case is:%c",value-32);
    }
    else if (value >= 'A' && value <= 'Z')
    {
        printf("Changed case is :%c",value+32);
    }
   
    else
    {
        printf("Case not changed:%c",value);
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
 Changed case is:q
 
 Enter any character:m
 Changed case is:M
 
 Enter any character:%
 Case not changed :%
*/