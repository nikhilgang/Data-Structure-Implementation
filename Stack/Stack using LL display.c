
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;



void display()
{   struct node *t;
    t=top;
    
    while(t!=NULL)
    {
        
        printf("%d ",t->data);
        t=t->next;
    }
}

int main()
{
    push(2);
    push(4);
    push(6);
    
    display();
    return 0;
}
