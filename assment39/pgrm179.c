//WAP which accepts two string from user & concat second string at the end of first string in reverse order.
 #include <stdio.h>
 #include <string.h>

 void compare(char *ar, char *br)
 {  
    int h=strlen(br);
    int i=0;
    while( *ar!='\0' )
      { 
        ar++;
      }
       while( *br!='\0' )
      { 
        br++;
      }
      br--;
    while (*br!=' ')
      { 
         *ar= *br;
         ar++;
         br--;

      }
 }

 int main()
 {
    char arr[30];
    char brr[30];

    printf("enter a string:");
    scanf("%[^\n]s", arr);
    printf("enter a string:");
    scanf("%s", brr);

    compare(arr, brr);
         
    printf("%s",arr);
    return 0;
 }
 
 /*
 output:
 enter a string:HELLO
 enter a string:WORLD
 HELLODLROW
 */