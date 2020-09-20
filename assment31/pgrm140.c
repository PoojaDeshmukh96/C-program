//wap which accepts string from user and copy character that string into another in reverse order.
#include<stdio.h>
#include<string.h>

void Strrev(char ar[30], char br[30])
{  
    int i,h=0;

    h=strlen(ar);
    int j=h-1;

    for(i=0;i<h;i++)
    {  
        br[i]=ar[j];
          j--;   
     }
    br[i]='\0';
}
int main()
{
    char a[30];
    char b[30] ; ///empty string.
    printf("enter a a string:");
    scanf("%[^\n]s",a );

    Strrev(a, b);
    printf("String is: %s", b);

    return 0;
}
/*
output:
enter a a string:hello world
String is: dlrow olleh

enter a a string:Ganpati Bappa Morya
String is: ayroM appaB itapnaG
*/