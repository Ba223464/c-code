#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}*root=NULL,*curr,*prev;

// void delete(int n){
//      struct node* ptr,*temp;
//      int flag=1;
//      temp=ptr=root;
//     while (ptr!=NULL)
//     {
//         /* code */
//         if (ptr->data>n)
//         {
//             /* code */
//             temp=ptr;
//             ptr=ptr->lchild;
//         }
//         else if (ptr->data<n)
//         {
//             /* code */
//             temp=ptr;
//             ptr=ptr->rchild;
//         }
//         else if(ptr->data==n){
//             flag=0;
//             break;
//         }
//     }
//     if (flag==0)
//     {
//         /* code */
//         if (ptr->lchild==NULL&&ptr->rchild==NULL)
//         {
//             /* code */
//             if (temp->lchild==ptr)
//             {
//                 /* code */
//                 temp->lchild=NULL;
//             }
//             else{
//                 temp->rchild=NULL;
//             }
//             free(ptr);
//         }
//         else if (ptr->lchild!=NULL&&ptr->rchild!=NULL)
//         {
//             /* code */struct node *k=ptr;
//             k=k->rchild;
//             while (k->lchild!=NULL)
//             {
//                 /* code */
//                 k=k->lchild;
//             }
//             int o=ptr->data;
//             delete(o);
//             ptr->data=o;
//             free(k);
//         }
//         else if (ptr->lchild!=NULL&&ptr->rchild==NULL)
//         {
//             /* code */
//             if (temp->lchild==ptr)
//             {
//                 /* code */
//                 temp->lchild=ptr->lchild;
//             }
//             else{
//                 temp->rchild=ptr->lchild;
//             }
//             free(ptr);
//         }
//         else if(ptr->lchild==NULL&&ptr->rchild!=NULL){
//             if (temp->rchild==ptr)
//             {
//                 /* code */
//                 temp->lchild=ptr->rchild;
//             }
//             else{
//                 temp->rchild=ptr->rchild;
//             }
//             free(ptr);
            
//         }
//     }
    
// }

void create(){
    int ch;
do{    struct node *t=(struct node *)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&t->data);
    t->lchild=NULL;
    t->rchild=NULL;
    int flag=1;
    if(root==NULL){
        root=t;
    }
    else{
        struct node *p=root,*p1=root;
        while(p!=NULL){
            if(p->data>t->data){
                p1=p;
                p=p->lchild;
            }
            else if(p->data<t->data){
                p1=p;
                p=p->rchild;
            }
            else if(p->data==t->data){
                    printf("element exists");
                     flag=0;
                    break;
            }
        }
        if(flag!=0){
            if(p1->data>t->data){
                p1->lchild=t;
            }
            else{
                p1->rchild=t;
            }
        }
    }    printf("\ncon\n");
    scanf("%d",&ch);
    }while(ch==1);

}
void delete(struct node*r,int k){
    prev=curr=r;int m=0;
    while(curr!=NULL){
        if(curr->data==k){
            m=1;
            break;
        }
        else if(curr->data>k){
            prev=curr;
            curr=curr->lchild;
        }
        
        else if(curr->data<k){
            prev=curr;
            curr=curr->rchild;
        }
    }
    if(m==0){
        printf("element node found");
    }
    else{
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
                delete(r,k);
        }

    }
}

// void insert(int n){
//     struct node *ptr,*temp;
    
//         struct node *t=(struct node *)malloc(sizeof(struct node));
//         t->data=n;
//         t->lchild=NULL;
//         t->rchild=NULL;
//         if(root==NULL){
//             root=t;
//         }
//         else{
//            temp=ptr=root;
//             while (ptr!=NULL)
//             {
//                 /* code */
//                 if (ptr->data>=t->data)
//                 {
//                     /* code */
//                     temp=ptr;
//                     ptr=ptr->lchild;
//                 }
//                 else if (ptr->data<t->data)
//                 {
//                     /* code */
//                     temp=ptr;
//                     ptr=ptr->rchild;
//                 }
//             }
            
//             if (t->data>p1->data)
//             {
//                 /* code */
//                 p1->rchild=t;
//             }
//             else{
//                 p1->lchild=t;
//             }
        
//         }
       
    
// }
void inorder( struct node *ptr){
    if(ptr!=NULL){
        inorder(ptr->lchild);
         printf("%d ",ptr->data);
        inorder(ptr->rchild);
    }
}


void main(){
     int x,key,a;
    // root=(struct node *)malloc(sizeof(struct node));
    // create(root);
    // inorder(root);
    printf("\n");
    do
{    printf("\nenter 1 for insertion\nenter 2 for del\nenter 3 for exit\n");
    scanf("%d",&x);
    switch(x){
        case 1: create(root);      
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