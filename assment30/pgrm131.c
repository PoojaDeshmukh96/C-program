//write a program  to copy content from one string into another.

#include <stdio.h>
void strcpyx(char ar[30],char br[30])
{   int i=0;
     while(ar[i]!='\0')
     {
         br[i]=ar[i];
         i++;
     }
     br[i]='\0';

}
int main()
{
    char a[30]; 
    char b[30]; //empty string
        
      printf(" string :"); 
      scanf ("%[^\n]s",a);

    strcpyx(a,b);
    printf("copy string is:%s",b);

    return 0;

}
/*
output:
 string :Ganpati bappa moryra
copy string is:Ganpati bappa moryra

*/