 #include<stdio.h>
 #include<string.h>
 
 void pattern(char ar[30])
 { 
     int i,j=0;
    
    for(i=0;ar[i]!='\0';i++)
    {
        for(j=0;ar[j]!='\0';j++)
        {
            printf(" %c " ,ar[j]);
           
        }
         printf("\n");
    }
 }

int main()
 {
     char arr[30];
     
     printf("enter a string:");
     scanf("%[^\n]s",arr);
     
     pattern(arr);

     return 0;

 }
 /*
 output:
 enter a string:hello
 h  e  l  l  o
 h  e  l  l  o
 h  e  l  l  o
 h  e  l  l  o
 h  e  l  l  o
*/