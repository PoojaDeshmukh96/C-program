#include<stdio.h>
 
 int main()
 {
     char name[30];
  
     printf("please enter name:");
     scanf("%[^\n]",&name);  //the format specifier "%[^\n]" tells to compiler that read character until "\n" not found.
     
     printf("your name is %s",name);
  
     return 0;

 }
/*
output:
 please enter name:pooja deshmukh
 your name is pooja deshmukh
*/