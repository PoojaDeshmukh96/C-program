//accept charcter from user and check whether it is digit or not.(0-9)
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void chkalpha(char value)
{
    if (value == 'a'||value == 'A')
    {
        printf("Your exam at 7am");
    }
    else if(value == 'b'||value == 'B')
    {
        printf("Your exam at 8:30am");
    }
    else if(value == 'c'||value <= 'C')
    {
       printf("Your exam at 9:20am");
    }
    else 
    {
       printf("Your exam at 10:30am.");
    }
    

}

int main()
{
    char ch = '\0';
    //ans = ;

    printf("Enter any character:");
    scanf("%c", &ch);

     chkalpha(ch);

    
    return 0;
}
/*
output:
 Enter any character:d
 Your exam at 10:30am.
 
 Enter any character:C
 Your exam at 9:20am