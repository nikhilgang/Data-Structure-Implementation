#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

void sum(struct node *p)
{
    int s=0;
    while(p!=NULL)
    {
        s=s+p->data;
        p=p->next;
    }
    printf("sum is %d",s);
}
int main()
{  struct node *p;
   int a[]={1,2,3,4,5,6,7,8};
   
   p=create(a,8);
   
   display(p);
   printf("\n");
   sum(p);

    return 0;
}
