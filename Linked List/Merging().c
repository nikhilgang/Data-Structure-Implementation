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
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

void Merge(struct node *p1, struct node *p2)
{
    struct node *t1;
    t1=p1;
    while(t1->next!=NULL)
    {
        t1=t1->next;
    }
    t1->next=p2;
    
    display(p1);
}




int main()
{  struct node *p1,*p2;
   int a[]={10,20,30,40,50},b[]={60,70,80,90,100};
   
   p1=create(a,sizeof(a)/sizeof(a[0]));
   p2=create(b,sizeof(b)/sizeof(b[0]));
   
   Merge(p1,p2);

   return 0;
}
