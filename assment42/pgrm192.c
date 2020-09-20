//Wap which search first occurance of a particular element from a singly linear linkedlink.

#include<stdio.h>
#include<stdlib.h>

struct node                  //contain 2 variable 
{
    int data;    
    struct node *next;     //node type pointer.
};

struct node *start=NULL;  // to hold the address of linked lists 1st node

 
struct node* createnode()  //struct node * is a return type of create node funtn.
 {
     struct node *n; //temperory pointer.
     n=(struct node *)malloc(sizeof(struct node)); // contain address of new node 

     return (n);
 }

void insertnode()
{
  struct node * temp,*t;
  temp=createnode();
 
   //printf("enter number");
   scanf("%d",&temp->data);
  
  //temp->data=data;
  
  temp->next=NULL;

  if(start==NULL)
  {
      start=temp;
  }
  else
  {
   t=start;
   while(t->next!=NULL)
   {
       t=t->next;
   }
   t->next=temp;

  }
  
}

void display()
{
    struct node *t=start;  
   while(t!=NULL)
 {   //printf("->");
     printf(" %d ",t->data);
   
     t =t->next;
 }
}
 int occurance()
{
    int i=0,m=0;
   struct  node *p=start;
    
    printf("\nenter an element:");
    scanf("%d",&m);

    while(p!=NULL)
    { 
    
        if(p->data==m)
        {   
            i++;
            printf("Position is:%d ",i);
            break;
        }
        else 
       { 
          i++;
         p=p->next;  
       }
       
    }
}
 int main()
 {
      int n=0;
      int m=0,i=0;
     
      printf("enter number of nodes:");
      scanf("%d",&n);
      
      printf("Input are :\n");
      for(i=1;i<=n;i++)
      {
        insertnode();
      }
     
      printf("linkedlist is :\n");
      display(); 
     
      occurance();
      
      return 0;
 }
/*
output:
enter number of nodes:4
Input are :
7
87
34
77
Linkedlist is :
 7  87  34  77
cElement you want to search:77
 Position is:4
*/