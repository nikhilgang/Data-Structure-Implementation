#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;

void enqueue(int x)
{
        
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=x;
        newnode->next=NULL;
        if(front==NULL && rear==NULL)
        {
            front=newnode;
            rear=newnode;
        }
        else
        {
            rear->next=newnode;
            rear=rear->next;
        }
}

int dequeue(struct node *t)
{
    int x;
    x=t->data;
    front=t->next;
    free(t);
    return x;
}

void display(struct node *t)
{
    while(t!=NULL)
    {
        printf("%d ",t->data);
        t=t->next;
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    printf("deleted ele %d \n",dequeue(front));
    printf("deleted ele %d \n",dequeue(front));
    display(front);
    
    return 0;
}
