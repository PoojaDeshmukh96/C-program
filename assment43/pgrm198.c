//Wap which display all the element which are perfect from a singly linear linkedlink.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

struct node *createnode()
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));

    return (n);
}

void insertnode()
{
    struct node *temp, *t;
    temp = createnode();

    // printf("enter data");
    scanf("%d", &temp->data);

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
    {
        printf(" %d ", t->data);
        t = t->next;
    }
}

int addition()
{
    int sum = 0, m = 0;
    struct node *p = start;

    while (p != NULL)
    {
        sum = sum + p->data;
        p = p->next;
    }
    printf("\nAddition is:%d", sum);
}

void perfect()
{
    struct node *t = start;
    int no = 0;
    //no = t->data;

    printf("\nperfect numbers are:");

    while (t != NULL)
    {
        no = t->data;
        if (no % 2 != 0)
        {
            printf(" %d ", no); //   no = t->data;
        }
        t = t->next;
    }
    //  printf("\nsmallest number is:%d", no);
}

int main()
{
    int n = 0;
    printf("enter number of nodes:");
    scanf("%d", &n);

    printf("Inputs are :\n");
    for (int i = 1; i <= n; i++)
    {
        insertnode();
    }

    printf("linkedlist is :\n");
    display();

    perfect();
    return 0;
}
/*
 output: 
 enter number of nodes:6
 Inputs are :
 11
 20
 17
 41
 22
 89
 linkedlist is :
 11  20  17  41  22  89
 perfect numbers are: 11  17  41  89
*/