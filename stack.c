    #include<stdio.h>
#include<stdlib.h>
#define max 10
int queue[max],stack[max];
int front=-1,rear=-1;
void enqueue(int x){
    if(rear<max-1){
        if(front==-1 &&rear==-1){
            front=rear=0;
            queue[rear]=x;
        }
        queue[++rear]=x;
    }
     else{
        printf("overflow");
    }
}
void dequeue(){
    int y;
    if(front==-1&&rear==-1){
        printf("underflow");
    }
    else if (front == rear) {
        y=queue[front];
        front=rear=-1;
    }
    else{
        y=queue[front++];
    }
}
void display(){
    int i;
    if(front==-1 &&rear==-1){
        printf("empty\n");
    }
        else{
            printf("\nelements in the queue are:\n");
            for(i=front;i<=rear;i++){
                printf("%d ",queue[i]);
            }
        }
}

void main(){
    enqueue(1);
    enqueue(5);
    enqueue(9);
    display();
}