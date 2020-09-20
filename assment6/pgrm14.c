#include<stdio.h>
int multiple(int no1,int no2,int no3)
{
   int value=0;
   
   if(no1<=0) 
   { 
      value=no2*no3;
      printf("%d",value);
    }
   
     if(no2<=0)
   { 
    //no2=1;
      value=no1*no3;
      printf("%d",value);
    }
   
     if(no3<=0)
   { 
     value=no1*no2;
      printf("%d",value);
    }
   
    if((no1==0)&&(no2==0))
    { 
      printf("%d",no3);
    }

     if((no1==0)&&(no3==0))
   {  
      printf(" %d ",no2);
    
    }
    
     if((no2==0)&&(no3==0))
   { 
      
      printf("%d",no1);
  }
     
    else
   {
   value=no1*no2*no3;
   printf("%d",value);
   }
}

int main()
{
     int num1 = 0,num2=0,num3=0;
    int ret =0;
    printf("enter three number:");
    scanf("%d %d %d", &num1,&num2,&num3);

    ret = multiple(num1,num2,num3);
    
   //printf("%d",ret);
    return 0;
}
