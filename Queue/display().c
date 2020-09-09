#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct queue *q,int size)
{
    q->size=size;
    q->front=-1;
    q->rear=-1;
    q->Q=(int*)malloc(sizeof(int)*q->size);
}




void display(struct queue q)
{
    int i;
    for(i=q.front;i<=q.rear;i++)
    {
        printf("%d ",q.Q[i]);
    }
}

int main()
{
    struct queue q;
    
    create(&q,5);
    enqueue(&q,1);
    enqueue(&q,2);
    
    display(q);
    
    return 0;
}
