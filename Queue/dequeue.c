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

void enqueue(struct queue *q,int x)
{
    if(q->rear==q->size-1)
        printf("queue is full");
    else
    {
        if(q->front==-1 && q->rear==-1)
        {   
            q->rear=0;
            q->Q[q->rear]=x;
            q->front=0;
        }
        else
        {
            q->rear++;
            q->Q[q->rear]=x;
            
        }
    }
}

int dequeue(struct queue *q)
{
    int x;
    if(q->front==-1 && q->rear==-1)
        printf("Queue is empty");
    
    else
    {
        x=q->Q[q->front];
        q->front++;
    }
    return x;
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
    enqueue(&q,3);
    printf("%d \n",dequeue(&q));
    display(q);
    
    return 0;
}
