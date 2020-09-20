//wap which accepts string from user & toggle the case.
#include <stdio.h>
void toggle(char ar[30])
{
    int i = 0;
    for (i = 0; ar[i] != '\0'; i++)
    {
        if (ar[i] >= 'A' && ar[i] <= 'Z')
        {
            ar[i] = ar[i] + 32;
        }
        else if(ar[i] >= 'a' && ar[i] <= 'z')
        {
            ar[i]=ar[i] - 32;
        }
        
    }
}

int main()
{
    char arr[30];

    printf("enter a string:");
    scanf("%[^\n]s", arr);

    toggle(arr);

    printf("Modified string is:%s", arr);

    return 0;
}
/*
output:
 enter a string:Marvellous Infosystem
 Modified string is:mARVELLOUS iNFOSYSTEM
*/