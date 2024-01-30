// #include<stdio.h>
// #include<stdlib.h>
// struct polynomial
// {
//     /* data */
//     int exp;
//     int coeff;
// }p1[20],p2[20],temp[20],pmul[20];
// int n1, n2,k1=0,k2=0;
// void createpolynomial(struct polynomial a[],int *n){
//     printf("enter the no. of elements");
//     scanf("%d",n);
//     for (int i = 0; i < *n; i++)
//     {
//         /* code */
//         printf("\n enter the coefficient and exponent of term %d ",i+1);
//         scanf("%d %d",&a[i].coeff,&a[i].exp);
//         int j=0;
//         while (j<i)
//         {
//             /* code */
//             if (a[i].exp==a[j].exp)
//             {
//                 /* code */
//                 a[j].coeff+=a[i].coeff;
//                 i--;
//                 break;
//             }
//             else if (a[i].exp>a[j].exp)
//             {
//                 /* code */
//                 int k=*n;
//                 struct polynomial temp=a[i];
//                 while (k!=j)
//                 {
//                     /* code */
//                     a[k]=a[k-1];
//                     k--;
//                 }
//                 a[k]=temp;
//                 break;
//             }
//             j++;

//         }

//         }
        
//     }
//     void create(int co,int ex){
//         temp[k1].coeff=co;
//         temp[k1].exp=ex;
//         k1++;
//     }
//     void add(struct polynomial a[],struct polynomial b[]){
//         int i=0,j=0,k=0;
//         int c,e;
//         while (i<n1&&j<n2)
//         {
//             /* code */
//             if (a[i].exp==b[j].exp)
//             {
//                 /* code */
//                 e=a[i].exp;
//                 c=a[i].coeff + b[j].coeff;
//                 create(c,e);
//                 i++;j++;
//             }
//             else if (a[i].exp>b[j].exp)
//             {
//                 /* code */
//                 e=a[i].exp;
//                 c=a[i].coeff;
//                 create(c,e);
//                 i++;
//             }
//              else if (a[i].exp<b[j].exp)
//             {
//                 /* code */
//                 e=b[j].exp;
//                 c=b[j].coeff;
//                 create(c,e);
//                 j++;
//             }
        
//         }
//         while (i<n1){
//             e=a[i].exp;
//                 c=a[i].coeff;
//                   create(c,e);
//                 i++;
//         }
//         while (j<n2)
//         {
//             /* code */
//               e=b[j].exp;
//                 c=b[j].coeff;
//                 create(c,e);
//                 j++;
//         }
        
//     }
// void disp(struct polynomial a[],int k){
//         printf("%d^x%d",a[0].coeff,a[0].exp);
//     for (int i = 1; i < k; i++)
//     {
//         /* code */
//         if(a[i].coeff<0){
//             printf("%d^x%d",a[i].coeff,a[i].exp);
//         }
//         else
//            printf("+%d^x%d",a[i].coeff,a[i].exp);
//     }
    
// }
// void createm(int k,int l){
//     pmul[k2].coeff=k;
//     pmul[k2].exp=l;
    
//         /* code */
//         for (int j = 0; j < k2; j++)
//         {
//             /* code */
//             if (pmul[k2].exp==pmul[j].exp)
//             {
//                 /* code */
//                 pmul[j].coeff+=pmul[k2].coeff;
//                 k2--;
//                 break;
//             }
//             else if (pmul[k2].exp>pmul[j].exp)
//             {
//                 /* code */
//                 int k=k2;
//                 struct polynomial temp=pmul[k2];
//                 while(k!=j){
//                     pmul[k]=pmul[k-1];
//                     k--;
//                 }
//                 pmul[k]=temp;
//                 break;
//             }
            
            
//         }
//     k2++;
        
    
    
// }

// void mul(){
//     int i=0,j=0;
//     for ( i = 0; i < n1; i++)
//     {
//         /* code */
//         for ( j = 0; j < n2; j++)
//         {
//             /* code */
//             createm(p1[i].coeff*p2[j].coeff,p1[i].exp+p2[j].exp);
//         }
        
//     }
    
// }
// void main(){
//     printf("Enter the number of terms in first polynomial\n");
//     createpolynomial(p1,&n1);
//     disp(p1,n1);
//     printf("Enter the number of terms in first polynomial\n");
//     createpolynomial(p2,&n2);
//     disp(p2,n2);
//     printf("\n");
//     add(p1,p2);
//     disp(temp,k1);
//     printf("\n");
//     mul();
//     disp(pmul,k2);
// }
#include <stdio.h>
#include <stdlib.h>
struct node {
    int coeff;
    int exp;
    struct node *next;
}*head=NULL,*p1,*p2,*p3,*p4,*ahead=NULL,*mhead=NULL;
struct node* create(){
    head=NULL;
    int a,b,c,d;
do{
    
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    printf("enter coeff and exp");
    scanf("%d %d",&a,&b);
    ptr->coeff=a;
    ptr->exp=b;
    if(head==NULL||head->exp<b){
        ptr->next=head;
        head=ptr;
    }
    else{
        struct node *t=head;
        while(t->next!=NULL&&t->next->exp>b){
                t=t->next;
        }
        
            ptr->next=t->next;
            t->next=ptr;
            
    }

        printf("\nCON\n");
    scanf("%d",&c);
}while(c==1);
return head;
}
void display(struct node* ptr){
    while(ptr!=NULL){
        printf("%dx^%d",ptr->coeff,ptr->exp);
        if(ptr->next!=NULL){
            printf("+");
        }
        ptr=ptr->next;
    }
 
}

struct node* insert(int c,int e){
    struct node *temp=NULL;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->coeff=c;
    temp->exp=e;
    temp->next=NULL;
    if(ahead==NULL||ahead->exp<e){
        temp->next=ahead;
        ahead=temp;
    }
    else{
        struct node *t=ahead;
        while(t->next!=NULL&&t->next->exp>e){
                t=t->next;
        }
        
            temp->next=t->next;
            t->next=temp;
            
    }
    return ahead;
}

struct node* createm(int c,int e){
     struct node *temp=NULL;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->coeff=c;
    temp->exp=e;
    temp->next=NULL;
    if(mhead==NULL||mhead->exp<e){
        temp->next=mhead;
        mhead=temp;
    }
    else{
        struct node *t=mhead;
        while(t->next!=NULL&&t->next->exp>e){
                t=t->next;
        }
        
            temp->next=t->next;
            t->next=temp;
            
    }
    return mhead;
}

struct node* mul(struct node* po1,struct node* po2){
    while(po1!=NULL){
        po2=p2;
        while(po2!=NULL){
            mhead=createm(po1->coeff*po2->coeff,po1->exp+po2->exp);
            po2=po2->next;
        }
        po1=po1->next;
    }
    return mhead;
}

// struct node* insert(int coeff,int expo){
//     struct node *temp,*ptr=NULL;

//     int key;
//     temp=(struct node*)malloc(sizeof(struct node));
//     temp->coeff=coeff;
//     temp->exp=expo;
//     temp->next=NULL;
//     key=temp->exp;

//     if(ahead==NULL || ahead->exp<key){
//         temp->next=ahead;
//         ahead=temp;
//     }else{
//         ptr=ahead;
//         while(ptr->next!=NULL && ptr->next->exp>=key){
//             ptr=ptr->next;
//         }temp->next=ptr->next;
//         ptr->next=temp;
//     }return ahead;


// }

struct node* add(struct node *a,struct node *b){
   while(a!=NULL&&b!=NULL){
    if(a->exp==b->exp){
        ahead=insert((a->coeff+b->coeff),a->exp);
        a=a->next;b=b->next;
    }
    else if(a->exp>b->exp){
        ahead=insert(a->coeff,a->exp);
        a=a->next;
    }
    else if(a->exp<b->exp){
        ahead=insert(b->coeff,b->exp);
        b=b->next;
    }
    }
    while(a!=NULL){
        ahead=insert(a->coeff,a->exp);
        a=a->next;
    }
    while(b!=NULL){
        ahead=insert(b->coeff,b->exp);
        b=b->next;
    }
    return ahead;
}


// struct node* add(struct node *pol1,struct node *pol2){


//     while(pol1!=NULL && pol2!=NULL){

//         if(pol1->exp==pol2->exp){

//             ahead=insert(pol1->coeff+pol2->coeff,pol1->exp);
//             pol1=pol1->next;
//             pol2=pol2->next;
//         }else if(pol1->exp > pol2->exp){

//             ahead=insert(pol1->coeff,pol1->exp);
//             pol1=pol1->next;
//         }else if(pol1->exp < pol2->exp){

//             ahead=insert(pol2->coeff,pol2->exp);
//             pol2=pol2->next;
//         }     
//     }while(pol1!=NULL){
//         ahead=insert(pol1->coeff,pol1->exp);
//         pol1=pol1->next;
//     }while(pol2!=NULL){
//         ahead=insert(pol2->coeff,pol2->exp);
//         pol2=pol2->next;
//     }
//     return ahead;
// }
struct node* update(){
    struct node *temp=NULL,*ptr=p4;
    while(ptr->next!=NULL){
        if(ptr->exp==ptr->next->exp){
            ptr->coeff+=ptr->next->coeff;
            temp=ptr->next;
            ptr->next=ptr->next->next;
        }else{
        ptr=ptr->next;}
    }
    return mhead;
}
void main(){
    printf("Create polynomial 1:\n");
    p1=create();
    display(p1);
    printf("Create polynomial 2:\n");
    p2=create();
    display(p2);
    printf("\n");
    p3=add(p1,p2);
    display(p3);
    printf("\n");
    printf("\n");
    p4=mul(p1,p2);
    display(p4);
    printf("\n");
    p4=update(p4);
    display(p4);
}











// struct node{
//     int coeff;
//     int exp;
//     struct node *next;
// }*first,*second,*prod,*ahead=NULL,*upd;

// struct node* createnode();
// void traverse(struct node *ptr);
// struct node* polyprod(struct node *pol1,struct node *pol2);
// struct node* insert(int,int);
// struct node* update();
// void main(){
//     printf("Create polynomial 1:\n");
//     first=createnode();
//     //traverse(first);
//     printf("Create polynomial 2:\n");
//     second=createnode();
//     //traverse(second);
//     prod=polyprod(first,second);
//     printf("Product is \n");
//     traverse(prod);
//     upd=update();
//     printf("Product is \n");
//     traverse(upd);
// }

// void traverse(struct node *ptr){
//     while (ptr!=NULL){
//         printf("%dx^%d",ptr->coeff,ptr->exp);
//         if(ptr->next!=NULL){
//             printf("+");
//         }ptr=ptr->next;
//     }
// }

// struct node* createnode(){
//     struct node *temp=NULL,*head=NULL,*ptr=NULL;
//     int key,choice;
//     do{
//         temp=(struct node*)malloc(sizeof(struct node));
//         printf("\nEnter terms: ");
//         printf("\nEnter coefficient: ");
//         scanf("%d",&(temp->coeff));
//         printf("Enter exponent: ");
//         scanf("%d",&(temp->exp));
//         temp->next=NULL;
//         key=temp->exp;

//         if(head==NULL || head->exp <key){
//             temp->next=head;
//             head=temp;
//         }else {
//             ptr=head;
//             while(ptr->next!=NULL && ptr->next->exp > key){
//                 ptr=ptr->next;
//             }temp->next=ptr->next;
//             ptr->next=temp;
//         }printf("\n1 to continue\n0 to stop\n");
//         scanf("%d",&choice);
//     }while(choice==1);
//     return head;
// }

// struct node* polyprod(struct node *pol1,struct node *pol2){
    
//     int rco,rex;
//     while(pol1!=NULL){
//         pol2=second;
//         while(pol2!=NULL){
//             rco=pol1->coeff*pol2->coeff;
//             rex=pol1->exp+pol2->exp;
//             insert(rco,rex);
//             pol2=pol2->next;
//         }pol1=pol1->next;
//     }return ahead;
// }

// struct node* insert(int coeff,int expo){
//     struct node *temp,*ptr=NULL;
    
//     int key;
//     temp=(struct node*)malloc(sizeof(struct node));
//     temp->coeff=coeff;
//     temp->exp=expo;
//     temp->next=NULL;
//     key=temp->exp;

//     if(ahead==NULL || ahead->exp<key){
//         temp->next=ahead;
//         ahead=temp;
//     }else{
//         ptr=ahead;
//         while(ptr->next!=NULL && ptr->next->exp>=key){
//             ptr=ptr->next;
//         }temp->next=ptr->next;
//         ptr->next=temp;
//     }return ahead;
// }

// struct node* update(){
//     struct node *ptr=prod,*temp=NULL;
//     while(ptr->next!=NULL){
//         if(ptr->exp==ptr->next->exp){
//             ptr->coeff=ptr->coeff+ptr->next->coeff;
//             temp=ptr->next;
//             ptr->next=ptr->next->next;
//             free(temp);temp=NULL;
//         }else{
//             ptr=ptr->next;
//         }
//     }return prod;
// }
