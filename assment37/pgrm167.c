//WAP  which accept string from user & coount number of words from string.
#include <stdio.h>
#include<string.h>
int count(char *str)
{
    int max = 0;
    int h=strlen(str);
    while (*str != '\0') 
    {
        if (*str ==' ')
        {
            while(*str==' '&& *str!='\0')
            {
             str++;
            }
        }
        else
        {  
           while(*str!=' ' )//&& *str!=0)
            {
                max++;
               str++;
            }
            if(max >=(h/2))
              printf("%d",max);
            else
            {
                str++;
            }
            
        }

    
    }
    return max;
}
int main()
{
    char arr[30];

    printf("enter string:");
    scanf("%[^\n]s", arr);

    int ans = count(arr);

    printf("count is:%d", ans);
    return 0;
}