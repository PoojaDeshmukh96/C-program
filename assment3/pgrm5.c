#include <stdio.h>

//int i, sum = 0;
char convrtchar(char cvall)
{
    if ((cvall>='a')&&(cvall<='z'))
    {
        cvall=cvall-32;                            //we substract 32 from lower-case letter to cnvert it into upper case
        printf("%c", cvall);
    }
    else if ((cvall>='A')&&(cvall<='Z'))
        {
            cvall=cvall+32;                       //we add 32 to upper-case letter to cnvert it into lower case
            printf("%c", cvall);
        }
}

int main()
{
    int cval = '\0';

    printf("enter any char:");
    scanf("%c", &cval);

    convrtchar(cval);

    return 0;
}