#include<stdio.h>
#include<stdlib.h>

struct node{
 int data;
 struct node *lchild,*rchild;
 }*root=NULL,*ptr,*temp,*p1,*t1;;
struct stack1{
 struct node *tree;
 struct stack1 *next;
 }*top1=NULL;
 
 struct stack2{
 struct node *tree;
 struct stack2 *next;
 }*top2=NULL;
 
 void push1(struct node *node){
  struct stack1 *t=(struct stack1 *)malloc(sizeof(struct stack1));
  t->tree=node;
  t->next=top1;
  top1=t;
 }
 struct node *pop1(){
  struct stack1 *t=top1;
  top1=top1->next;
  return t->tree;
 }
  void push2(struct node *node){
  struct stack2 *t=(struct stack2 *)malloc(sizeof(struct stack2));
  t->tree=node;
  t->next=top2;
  top2=t;
 }
 struct node *pop2(){
  struct stack2 *t=top2;
  top2=top2->next;
  return t->tree;
 }
// void inorder( struct node *ptr){
//     if(ptr!=NULL){
//         inorder(ptr->lchild);
//         printf("%d ",ptr->data);
//         inorder(ptr->rchild);
//     }
// }
// void preorder( struct node *ptr){
//     if(ptr!=NULL){
//         printf("%d ",ptr->data);
//         preorder(ptr->lchild);
//         preorder(ptr->rchild);
//     }
// }
// void postorder( struct node *ptr){
//     if(ptr!=NULL){
//         postorder(ptr->lchild);
//         postorder(ptr->rchild);
//         printf("%d ",ptr->data);
//     }
// }
void delete(int key){
    int flag=0;
    struct node*p=root,*p1;
     while(p!=NULL){
                if(key<p->data){
                        p1=p;
                        p=p->lchild;
                   
                }
                else if(key>p->data){
                        p1=p;
                        p=p->rchild;

                }
                else if(p->data==key){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
            if(p->lchild==NULL&&p->rchild==NULL){
                if(p==p1->rchild){
                    p1->rchild=NULL;
                }
                else  if(p==p1->lchild){
                    p1->lchild=NULL;
                }
                free(p);
            }
            else if(p->lchild!=NULL&&p->rchild==NULL){
                if(p==p1->rchild){
                    p1->rchild=p->lchild;
                }
                else  if(p==p1->lchild){
                    p1->lchild=p->lchild;
            
                }
                free(p);
            }
            else if(p->lchild==NULL&&p->rchild!=NULL){
                if(p==p1->rchild){
                    p1->rchild=p->rchild;
                }
                else  if(p==p1->lchild){
                    p1->lchild=p->rchild;
                }
            free(p);
            }
            else if (p->lchild!=NULL&&p->rchild!=NULL)
            {
                /* code */
                struct node *ptr;
                ptr=p;
                ptr=p->rchild;
                while(ptr->lchild!=NULL){
                    ptr=ptr->lchild;
                }
                int k=ptr->data;
                delete(k);
                p->data=k;
            free(ptr);
            }
            }
}
            

void create(){
      int c=1,f=0,x;
   do{
     struct node * t=(struct node *)malloc(sizeof(struct node));
     printf("\nEnter the node: ");
     scanf("%d",&t->data);
     t->lchild=NULL;
     t->rchild=NULL;
     if(root==NULL)
       root=t;
     else{
       ptr=root;
       while(ptr!=NULL){
         if(ptr->data>t->data){
           temp=ptr;
           ptr=ptr->lchild;
         }
         else if(ptr->data<t->data){
           temp=ptr;
           ptr=ptr->rchild;
         }
         else if(ptr->data==t->data){
         printf("\nElement already exists.");
         temp=NULL;
         break;
         }
       }
       if(temp!=NULL){
       if(temp->data>t->data)
         temp->lchild=t;
       else
         temp->rchild=t;
       }
     }
     printf("\nDo you want to continue?(1/0)");
     scanf("%d",&c);
     }while(c!=0);    
}
 void preorder(struct node *r){
   struct node *ptr=r;
   while(1){
   	while(ptr!=NULL){
   		printf("%d ",ptr->data);
   		push1(ptr);
   		ptr=ptr->lchild;
   	}	
   	if(top1==NULL)
   		break;
   	ptr=pop1();
   	ptr=ptr->rchild;
    }
}
   
 void inorder(struct node *r){
	struct node *ptr=r;
	while(1){
	while(ptr!=NULL){
		push1(ptr);
		ptr=ptr->lchild;
	}	
	if(top1==NULL)
		break;
	ptr=pop1();
	printf("%d ",ptr->data);
	ptr=ptr->rchild;
	}
}
 void postorder(struct node *r){
   struct node *t;
   push1(r);
   while(top1!=NULL){
     t=pop1();
     push2(t);
     if(t->lchild!=NULL){
       push1(t->lchild);
     }
     if(t->rchild!=NULL){
       push1(t->rchild);
     }
   }
   while(top2!=NULL){
    t=pop2();
    printf("%d ",t->data);
   }
 }
void main(){
    create();  
    printf("\n");
    preorder(root);
    printf("\n");
   postorder(root);
   delete(4),
    inorder(root);
}
