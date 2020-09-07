
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

int Eval(char *postfix)
{
    int i=0;
    int x1,x2,r=0 ;
    for(i=0;postfix[i]!='\0';i++)
    {
        if(isOperand(postfix[i]))
        {
            push(postfix[i]-'0');
        }
        else
        {
            x2=pop();x1=pop();
            switch(postfix[i])
            {
                case '+':r=x1+x2; break;
                case '-':r=x1-x2; break;
                case '*':r=x1*x2; break;
                case '/':r=x1/x2; break;
            }
            push(r);
        }
    }
    return top->data;
}

int main()
{
    char *postfix="234*+82/-";
    printf("Result is %d\n",Eval(postfix));
    
    return 0;
}
