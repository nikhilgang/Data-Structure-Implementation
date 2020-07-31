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

void Sortedinsert(struct node *p,int x)
{
    struct node *newnode,*t,*t1=NULL;
    int i;
    t=p;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    
    while(t!=NULL)
    {
        if(t->data>x && t1==NULL)
        {
            newnode->next=t;
            p=newnode;
            break;
        }
        else if(t->data>x && t1!=NULL)
        {
            newnode->next=t;
            t1->next=newnode;
            break;
        }
        
        t1=t;
        t=t->next;
        
    }
    if(t==NULL)
            t1->next=newnode;
    display(p);
}
int main()
{   
    struct node *p;
    int ele,pos;
    
   int a[]={10,20,30,40,50,60,70,80};
   
   p=create(a,8);
   printf("Enter element that u want insert  ");
   scanf("%d",&ele);
   
   //display(p);
   //printf("\n");
   Sortedinsert(p,ele);

    return 0;
}
