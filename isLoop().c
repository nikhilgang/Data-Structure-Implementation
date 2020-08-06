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

void isLoop(struct node *p)
{
    struct node *t1,*t2;
    t1=t2=p;
    do
    {
        t1=t1->next;
        t2=t2->next;
        t2=(t2!=NULL) ? t2->next : t2;
    }while(t1!=NULL && t2!=NULL && t1!=t2);
    if(t1==t2)
        printf("loop exist");
    else
        printf("no loop exist");
}



int main()
{  struct node *p;
   int a[]={10,20,30,40,50,60,70};
   
   p=create(a,sizeof(a)/sizeof(a[0]));
   
   isLoop(p);

   return 0;
}
