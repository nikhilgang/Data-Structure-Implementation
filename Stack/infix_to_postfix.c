
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

char pop()
{   struct node *t;
    char ele;
    if(top==NULL)
        printf(" Stack underflow ");
    else
    {   
        t=top;
        ele=top->data;
        top=top->next;
        free(t);
    }
    return ele;
}


int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
    else
        return 1;
}

int pre(char x)
{
    if(x=='+' || x=='-')
        return 1;
        
    else if(x=='*' || x=='/')
        return 2;
        
    return 0;
}

char* In_to_post(char* infix)
{
    char *postfix;
    int i=0,j=0,len;
    len=strlen(infix);
    postfix=(char*)malloc((len+2)* sizeof(char));
    
    while(infix[i]!='\0')
    {
        if(isOperand(infix[i]))
        {
            postfix[j++]=infix[i++];
        }
        else
        {
            if(pre(infix[i])>pre(top->data))
            {
                push(infix[i++]);
            }
            else
            {
                postfix[j++] = pop();
            }
        }
        
    }
    while(top!=NULL)
            postfix[j++]=pop();
            
    postfix[j++]='\0';
    return postfix;
}

int main()
{
    char *infix ="a+b*c-d/e";
    push(' ');
    
    char *postfix=In_to_post(infix);
    printf("%s ",postfix);
    
    return 0;
}
