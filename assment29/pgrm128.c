#include<stdio.h>

void chk(char ar[30],char val)
 {
     int i=0;
    int cnt=0;
    
     while(ar[i] != val)
     {
         if(ar[i]==val)
         { 
             break;
        }
          i++;
     } 
      printf("found:%d ",i); 
}
 

 int main()
 {
     char a[30];
     char ch;
    
     printf("enter any string:");
     scanf("%[^\n]s",&a);
     
    printf("enter a character:");
    scanf("%s",&ch);
    
    chk(a,ch);

    return 0;
    }
 
