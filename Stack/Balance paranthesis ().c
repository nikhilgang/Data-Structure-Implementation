
#include <stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node *next;
};
struct node *top=NULL;


void push(char ele)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=ele;
    
    newnode->next=top;
    top=newnode;
    
}

void pop()
{   struct node *t;

        t=top;
        top=top->next;
        free(t);
}

void isBalence(char *c)
{
    int i;
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]=='(')
            push(c[i]);
        else if(c[i]==')')
            pop();
    }
    if(top==NULL)
        printf("its balenced");
    else
        printf("its not balenced");
}

int main()
{
    char *c="(3+9)-(3*(8/9))+(1)";
    int i=0;
    while(c[i]!='\0')
        printf("%c ",c[i++]);
    printf("\n\n");
    isBalence(c);
    return 0;
}
