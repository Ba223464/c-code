
// struct stack1
// {
//     /* data */
//     struct tree* tr;
//     struct stack1* next;
// }*top1=NULL;
// struct stack2
// {
//     /* data */
//     struct tree* tr;
//     struct stack2* next;
// }*top2=NULL;
// void push1(struct tree* k){
//     struct stack1 *t=(struct stack1*)malloc(sizeof(struct stack1));
//     t->tr=k; 
//     t->next=top1;
//     top1=t;
// }

// struct tree* pop1(){

 
//         struct stack1 *t=top1;
//         top1=t->next;
//         return t->tr;
    
// }
// void push2(struct tree* k){
//     struct stack2 *t=(struct stack2*)malloc(sizeof(struct stack2));
//     t->tr=k;
//     t->next=top2;
//     top2=t;
// }
// struct tree* pop2(){
//         struct stack2 *t=top2;
//         top2=t->next;
//         return t->tr;
// }
// void postorder(struct tree *r){
//     push1(r);
//     struct tree *ptr;
//     while (top1!=NULL)
//     {
//         /* code */
//         ptr=pop1();
//         push2(ptr);
//         if (ptr->lchild!=NULL)
//         {
//             /* code */
//             push1(ptr->lchild);
//         }
//         if (ptr->rchild!=NULL)
//         {
//             /* code */
//             push1(ptr->rchild);
//         }
//     }
//     while (top2!=NULL)
//     {
//         /* code */
//         ptr=pop2();
//         printf("%d",ptr->data);
//     }
    
// }
// void inorder(struct tree *r){
//     struct tree *ptr=r;
//     while (1)
//     {
//         /* code */
//         while (ptr!=NULL)
//         {
//             /* code */
//             push1(ptr);
//             ptr=ptr->lchild;
//         }
//         if (top1==NULL)
//         {
//             /* code */
//             break;
//         }
//         ptr=pop1();
//         printf("%d",ptr->data);
//         ptr=ptr->rchild;
//     }
    
// }
//  void preorder(struct tree *r){
//    struct tree *ptr=r;
//    while(1){
//    	while(ptr!=NULL){
//    		printf("%d",ptr->data);
//    		push1(ptr);
//    		ptr=ptr->lchild;
//    	}	
//    	if(top1==NULL)
//    		break;
//    	ptr=pop1();
//    	ptr=ptr->rchild;
//     }
// }


// // void preorder(struct tree *ptr){
// //     if(ptr!=NULL){
// //         printf("%d",ptr->data);
// //         preorder(ptr->lchild);
// //         preorder(ptr->rchild);
// //     }
// // }
// // void postorder(struct tree *ptr){
// //     if(ptr!=NULL){
// //         postorder(ptr->lchild);
// //         postorder(ptr->rchild);
// //         printf("%d",ptr->data);
// //     }

// // }
// void buildtree(struct tree *ptr){
//     int i,j;
//     if(ptr!=NULL){
//         printf("enter the data");
//         scanf("%d",&ptr->data);
//         ptr->lchild=NULL;
//         ptr->rchild=NULL;
//         printf("enter 1 for lchild is presentfor %d",ptr->data);
//         scanf("%d",&i);
//         if(i==1){
//             struct tree *l=(struct tree*)malloc(sizeof(struct tree));
//             ptr->lchild=l;
//             buildtree(l);
//         }

//         printf("enter 1 for rchild is present for %d",ptr->data);
//         scanf("%d",&j);
//         if(j==1){
//             struct tree *r=(struct tree*)malloc(sizeof(struct tree));
//             ptr->rchild=r;
//             buildtree(r);
//         }

//     }
// }
// int src(struct tree *r,int key){
//     curr=NULL;
//     prev=NULL;
//     curr=r;
//     int top=-1;
//     struct tree *stack[20];
//     while(1){
//     while (curr!=NULL)
//     {
//         /* code */
//         if (curr->data==key)
//         {
//             /* code */
//             return 1;
//         }
//         else{
//             stack[++top]=curr;
//             prev=curr;
//             curr=curr->lchild;
//         }
//     }
//     if(top==-1){
//         return 0;
//     }
//     else{
//         curr=stack[top--];
//         prev=curr;
//         curr=curr->rchild;
//     }
//     }
// }
// void insertion(struct tree *r){
//     int item,k,cho;
//     printf("enter the data to be inserted and after which to be inserted");
//     scanf("%d %d",&item,&k);
//     int res=src(r,k);
//     if(res==0){
//         printf("no element");
//         return;
//     }
//     else{
//         printf("1->LCHILD\n2->RCHILD\n");
//         scanf("%d",&cho);
//         if (cho==1)
//         {
//             /* code */
//             if(curr->lchild==NULL){
//                 struct tree *c=(struct tree*)malloc(sizeof(struct tree));
//                 c->data=item;
//                 c->lchild=NULL;
//                 c->rchild=NULL;
//                 curr->lchild=c;
//             }
//             else{
//                 printf("left already exists");
//             }
//         }
//         if (cho==2)
//         {
//             /* code */
//             if(curr->rchild==NULL){
//                 struct tree *c=(struct tree*)malloc(sizeof(struct tree));
//                 c->data=item;
//                 c->lchild=NULL;
//                 c->rchild=NULL;
//                 curr->rchild=c;
//             }
//             else{
//                 printf("right already exists");
//             }
//         }
//     }
// }
// void delete(struct tree *r,int key){
//     int res = src(r,key);
//    if (res==0)
//    {
//     /* code */
//     printf("not poss");
//    }
//    else{
//     if (curr==r)
//     {
//         /* code */
//         if (curr->rchild==NULL&&curr->lchild==NULL)
//     {
//         /* code */
//         root=NULL;
//         free(curr);
//     }
//     else if (curr->lchild!=NULL&&curr->rchild==NULL)
//     {
//         /* code */
//         root=root->lchild;
//         free(curr);
//     }
//     else if (curr->lchild==NULL&&curr->rchild!=NULL)
//     {
//         /* code */
//         root=root->rchild;
//         free(curr);
//     }
    
//    else{

//         /* code */
//         printf("not poss");
//     }
//    }
    
    
//     else{
//         if (curr->rchild==NULL&&curr->lchild==NULL)
//     {
//         /* code */
//         if (prev->lchild==curr){
//                 prev->lchild=NULL;
//         }
//         else
//             prev->rchild=NULL;
//         free(curr);
//     }
//     else if (curr->lchild!=NULL&&curr->rchild==NULL)
//     {
//         /* code */
//         if (prev->lchild==curr){
//                 prev->lchild=curr->lchild;
//         }
//         else
//             prev->rchild=curr->lchild;

//             free(curr);
//     }
//     else if (curr->lchild==NULL&&curr->rchild!=NULL)
//     {
//         /* code */
//         if (prev->lchild==curr){
//                 prev->lchild=curr->rchild;
//                 free(curr);
//         }
//         else
//             prev->rchild=curr->rchild;
//             free(curr);
//     }
    
//    else{
//         /* code */
//         printf("not poss");
//     }
//    }
//    }
// }



// void main(){
//   root=(struct tree*)malloc(sizeof(struct tree));
//   buildtree(root);
//   printf("\n");
//   inorder(root);
//   printf("\n");
//   preorder(root);
//   printf("\n");
//    postorder(root);
//     printf("\n");
 
// // }

#include<stdio.h>
#include<stdlib.h>
struct node
{
    /* data */
    int data;
    struct node *lchild;
    struct node *rchild; 
}*root=NULL,*curr=NULL,*prev=NULL;
// void inorder(struct node *ptr){
//     if(ptr!=NULL){
//         inorder(ptr->lchild);
//         printf("%d ",ptr->data);
//         inorder(ptr->rchild);
//     }
// }
void create(struct node *t){
    int ch;
    printf("enter data");
    scanf("%d",&t->data);
    t->lchild=NULL;
    t->rchild=NULL;
    printf("is there lchild of %d",t->data);
    scanf("%d",&ch);
    if(ch==1){
        struct node *l=(struct node *)malloc(sizeof(struct node));
        t->lchild=l;
        create(l);
    }
    printf("is there rchild of %d",t->data);
    scanf("%d",&ch);
    if(ch==1){
        struct node *r=(struct node *)malloc(sizeof(struct node));
        t->rchild=r;
        create(r);
    }    
}

int search(struct node* p,int key){
    curr=p;
    struct node *stack[20];
    int top=-1;
    while(1){
          while(curr!=NULL){
        if(curr->data==key){
            return 1;
        }
        else{
          
               stack[++top]=curr;
               prev=curr;
               curr=curr->lchild;
            }
        }
        if(top==-1){
            return 0;
        }
        else{
            curr=stack[top--];
            prev=curr;
            curr=curr->rchild;
        }
    }
}

void insert(struct node *r){
    int l,key,o,v,ch;
    printf("element insert and inserted");
    scanf("%d %d",&l,&key);
    struct node *c=(struct node *)malloc(sizeof(struct node));
    c->data=l;
    c->lchild=NULL;
    c->rchild=NULL;
    if(search(r,key)==1){
        printf("\n1-lchild\n2-rchild\n");
        scanf("%d",&ch);
        if(ch==1){
            if(curr->lchild==NULL){
                    curr->lchild=c;
            }
            else{
                printf("lchild already exists");
            }
        }
        else if(ch==2){
            if(curr->rchild==NULL){
                curr->rchild=c;
            }
            else{
                printf("rchild already exists");
            }
        }
    }


    
    else{
        printf("element not found");
    }
}

void delete(struct node *r,int l){
    int key,o,v,ch;
   
    int res=search(root,l);
    //no node and 2 nodes
     if(curr->lchild==NULL&&curr->rchild==NULL){
            if(prev->lchild==curr){
                prev->lchild=NULL;
            }
            else if(prev->rchild==curr){
                prev->rchild=NULL;
            }
    }
      
        else if(curr->lchild==NULL&&curr->rchild!=NULL){
            if(prev->rchild==curr){
                    prev->rchild==curr->rchild;
            }
            if(prev->lchild==curr){
                    prev->lchild==curr->rchild;
            }
            if(curr->lchild!=NULL&&curr->rchild==NULL){
            if(prev->rchild==curr){
                    prev->rchild==curr->rchild;
            }
            if(prev->lchild==curr){
                    prev->lchild==curr->rchild;
            }
        }
        }
        else if(curr->lchild!=NULL&&curr->rchild!=NULL){
               struct node *p=curr;
                curr=curr->rchild;
                while(curr!=NULL){
                    prev=curr;
                    curr=curr->lchild;
                }
                int k=p->data;
                p->data=prev->data;
                prev->data=k;
                delete(root,k);
        }

      
 }


 
struct stack1{
    struct node *tree;
    struct stack1 *link;
}*top1=NULL;

void push1(struct node *t){
    struct stack1 *c=(struct stack1 *)malloc(sizeof(struct node));
    c->tree=t;
    c->link=top1;
    top1=c;
}
struct node* pop1(){
    struct stack1 *t=top1;
    top1=top1->link;
    return t->tree;
}


struct stack2{
    struct node *tree;
    struct stack2 *link;
}*top2=NULL;

void push2(struct node *t){
    struct stack2 *c=(struct stack2 *)malloc(sizeof(struct node));
    c->tree=t;
    c->link=top2;
    top2=c;
}
struct node* pop2(){
    struct stack2 *t=top2;
    top2=top2->link;
    return t->tree;
}

void inorder(struct node *r){
    struct node *ptr=r;
    while(1){
        while(ptr!=NULL){
            push1(ptr);
            ptr=ptr->lchild;
        }
        if(top1==NULL){
            break;
        }
        ptr=pop1();
        printf("%d ",ptr->data);
        ptr=ptr->rchild;
    }
}

void preorder(struct node *r){
    while(1){
        while(r!=NULL){
            printf("%d ",r->data);
            push1(r);
            r=r->lchild;
        }
        if(top1==NULL)
            break;
        r=pop1();
        r=r->rchild;

    }
}

 void postorder(struct node *r){
    
    struct node *ptr;
    push1(r);
    while(top1!=NULL){
        ptr=pop1();
        push2(ptr);
        if(ptr->lchild!=NULL){
            push1(ptr->lchild);
        }
        
        if(ptr->rchild!=NULL){
            push1(ptr->rchild);
        }
    }
    while(top2!=NULL){
        ptr=pop2();
        printf("%d ",ptr->data);
    }

 }

//   if(r!=NULL)
//   {printf("%d ",r->data);
//   preorder(r->lchild);
//    preorder(r->rchild);}
//    printf("\n");
 
// }

// void postorder(struct node *r){
//     if(r!=NULL){
//         postorder(r->lchild);
//         postorder(r->rchild);
//         printf("%d ",r->data);
//     }
// }
void main(){
    int x,key,a;
    root=(struct node *)malloc(sizeof(struct node));
    create(root);
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    do
{    printf("\nenter 1 for insertion\nenter 2 for del\nenter 3 for exit\n");
    scanf("%d",&x);
    switch(x){
        case 1: insert(root);      
                inorder(root);
                break;
        case 2:  printf("enter elemenr del");
                scanf("%d",&key);
                delete(root,key);
                
    inorder(root);
                break;
        case 3: 
                break;
        default: 
        break;
    }}while(x!=3);
}