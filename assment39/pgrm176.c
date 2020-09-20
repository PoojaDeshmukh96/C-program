//WAP which accepts two string from user & display length of both string.
#include <stdio.h>
#include <string.h>

void length(char *ar, char *br)
{
    int i=0, j = 0, k = 0;
     while(*ar!='\0')
     {
         i++;
         ar++;
     }
     printf("length of 1st string is:%d",i);

     while(*br!='\0')
     {
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
enter a string:hie there
enter a string:whatsupp
length of 1st string is:9
length of 2ed string is:8
*/