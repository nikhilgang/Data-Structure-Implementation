#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *q;
};

void create(struct queue *q,int size)
{
    q->size=size;
    q->front=-1;
    q->rear=-1;
    q->q=(int*)malloc(sizeof(int)*q->size);
}

int main()
{
    struct queue q;
    
    create(&q,5);
    
    return 0;
}
