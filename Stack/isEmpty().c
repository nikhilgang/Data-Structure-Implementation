
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





int main()
{
    struct stack st;
    create(&st);
    
    push(&st,1);
    push(&st,2);
    
    display(st);
    return 0;
}
