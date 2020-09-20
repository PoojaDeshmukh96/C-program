//WAP  which accept string from user & copy the content of into another string by removing whute spaces.
#include <stdio.h>
#include<string.h>
void copy(char *str, char *str2)
{
    while(*str!='\0')
    {     
        if(*str ==' ')
           {   
                 str++;
           }
           else
           {
              *str2=*str;
               str++;
               str2++;
            }
           
        *str2='\0';    
    }
}
int main()
{
    char arr[30];
    char arr1[30];
  
    printf("enter string:");
    scanf("%[^\n]s", arr);

     copy(arr,arr1);

    printf("copy content is:%s", arr1);
    return 0;
}
/*
output:
enter string: w  or l     d
copy content is:world
*/