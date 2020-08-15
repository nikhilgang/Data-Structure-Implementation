

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


int delete(struct node *p,int index)
{
    int ele,i;
    if(index==0)
    {
        ele=p->data;
        head=p->next;
        (p->next)->prev=NULL;
        
        free(p);
        
    }
    else
    {
        for(i=0;i<index;i++)
        {
            p=p->next;
        }
        ele=p->data;
        if(p->next==NULL)
        {
            (p->prev)->next=NULL;
        }
        else
        {
            (p->prev)->next=p->next;
            (p->next)->prev=p->prev;
        }
        
        free(p);
    }
    
    return ele;
}

int main()
{   struct node *p;
    int a[]={1,2,3,4,5,6};
    
    p=create(a,6);
    display(head);
    printf("\n");
    delete(p,5);
    display(head);
    return 0;
}
