#include<stdio.h>
#include<stdlib.h>
int r;
void choice(){
  printf("enter the number 2 to perform traverse\nenter the number 3 to perform insertion\nenter the number 4 to perform deletion\nenter the number 5 to reverse\nenter the number 6 to exit\n");
  scanf("%d",&r);
}
// struct node
// {
//     /* data */
//     int data;
//     struct node *next;
//     struct node *prev;
// }*head=NULL,*tail;

// void create(){
//     int c;
//     do
//     {
//         /* code */
//         struct node *temp;
//         struct node *new=(struct node*)malloc(sizeof(struct node));
//         printf("Enter the data");
//         scanf("%d",&c);
//         new->data = c;
//         new->next=NULL;
//         new->prev=NULL;
//         if(tail==NULL){
//             head=temp=tail=new;
//         }
//         else{
//             temp->next=new;
//             new->prev=temp;
//             temp=tail=new;
//         }
//         printf("enter 1 to continue");
//         scanf("%d",&c);
//         } while (c==1);
// }
// void insert(){
//     int k,pos,c;
//     struct node *ptr=head;
//        struct node *new=(struct node*)malloc(sizeof(struct node));
//         printf("Enter the data");
//         scanf("%d",&c);
//         new->data = c;
//         new->next=NULL;
//         printf("1:beginning\n2:pos\n3:end");
//         scanf("%d",&k);
//         if(k==1){
//             new->next=head;
//             head->prev=new;
//             head=new;
//         }
//         else if(k==2){
//             printf("enter pos");
//             scanf("%d",&pos);
//             if(pos==1){
//                 new->next=head;
//                 head->prev=new;
//                 head=new;
//             }
//             else{
//                 for (int i = 1; i < pos-1; i++)
//                 {
//                     /* code */
//                     ptr=ptr->next;
//                 }
//                 new->next=ptr->next;
//                 new->prev=ptr;
//                 ptr->next->prev=new;
//                 ptr->next=new;
//             }
//         }
//         else if (k==3)
//         {
//             /* code */
//             while(ptr->next!=NULL){
//                 ptr=ptr->next;
//             }
//             ptr->next=new;
//             new->prev=ptr;
//             tail=new;
//         }
        
// }
// void delete(){
//     int k,pos;
//         struct node *t,*ptr; 
//     printf("1:beginning\n2:pos\n3:end");
//     scanf("%d",&k);
//     if (k==1)
//     {
//         /* code */
//         t=head;
//         head=head->next;
//         head->next->prev=head;
//         free(t);
//     }
//     else if (k==2)
//     {
//         /* code */
//         printf("Enter the position to be deleted : ");
//         scanf("%d",&pos);
//         ptr=head;
//         for (int i = 0; i < pos-1; i++)
//         {
//             /* code */
//             ptr=ptr->next;
//         }
//         ptr->next->prev=ptr->prev;
//         ptr->prev->next=ptr->next;
//         free(ptr);
//     }
//     else if (k==3)
//     {
//         /* code */
//         ptr=head;
//         while (ptr->next->next!=NULL)
//         {
//             /* code */

//             ptr=ptr->next;
//         }
//         ptr->next=NULL;
//         tail=ptr;
//     }
    
    
// }
// void reverse(){
// //    struct node *pre,*curr,*nextnode;
// //    pre=NULL;
// //     curr=nextnode=head;
// //    while (nextnode!=NULL)
// //    {
// //     /* code */
// //      nextnode=nextnode->next;
// //      curr->next=pre;
// //      pre=curr;
// //      curr=nextnode;
// //    }
// //     head=pre;
// struct node * t=tail;
//     while (t!=head)
//     {
//         /* code */
//         printf("%d ",t->data);
//         t=t->prev;
//     }
//     printf("%d ",t->data);
    
// }
// void sort(){
//     struct node * i,*j;
//     for ( i = head; i->next!=NULL; i=i->next)
//     {
//         /* code */    for ( j = i->next; j!=NULL; j=j->next)
//     {
//         /* code */
//             if (i->data>j->data)
//             {
//                 /* code */
//                 int temp = i->data;
//                 i->data=j->data;
//                 j->data=i->data;
//             }
            
//     }

//     }
    
// }
// void display(){
//     struct node *t;
//     t=head;
//     while(t!=NULL){
//         printf("%d ",t->data);
//         t=t->next;
//     }
//       printf("%d ",t->data);
// }







struct node{
    int data;
    struct node *link;
}*temp=NULL;

void create(){
    int ch;
    do{
        struct node *ptr=(struct node *)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&ptr->data);
        ptr->link=NULL;
        if(temp==NULL){
            temp=ptr;
            temp->link=ptr;
        }
        else{
            ptr->link=temp->link;
            temp->link=ptr;
            temp=ptr;
        }
        printf("1-con\n");
        scanf("%d",&ch);
    }while(ch==1);
}

void insert(){
    int k,o,m=1,el;
    struct node *p,*p1;
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&ptr->data);
    ptr->link=NULL;
    printf("1-beg 2-pos 3-end");
    scanf("%d",&k);
    if(k==1){
        if(temp==NULL){
            temp=ptr;
            temp->link=ptr;
        }
        else{
            ptr->link=temp->link;
            temp->link=ptr;
        }
    }
    else if(k==2){
        printf("enter pos");
        scanf("%d",&o);
        if(o==1){
            ptr->link=temp->link;
            temp->link=ptr;
        }
        else{
            p=p1=temp->link;
            while(m!=o&&p->link!=temp->link){
                p1=p;
                p=p->link;
                m++;
            }
            if(p->link==temp->link){
                ptr->link=temp->link;
                temp->link=ptr;
                temp=ptr;
            }
            else{
                ptr->link=p;
                p1->link=ptr;
            }
        }
    }
    else if(k==3){
       ptr->link=temp->link;
       temp->link=ptr;
       temp=ptr; 
    }
    // else if(k==4){
    //     p=p1=head;
    //     printf("enter element");
    //     scanf("%d",&el);
    //     while(p->data!=el&&p->link!=NULL){
    //         p1=p;
    //         p=p->link;
    //     }
    //     if(p->link!=NULL)
    //     {    if(p==head){
    //             ptr->link=p;
    //             head=ptr;
    //         }
    //         else
    //         {ptr->link=p;
    //         p1->link=ptr;}
    //         }

    //         else{
    //             printf("el not found");
    //         }
    // }

    //     else if(k==5){
    //     p=p1=head;
    //     printf("enter element");
    //     scanf("%d",&el);
    //     while(p->data!=el){
    //         p=p->link;
    //         p1=p->link;
    //     }
    //     ptr->link=p1;
    //     p->link=ptr;
    // }
}
//  void delete(){
//      int k,m,o,a=1,el;
//     struct node *p,*p1;
//     printf("1-beg 2-pos 3-end");
//     scanf("%d",&k);
//     if(k==1){
//         p=head;
//         head=head->link;
//         head->pre=NULL;
//         free(p);
//     } 
//     else if(k==2){
//         printf("enter pos");
//         scanf("%d",&o);
//         if(o==1){
//             p=head;
//             head=head->link;
//             head->pre=NULL;
//             free(p);
//         }
//         else{
//             p=head;
//             while(a!=o){
//                 p=p->link;
//                 a++;
//             }
//             p->pre->link=p->link;
//             p->link->pre=p->pre;
//             if(p->link=NULL){
//                 temp=p->pre;
//             }
//             free(p);
//         }
//     }
//     else if(k==3){
//         p=temp;
//         p->pre->link=NULL;
//         temp=p->pre;
//         free(p);
//     }
//     else if(k==4){
//         p=head;
//         printf("enter ele");
//         scanf("%d",&el);
//         while(p->data!=el){
//             p=p->link;
//         }
//         p1=p->link;
//         p->link=p1->link;
//         free(p1);
//     }
//     else if(k==5){
//         p=head;
//         printf("enter ele");
//         scanf("%d",&el);
//         while(p->link->data!=el){
//             p=p->link;
//         }
//         p1=p->link;
//         p->link=p1->link;
//         free(p1);
//     }
    
//  }

void display(){
    struct node *ptr=temp->link;

    while(ptr!=temp){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    printf("%d",ptr->data);
}
void main(){
 int i;
 printf("\nenter the number 1 to perform creation\nenter the number 2 to perform traverse\nenter the number 3 to perform insertion\nenter the number 4 to perform deletion\nenter the number 5 to reverse\nenter the number 6 to exit\n");
   scanf("%d",&r);
 while(1){
   switch(r){
     case 1:{
            create();
            choice();
            continue;
            }   
     case 2:{
             display();
             choice();
             continue;
            }
     case 3:{
             insert();
             choice();
             continue;
             }
    // case 4:{
    //          delete();
    //          choice();
    //          continue;
    //         }

     case 6:{
              break; 
            }
       

   }  
   break;
 }
 
}
