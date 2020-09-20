#include <stdio.h>
#include <string.h>

void pattern(char ar[30])
{
    int i,j=0,k=0;
    int h=strlen(ar);
    for (i = 0; ar[i] != '\0'; i++)
    {
        for (j =0; j<= h; j++)
        {  
             if(ar[j]>='a' && ar[j]<='z')
              {
               ar[j]=ar[j]-32;
              printf(" %c ", ar[j]);
              }
              else
              {
                printf(" %c ", ar[j]);  /* code */
              }
           }  
              printf("\n");
        }
}

int main()
{
    char arr[30];

    printf("enter a string:");
    scanf("%[^\n]s", arr);

    pattern(arr);

    return 0;
}
/*
outp[ut:
enter a string:Hello
 H  E  L  L  O
 H  E  L  L  O
 H  E  L  L  O
 H  E  L  L  O
 H  E  L  L  O
 */