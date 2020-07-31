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

void insert(struct node *p,int pos,int x)
{
    struct node *newnode,*t;
    int i;
    t=p;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    if(pos==0)
    {
        newnode->next=t;
        p=newnode;
    }
    else
    {
        for(i=0;i<pos-1;i++)
        {
            t=t->next;
        }
        newnode->next=t->next;
        t->next=newnode;
    }
    display(p);
}
int main()
{   
    struct node *p;
    int ele,pos;
    
   int a[]={1,2,3,4,5,6,7,8};
   
   p=create(a,8);
   printf("Enter position and element that u want insert  ");
   scanf("%d%d",&pos,&ele);
   
   //display(p);
   //printf("\n");
   insert(p,pos,ele);

    return 0;
}
