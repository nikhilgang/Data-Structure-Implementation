

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head=NULL;

struct node* create(int a[],int n)
{
  struct node *t,*newnode;
  int i;
  newnode=(struct node*)malloc(sizeof(struct node)); 
  head=newnode;
  newnode->data=a[0];
  newnode->next=NULL;
  newnode->prev=NULL;
  t=head;
  
  for(i=1;i<n;i++)
  {
      newnode=(struct node*)malloc(sizeof(struct node));
      newnode->data=a[i];
      newnode->prev=t;
      t->next=newnode;
      t=t->next;
      newnode->next=NULL; 
  }
  return head;
}

void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}



void insert(struct node *p,int index,int x)
{
  struct node *newnode;
  int i;
  newnode=(struct node*)malloc(sizeof(struct node)); 
  newnode->data=x;
  newnode->next=NULL;
  newnode->prev=NULL;
    
    if(index==0)
    {
        newnode->next=p;
        p->prev=newnode;
        p=p->prev;
        head=p;
    }
    else
    {
        for(i=0;i<index;i++)
        {
            p=p->next;
        }
        if(p->next==NULL)
        {
            p->next=newnode;
            newnode->prev=p;
        }
        else
        {
            newnode->next=p->next;
            newnode->prev=p->prev;
            (p->prev)->next=newnode;
            (p->next)->prev=newnode;
        }
    }
}

int main()
{   struct node *p;
    int a[]={1,2,3,4,5,6};
    
    p=create(a,6);
    display(head);
    printf("\n");
    insert(p,5,9);
    display(head);
    return 0;
}
