#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;



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
