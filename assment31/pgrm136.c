//wap which accepts string from user and copy character that string into another by removing all white spaces.
#include<stdio.h>
#include<string.h>

void StrCpyX(char *ar, char *br)
{
    while(*ar!='\0')
    {
        if(*ar!=' ')
        {
            *br=*ar;
            *br++;
        }
      *ar++;
    }
     *br++ = '\0';
}
int main()
{
    char a[30];
    char b[30] ; ///empty string.
    printf("enter a a string:");
    scanf("%[^\n]s",a );

    StrCpyX(a, b);
    printf("String is: %s", b);

    return 0;
}
/*
output:
 enter a a string:h e ll o wo r ld
 String is: helloworld

 enter a a string:h e y w h a t s u p!!
 String is: heywhatsup!!
*/