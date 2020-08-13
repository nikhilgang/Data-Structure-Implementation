

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
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



int main()
{   struct node *p;
    int a[]={1,2,3,4,5,6};
    
    p=create(a,6);
    display(head);
    return 0;
}
