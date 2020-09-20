#include <stdio.h>
#include <string.h>

void pattern(char ar[30])
{
    int i, j = 0, k = 0;
    int h = strlen(ar);
    
    for (i = h; i<=h; i--)
    {
        
       for (j = h; j<=i; j--)
      {
    
        printf(" %c ", ar[j]); 
    
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