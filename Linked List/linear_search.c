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

void Lsearch(struct node *p,int ele)
{   int flag=0;
    while(p!=NULL)
    {
        if(p->data==ele)
         {
            flag=1;
            printf("element %d found ",p->data);
            break;
         }
        p=p->next;
    }
    if(flag==0)
        printf("\nelement not found");
}
int main()
{   
    struct node *p;
    int ele;
    
   int a[]={1,2,3,4,5,6,7,8};
   
   p=create(a,8);
   printf("Enter element that u want");
   scanf("%d",&ele);
   
   //display(p);
   //printf("\n");
   Lsearch(p,ele);

    return 0;
}
