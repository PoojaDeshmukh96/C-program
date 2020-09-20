//WAP which accepts 2 string & check whether the content of 2 strings are equal or not.
#include <stdio.h>
#define TRUE 1
#define FALSE 0
 typedef int BOOL;

BOOL strncatX(char *ar, char *br)
{
    while ((*ar != '\0') && (*br != '\0'))
    {
        ar++;
        br++;
    }
    
    if(*ar=='\0' && *br=='\0')
    
      return 1;
    
    else
    
     return 0;
    
}

int main()
{
    int no = 0;
    BOOL ans=FALSE;
    char arr[30] = "hello world ";
    char brr[30] = "hello world ";


    ans= strncatX(arr,brr);
    
     if(ans==1)
      printf("Strings are equal");
    else
      printf("Strings are not equals");

    return 0;
}
/*
output:
Strings are equals
*/