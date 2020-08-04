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



int delete1(struct node *p,int pos)
{   
    struct node *t,*t1;
    int val,i;
    t=p;
    t1=NULL;
    if(pos==0)
    {
        t1=p;
        val=p->data;
        p=p->next;
        free(t1);
    }
    else
    {
        for(i=0;i<pos;i++)
        {
           t1=t;
           t=t->next;
        }
        val=t->data;
        t1->next=t->next;
        free(t);
    }
    display(p);
    return val;
}

int main()
{  struct node *p;
   int a[]={1,2,3,4,5,6,7,8};
   
   p=create(a,8);
   
   printf("deleted value is %d \n",delete1(p,0));
   
   //display(p);

    return 0;
}
