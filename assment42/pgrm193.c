//Wap which search last occurance of a particular element from a singly linear linkedlink.

#include <stdio.h>
#include <stdlib.h>

struct node //contain 2 variable
{
    int data;
    struct node *next; //node type pointer.
};

struct node *start = NULL; // to hold the address of linked lists 1st node

struct node *createnode() //struct node * is a return type of create node funtn.
{
    struct node *n;                                 //temperory pointer.
    n = (struct node *)malloc(sizeof(struct node)); // contain address of new node

    return (n);
}

void insertnode()
{
    struct node *temp, *t;
    temp = createnode();

    //printf("enter number");
    scanf("%d", &temp->data);

    //temp->data=data;

    temp->next = NULL;

    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        t = start;
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = temp;
    }
}

void display()
{
    struct node *t = start;
    while (t != NULL)
    { //printf("->");
        printf(" %d ", t->data);

        t = t->next;
    }
}
int lastoccurance()
{
    int i = 0, m=0,f=0;
    struct node *p = start;

    printf("\nenter an element:");
    scanf("%d", &m);

    while (p != NULL)
    {

        if (p->data == m)
        {
            i++;
            f=i;  //f will store the last occurance of a number
            p=p->next;
        }
        else
        {
            i++;
            p = p->next;
        }
    }
    return f;
}
int main()
{
    int n = 0;
    int m = 0;
    
    printf("enter number of nodes:");
    scanf("%d", &n);

    printf("Input are :\n");
     for(int i=1;i<=n;i++)
    {
      insertnode();
    }
    
    printf("linkedlist is :\n");
    display();

    int a=lastoccurance(m);
    printf("last occurance is %d",a);

    return 0;
}
/*
output:
enter number of nodes:6
Input are :
23
45
62
23
67
23
linkedlist is :
 23  45  62  23  67  23
enter an element:23
last occurance is 6
*/