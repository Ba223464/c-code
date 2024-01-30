// #define MAX 10
// struct node
// {
//     int data;
//     struct node* link;
// }*hash[MAX];

// void entry(){
//     int key;
//     printf("enter the value");
//     scanf("%d",&key);
//     int h=key%MAX;
//    struct node* ptr=hash[h];
//    while (ptr->link!=NULL)
//    {
//     /* code */
//     ptr=ptr->link;
//    }
//    ptr->link=malloc(sizeof(struct node));
//    ptr->link->data=key;
//    ptr->link->link=NULL;
// }
// void disp(){
//      struct node* ptr;
//     for (int i = 0; i < MAX; i++)
//     {
//     ptr = hash[i];
    
//         while (ptr ->link!= NULL)
//         {
//             printf("%d- ", ptr->data);
//             ptr = ptr->link;
//         }
//         printf("%d", ptr->data);
//         printf("\n");
//     }
// printf("\n");   
// }
// void main(){
//    for (int i = 0; i < MAX; i++)
//    {
//     /* code */
//     hash[i]=malloc(sizeof(struct node));
//     hash[i]->link=NULL;
//     hash[i]->data=i;
//    }
//     int flag;
//     while (1)
//     {
//     printf("\nEnter\n1. New entry\n2. Display Hash table\n3. Exit\n");
//     scanf("%d", &flag);
//         switch (flag)
//         {
//         case 1:
//         entry();
//         break;
//         case 2:
//         disp();
//         break;
//         case 3:
//         exit(0);
//         default:
//         printf("\nInvalid entry!\n");
//         }
//     }
// }
#include<stdio.h>
#include<stdlib.h>
void display(int hash[],int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ",hash[i]);
    }
    
}
void entry(int hash[],int n){
    int key;
    printf("enter element");
    scanf("%d",&key);
    int h=key%n;
    if (hash[h]==0)
    {
        /* code */
        hash[h]=key;
        display(hash,n);
    }
    else
    {
        /* code */
        for (int i = h+1; i < n; i++)
        {
            /* code */
            if (hash[i]==0)
            {
                /* code */
                hash[i]=key;
                display(hash,n);
                return;
            }
        }
        for (int i = 0; i < h; i++)
        {
            /* code */
            if (hash[i]==0)
            {
                /* code */
                hash[i]=key;
                display(hash,n);
                return;
            }
        }   
        printf("full");     
    }
    
}
void main(){
    int size,flag;
    printf("enter size");
    scanf("%d",&size);
    int *hash=calloc(size,sizeof(int));
    while(1)
    {
        printf("\nEnter\n1. New entry\n2. Display Hash table\n3. Exit\n");
        scanf("%d", &flag);
        switch(flag)
        {
            case 1:
                entry(hash, size);
                break;
            case 2:
                display(hash, size);
                break;
            case 3:
                exit(0);
            default:
                printf("\nInvalid entry!\n");
                break;
        }
    }
}