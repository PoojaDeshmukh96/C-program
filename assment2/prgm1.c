#include <stdio.h>

int Display(int ino, int fre)
{ 
 if(fre<0 )
  {
   fre=-fre;
   int i=0;
     for (i = 0; i <fre; i++)
    {
        printf("\n%d",ino);
    }
}

else
{
    int i = 0;
    for (i = 0; i <fre; i++)
    {
        printf("\n%d", ino);
    }
}
}

int main()
{
    int ivalue = 0;
    int icount = 0;

    printf("\n enter any number");
    scanf("%d", &ivalue);

    printf("\n enter any frequency");
    scanf("%d", &icount);

    Display(ivalue, icount);

    return 0;
}