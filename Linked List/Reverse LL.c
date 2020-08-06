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

void reverse(struct node *p)
{
    struct node *t1,*t2;
    t1=p;
    p=p->next;
    t2=p->next;
    t1->next=NULL;
    while(t2!=NULL)
    {
        p->next=t1;
        t1=p;
        p=t2;
        t2=t2->next;
    }
    p->next=t1;
    display(p);
    
}




int main()
{  struct node *p;
   int a[]={1,2,3,4,5,6,7,8};
   
   p=create(a,sizeof(a)/sizeof(a[0]));
   
   reverse(p);

    return 0;
}
