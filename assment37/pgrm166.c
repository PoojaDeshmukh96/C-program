////WAP  which accept string from user & coount number of words from string.
#include <stdio.h>

int count(char *str)
{
    int cnt=0;
    while (*str != '\0') //if its case is capital convert it to small
    {
        if (*str>= 'A' && *str<= 'Z')
        {
             cnt++;
             str++;
        }
        else
        {
            str++;
        }
    }
   return cnt;

    
}
int main()
{
    char arr[30];

    printf("enter string:");
    scanf("%[^\n]s", arr);

   int ans=count(arr);
     
      printf("count is:%d",ans);
    return 0;
}
/*
output:
 enter string: Hello   World    Whatssupp
 count is:3
 
 enter string: hello
 count is:0
*/