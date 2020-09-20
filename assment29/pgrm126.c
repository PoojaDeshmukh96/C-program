//wap whcih accepts string from user & acccepts one character .check wether that character is present in string or not.

#include<stdio.h>

void chk(char ar[30],char val)
 {
     int i=0;
    int cnt=0;
     for(i=0;ar[i] != 'val';i++)
     {
         if(val==ar[i])
         {
          printf("character found");
          break;
         } 
        continue;
     }
    
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
 /*
 enter any string:hey whatsupp man
 enter a character:u
 character found.

 enter any string:house
 enter a character:q
*/