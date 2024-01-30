#include<stdio.h>
#include<stdlib.h>
int r;
void choice(){
  printf("\nenter the number 1 to perform enq\nenter the number 2 to perform disp\nenter the number 3 to perform deq\nenter the number 4 to perform to exit\n");
  scanf("%d",&r);
}
#define MAX 5
struct node{
  int data;
  struct node *next;
};
struct node *top=NULL; 

void push(int el){
  struct node *ptr=(struct node *)malloc(sizeof(struct node));
  ptr->data=el;
  ptr->next=NULL;
  if(top==NULL){
    top=ptr;
  }
  else{
    ptr->next=top;
    top=ptr;
  }
}

void pop(){
    if(top==NULL){
      printf("no\n");

    }
    else{
      printf("%d\n",top->data);
      top=top->next;
    }
}

void display(){
   struct node *ptr=top;
   while(ptr!=NULL){
    printf("%d ",ptr->data);
    ptr=ptr->next;
   }
}
void main(){
 int i,k;
 printf("\nenter the number 1 to perform enq\nenter the number 2 to perform traverse\nenter the number 3 to perform deq\nenter the number 4 to perform to exit\n");
   scanf("%d",&r);
 while(1){
   switch(r){
     case 1:{
            printf("enter element");
            scanf("%d",&k);
            push(k);
            choice();
            continue;
            }   
     case 2:{
             display();
             choice();
             continue;
            }
     case 3:{
             pop();
             choice();
             continue;
             }
     case 4:{
              break; 
            }
       

   }  
   break;
 }
 
}