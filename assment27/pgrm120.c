// WAP which accept string from user and display it in reverse order.
#include <stdio.h>
#include<string.h>
char reverse(char src[])
{    
     int cnt=0;
     int i=0;h
     char temp;
  
    /*  if(*src != '\0')
    {   
        ch=*src;
        src++;
        reverse(src);
        printf("%c",ch);
    }
    */
    int l=strlen(src);
    
     for(i=l;i>=0;i--)
     {
       printf("%c",src[i]);
     }
}
int main()
{
    char arr[20];
    int ans = 0;

    printf("enter a string:");
    scanf("%[^\n]s", arr);

    ans=reverse(arr);
 
    return 0;
}
/*
output:
enter a string:marvellous
 suollevram
 */