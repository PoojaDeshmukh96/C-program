//WAP which accpets string from user and count number of captital characters .
#include<stdio.h>

int count(char *src)
{
    int cnt=0;
    
    while(*src!='\0')
    {
       if(*src >='A' && *src <='Z')
       {
           cnt++;
       }
      src++;
    }
    return cnt;
}
int main()
{
    char arr[20];
    int ans=0;

    printf("enter a string:");
    scanf("%[^\n]s",arr);

    ans=count(arr);
    printf("count of captial characters are: %d ",ans);
    
    return 0;
}
/*
output:
 enter a string:Hello World 
 count of captial characters are:2

 enter a string:Marevellous Mullti Os
 count of captial characters are: 3
*/