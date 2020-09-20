//wap whcih accepts string from user & acccepts one character .check wether that character is present in string or not.

#include<stdio.h>

void chk(char ar[30],char val)
 {
     int i=0;
    int cnt=0;
    
     while(ar[i] != val)
     {
         if(ar[i]==val)
         { 
            cnt++;
         }
        i++;
     } 
       printf("found:%d",cnt);  
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
 
