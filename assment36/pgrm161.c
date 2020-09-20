//WAP which accepts 2 string & concat N characters of second string after first string.value of N shold be accepts from user. 
#include<stdio.h>
 
 void strncatX(char *ar,char *br,int n)
{
    while(*ar!='\0')
    {
       ar++;
    }
    while((*br!='\0') &&(n!=0))
    {
        *ar=*br;
        ar++;
        br++;
        n--;
    }
    *br='\0';
}

int main()
{
    int no=0;

    char arr[30]="Marvellous infosystem ";
    char brr[30]="logic buliding ";
    
    printf("Number of character :");
    scanf("%d",&no);

    strncatX(arr,brr,no);
    printf("string is :%s",arr);

    return 0;
}
/*
output:
Number of character :5
string is :Marvellous infosystem logic
*/