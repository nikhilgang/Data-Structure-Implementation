
#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *S;
};

void create(struct stack *st)
{
    printf("enter size \n");
    scanf("%d",&st->size);
    st->top=-1; 
    st->S=(int*)malloc(sizeof(int) * st->size);
}

void display(struct stack st)
{
    int i;
    printf("final stack\n");
    for(i=st.top;i>=0;i--)
    {
        printf("%d  ",st.S[i]);
    }
}

int isEmpty(struct stack st)
{
    if(st.top==-1)
        return 1;
    return 0;
}

int isFull(struct stack st)
{
    if(st.top==st.size-1)
        return 1;
    return 0;
}

void push(struct stack *st,int ele)
{
    int i=0;
    if(isFull(*st))
        printf("Stack overflow ");
    else
        st->top++;
        st->S[st->top]=ele;
        
}

int pop(struct stack *st)
{   
    int element;
    if(isEmpty(*st))
    {
        printf("Stack underflow ");
        return -1;
    }
    else
    {
        element=st->top;
        st->top--;
        return element;
    }
}


int main()
{
    struct stack st;
    create(&st);
    
    push(&st,1);
    push(&st,2);
    
    printf("delete element is : %d\n",pop(&st));
    display(st);
    return 0;
}
