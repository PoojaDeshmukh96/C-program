//WAP which accepts two string from user & display count of capital letters from both the string.
#include <stdio.h>
#include <string.h>

void length(char *ar, char *br)
{
    int i=0, j = 0, k = 0;
     while(*ar!='\0')
     {
         if(*ar>='A' && *ar<='Z')
         i++;
         ar++;
     }
     printf("length of 1st string is:%d",i);

     while(*br!='\0')
     {
          if(*br>='A' && *br<='Z')
         j++;
         br++;
     }
     printf("\nlength of 2ed string is:%d",j);

}

int main()
{
    char arr[30];
    char brr[30];
    
    printf("enter a string:");
    scanf("%[^\n]s", arr);

    printf("enter a string:");
    scanf("%s", brr);
  
    length(arr,brr);

    return 0;
}
/*
output:
enter a string:Hey
enter a string:WoRlD
length of 1st string is:1
length of 2ed string is:3
*/