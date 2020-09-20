//wap which accepts string from user & convert it into lower case.
#include<stdio.h>
 void cnvt(char ar[30])
 {
    int i=0;
    for(i=0;ar[i]!='\0';i++)
    {
        if(ar[i]>='A' && ar[i]<='Z')
         {
             ar[i]=ar[i]+32;
         }
         
    }
 }

 int main()
 {
     char arr[30];

     printf("enter a string:");
     scanf("%[^\n]s",arr);

     cnvt(arr);

     printf("Modified string is:%s",arr);
     
    return 0;

 }
 /*
 output:
 enter a string:HELLO
 Modified string is:hello
*/