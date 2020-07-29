#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node* create(int a[],int n)
{
    struct node *newnode,*head=NULL,*t;
    int i;
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(head==NULL)
        {
            newnode->data=a[i];
            newnode->next=NULL;
            head=newnode;
            t=head;
        }
        else
        {
            newnode->data=a[i];
            newnode->next=NULL;
            t->next=newnode;
            t=t->next;
        }
    }
    return head;
}

void display(struct node *p)
{
    struct node *t;
    t=p;
    while(t!=NULL)
    {
        printf("%d ",t->data);
        t=t->next;
    }
}

int count(struct node *p)
{
    struct node *t;
    int c=0;
    t=p;
    
    while(t!=NULL)
    {
      c++;
      t=t->next;
    }
    return c;
}

int main()
{  struct node *p;
   int a[]={1,2,3,4,5,6,7,8};
   
   p=create(a,8);
   printf("total element in linked list %d\n",count(p));
   display(p);

    return 0;
}
