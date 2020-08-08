#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

void midNode(struct node *p){
    int length = 0,i;
    struct node *q=p;
    while (p!=NULL){
        length++;
        p = p->next;
    }
 
    int index = (int)ceil(length/2.0);
    
    for (i=0; i<index-1; i++){
        q = q->next;
    }
    printf("%d is mid element ",q->data);
}



int main()
{  struct node *p;
   int a[]={1,2,3,4,5,6,7,8,9};
   
   p=create(a,sizeof(a)/sizeof(a[0]));
   
   midNode(p);

    return 0;
}
