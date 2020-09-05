
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;


void push(int ele)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=ele;
    
    newnode->next=top;
    top=newnode;
    
}

int pop()
{   struct node *t;
    int ele;
    if(top==NULL)
        printf(" Stack underflow ");
    else
    {   
        t=top;
        ele=top->data;
        top=top->next;
        free(t);
    }
    return ele;
}

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
    
    printf("poped element is : %d\n",pop());
    display();
    return 0;
}
