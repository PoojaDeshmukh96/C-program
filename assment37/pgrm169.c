 //WAP  which accept string from user & copy the content of into another string by removing whute spaces.
#include <stdio.h>
#include <string.h>
void copy(char *str)
{

   char *first,*last=0,temp;
   first=str;
   last=str;

    while(*first != '\0')
    {
        while(*first!=' ')
        {

             first++;

        }first--;

        while(*first!=' ')
        {
          temp = *last;
          *last=*first;
          *first=temp;
        }
        last++;
        first--;
    }
     
}
int main()
{
   // char arr[30];
    char arr1[30];

    printf("enter string:");
    scanf("%[^\n]s", arr1);

    copy(arr1);

    printf("copy content is:%s", arr1);
    return 0;
}
/*
output:
 enter string:life is good
 copy content is:doog si efil
*/