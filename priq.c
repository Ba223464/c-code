#include<stdio.h>
#define MAX 10
struct priq
{
    /* data */
    int item[MAX];
    int front;
    int rear; 
};
void initPriorityQueue(struct priq *queue) {
    queue->front = -1;
    queue->rear = -1;
}

void enqueue(struct priq *queue,int val){
    if (queue->rear>MAX-1)
    {
        /* code */
        printf("Queue is Full\n");
    }
    else{
        if (queue->rear==-1 && queue->front==-1)
        {
            /* code */
            queue->rear=0 ;queue->front=0;
            queue->item[queue->rear]=val;
        }
        else{
            int i=queue->rear;
            while (i>=0&&queue->item[i]<val)
            {
                /* code */
                queue->item[i+1]=queue->item[i];
                i--;
            }
            queue->item[i+1]=val;
            queue->rear++;
        }
    }
    
}
int deq(struct priq * queue){
    if (queue->rear==-1 && queue->front==-1)
    {
        /* code */
        printf("Queue is Empty \n");
    }
    else{
        int k=queue->item[queue->front];
        queue->front++;
        return k;
    }
}
void display(struct priq *queue){
    for (int i = queue->front; i <=queue->rear; i++)
    {
        /* code */
        printf("%d ",queue->item[i]);
    }
    
}
void main(){
    struct priq ptr;
    initPriorityQueue(&ptr);    
    enqueue(&ptr,4);
    enqueue(&ptr,3);
    enqueue(&ptr,5);
    enqueue(&ptr,-9);
    enqueue(&ptr,0);
    display(&ptr);
    printf("\n");
    printf("pop:%d\n",deq(&ptr));
    display(&ptr);
    printf("\n");
    printf("pop:%d\n",deq(&ptr));
    display(&ptr);
}