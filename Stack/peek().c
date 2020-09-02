
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

int peek(struct stack st,int index)
{
    int x=-1;
    if(st.top-index+1<0)
        printf("Invalid Index \n");
    if(st.top-index+1>st.top)
        printf("\nindex out of range\n");
    x=st.S[st.top-index+1];
    return x;
}

int main()
{
    struct stack st;
    create(&st);
    
    push(&st,1);
    push(&st,2);
    push(&st,4);

    display(st);
    
    printf("\n%d",peek(st,0));
    return 0;
}
