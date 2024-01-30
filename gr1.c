#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*a[10];
int visited[20];
int n;
int front=-1,rear=-1;
int queue[10];
int stack[10];
int top=-1;
// void
// void creation()
// {
// int i,neighbour,item;
// struct node *t=NULL;
// printf("how many vertices");
// scanf("%d",&n);
// for(i=1;i<=n;i++)
// {
// a[i]=(struct node*)malloc(sizeof(struct node));
// t=a[i];
// t->data=i;
// neighbour=1;
// printf("%d the vertex",i);
// printf("Any neighbour");
// scanf("%d",&neighbour);
// while(neighbour)
// {
// printf("Enter data");
// scanf("%d",&item);
// t->next=(struct node*)malloc(sizeof(struct node));
// t=t->next;
// t->data=item;
// printf("Any neighbour");
// scanf("%d",&neighbour);
// }
// t->next=NULL;
// }
// }
// void display()
// {
// struct node *t;
// int i;
// for(i=1;i<=n;i++)
// {
// t=a[i];
// while(t!=NULL)
// {
// printf("%d-> ",t->data);
// t=t->next;
// }
// printf("\n");
// }
// }
// void addedge()
// {
// struct node *t,*ptr;
// struct node *c;
// int v,u;
// printf("Enter the edge to add");
// scanf("%d %d",&v,&u);
// ptr=a[v];
// while(ptr!=NULL){
//    if (ptr->data==u)
//    {
//       printf("edge exists");
//       return;
//    }
//    ptr=ptr->next;
// }
// if(v>=n && u>=n)
// {
// printf("Invalid");
// }
// else
// {
// t=a[v];
// c=(struct node*)malloc(sizeof(struct node));
// c->next=t->next;
// c->data=u;
// t->next=c;
// if(u==v)
//    return;
// t=a[u];
// c=(struct node*)malloc(sizeof(struct node));
// c->next=t->next;
// c->data=v;
// t->next=c;
// }
// display();
// }
// void deleteedge(int v,int u)
// {
// struct node *t,*t1;

// t=a[v];
// while(t!=NULL)
// {
// if(t->data==u)
// {
// if(t==a[v])
// {
// a[v]==t->next;
// free(t);
// }
// else
// {
// t1->next=t->next;
// free(t);
// }
// break;
// }
// t1=t;
// t=t->next;
// }
// if(u==v){
//     return;
// }

// t=a[u];
// while(t!=NULL)
// {
// if(t->data==v)
// {
// if(t==a[u])
// {
// a[u]==t->next;
// free(t);
// }
// else
// {
// t1->next=t->next;
// free(t);
// }
// break;
// }
// t1=t;
// t=t->next;
// }

// display();
// }
// void addvertex()
// {
// n=n+1;
// struct node*t;
// int ev,iv,item;
// struct node*c;
// a[n]=(struct node*)malloc(sizeof(struct node));
// a[n]->data=n;
// printf("any emerging");
// scanf("%d",&ev);
// t=a[n];
// while(ev)
// {
// printf("Enter the data");
// scanf("%d",&item);
// t->next=(struct node*)malloc(sizeof(struct node));
// t=t->next;
// t->data=item;
// printf("Ant emerging");
// scanf("%d",&ev);
// }
// t->next=NULL;
// printf("Any incoming");
// scanf("%d",&iv);
// while(iv)
// {
// printf("Enter item");
// scanf("%d",&item);
// t=a[item];
// c=(struct node*)malloc(sizeof(struct node));
// c->next=t->next;
// t->next=c;
// c->data=n;
// printf("Any incoming");
// scanf("%d",&iv);
// }
// }
// void deletevertex()
// {
// int i,v;
// struct node *t,*t1;
// printf("Enter the vertex to delete");
// scanf("%d",&v);
// for(i=1;i<=n;i++){
//    while (t!=NULL)
//    {
//       /* code */
//       if(t->data==i){
//          deleteedge(v,i);
//       }
//          t=t->next;
//    }
// }
// for(i=1;i<=n;i++)
// {
//    t=a[i];
// while(t!=NULL)
// {
// if(t->data==v)
// {
// if(t==a[i])
// {
// a[i]==t->next;
// free(t);
// }
// else
// {
// t1->next=t->next;
// free(t);
// }
// break;
// }
// t1=t;
// t=t->next;
// }  
// }
// for(i=v;i<n;i++)
// {
// a[i]=a[i+1];
// t=a[i];
// while(t!=NULL)
// {
// t->data--;
// t=t->next;
// }
// }
// n--;
// display();
// }
// void bfs(struct node*a[10],int start)
// {
// int i;
// int visited[10];
// q[++rear]=start;
// visited[start]=1;
// front++;
// while(front<=rear)
// {
// printf("%d ",q[front]);
// struct node *t;
// t=a[q[front++]];
// while(t!=NULL)
// {
// if(visited[t->data]!=1)
// {
// q[++rear]=t->data;
// visited[t->data]=1;
// }
// t=t->next;
// }
// }
// }
// void dfs(struct node *ad[],int start)
// {
// int visited[10];
// int i;
// for(i=0;i<n;i++)
// {
// visited[i]=0;
// }
// visited[start] = 1;
// printf("%d\t",start);
// struct node *ptr;
// ptr = a[start];
// while(ptr!=NULL)
// {
// if(visited[ptr->data]==0)
// dfs(ad,ptr->data);
// ptr = ptr->next;
// }
// }
// void outdegree(int x){
//   struct node *ptr=a[x];
//   int l=0;
//   while (ptr->next!=NULL)
//   {
//    /* code */
//    ptr=ptr->next;
//    l++;
//   }
//   printf("out:%d\n",l);
// }
// void indegree(int o){
//    struct node*ptr;
//    int i=1,l=0;
//    while(i<=n &&i!=o){
//       ptr=a[i];
//       while (ptr->next!=NULL)
//       {
//          /* code */
//          ptr=ptr->next;
//          l++;
//       }
//       i++;
//    }
//    printf("in:%d\n",l);
// }

void create(){
   printf("enter number of vertices");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
      a[i]=(struct node *)malloc(sizeof(struct node));
      a[i]->data=i;
      a[i]->next=NULL;
   }
}

void insertver(){
   if(n==0){
      printf("graph not created");
   }
   else{
      n++;
      a[n]=(struct node *)malloc(sizeof(struct node));
      a[n]->data=n;
      a[n]->next=NULL;
   }
}

int edgeexist(int u,int v){
   struct node *ptr;
   int flag=1;
   ptr=a[u];
   while(ptr!=NULL){
      if(ptr->data==v){
         flag=0;
         break;
      }
      ptr=ptr->next;
   }
   // ptr=a[v];
   // while(ptr!=NULL){
   //    if(ptr->data==u){
   //       flag=0;
   //       break;
   //    }
   // }
   
   return flag;
}
 
void ninsertedge(int u,int v){
   struct node *ptr;
   if(edgeexist(u,v)==0){
      printf("\nthe element exists\n");
   }
   else{
      ptr=a[u];
      struct node *p=(struct node *)malloc(sizeof(struct node));
      p->data=v;
      p->next=ptr->next;
      ptr->next=p;

      if(u==v)
            return;

      ptr=a[v];
      p=(struct node *)malloc(sizeof(struct node));
      p->data=u;   
      p->next=ptr->next;
      ptr->next=p; 
    }
   

}
void ndeledge(int u,int v){
  struct node *t,*t1;
  t=a[u];z
  while(t!=NULL){z
      if(t->data==v){z
         if(t==a[u]){
            a[u]=t->next;
            free(t);
            break;
         }
         else{
            t1->next=t->next;
            free(t);
            break;
         }
      }
                     
         t1=t;
         t=t->next;
      
  }
  if(u==v)
     return;
     t=a[v];
  while(t!=NULL){
      if(t->data==u){
         if(t==a[u]){
            a[u]=t->next;
            free(t);
            break;
         }
         else{
            t1->next=t->next;
            free(t);
            break;
         }
      }
                     
         t1=t;
         t=t->next;
      
  }    
}

void delver(){
   int v;
   struct node *ptr;
   printf("enter vertex");
   scanf("%d",&v);
   for(int i=1;i<=n;i++){
      ptr=a[i];
      while(ptr!=NULL)
      {if(ptr->data==v){
         ndeledge(i,v);
         break;
      }
      ptr=ptr->next;
      }
   }

//    for(int i=n;i<v;i++){
//       a[i]=a[i+1];
//       ptr=a[i];
//       while(ptr!=NULL){
//          ptr->data--;
//          ptr=ptr->next;
//       }
   //}
   for(int i=v;i<n;i++)
   {
   a[i]=a[i+1];
   ptr=a[i];
   while(ptr!=NULL)
   {
   ptr->data--;
   ptr=ptr->next;
   }
  }
      n--;
}

void bfs(int start){
   struct node *ptr;
   visited[start]=1;
   queue[++rear]=start;
   front++;
   while(front<=rear){
      int curr=queue[front++];
      printf("%d ",curr);
      ptr=a[curr];
      while(ptr!=NULL){
         if(visited[ptr->data]==0){
            visited[ptr->data]=1;
            queue[++rear]=ptr->data;
         }
         ptr=ptr->next;
      }
   }
}
void dfs(int start){
//    struct node *ptr;
//    visited[start]=1;
//    stack[++top]=start;
//    while(top!=-1){
//       int curr=stack[top--];
//       printf("%d ",curr);
//       ptr=a[curr];
//       while(ptr!=NULL){
//          if(visited[ptr->data]!=1){
//             visited[ptr->data]=1;
//             stack[++top]=ptr->data;
//          }
//          ptr=ptr->next;
//       }
//    }
// }
visited[start]=1;
stack[++top]=start;
struct node *ptr;
while(top!=-1)
{
int curr=stack[top--];
printf("%d ",curr);
ptr=a[curr];
while(ptr!=NULL)
{
if(visited[ptr->data]!=1)
{
visited[ptr->data]=1;
stack[++top]=ptr->data;
}
ptr=ptr->next;
}

}
}
void display(){
   struct node *ptr;
  for(int i=1;i<=n;i++){
      ptr=a[i];
      printf("%d",ptr->data);
      ptr=ptr->next;
      while(ptr!=NULL){
         printf("->%d",ptr->data);
         ptr=ptr->next;
      }
      printf("\n");
  }
}

void main()
{
   int jj,term,l=0,i=1;
      struct node*ptr;
   int p,q,choice,y,o,e;
int start;
printf("1:directed\n2:not directed\n3:exit\n");
  scanf("%d",&y);
  switch(y){
   // case 1:{
   //  do {
 
   //      printf("\nMenu:\n");
   //      printf("1. Create Graph\n");
   //      printf("2. Insert Vertex\n");
   //      printf("3. Insert Edge\n");
   //      printf("4. Delete Vertex\n");
   //      printf("5. Delete Edge\n");
   //      printf("6. Display Graph\n");
   //        printf("7. indegree or outdegree\n");
   //      printf("8. Exit\n");

   //      printf("Enter your choice: ");
   //      scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 create();
//                 break;
//             case 2:
//                 insertver();
//                 break;
//             case 3:
//                 dinsertedge();
//                 break;
//             case 4:
//                 delver();
//                 break;
//             case 5:
//                 ddeledge();
//                 break;
//             case 6:
//                 display();
//                 break;
//             case 7:{
//                 int jj,term;
//                 printf("1:indegree or 2:out degree");
//                 scanf("%d",&jj);
//                 printf("enter term");
//                 scanf("%d",&term);
//                 if (jj==1)
//                 {
//                     /* code */
//                     indegree(term);
//                 }
//                 else if (jj==2)
//                 {
//                     /* code */
//                     outdegree(term);
//                 }
                
//             }
//             case 8:
//                 printf("Exiting the program.\n");
//                 break;
//             default:
//                 printf("Invalid choice. Please enter a valid option.\n");
//         }
//     } while (choice != 8);
//     break;
//   }
    case 2:{
    do {
 
        printf("\nMenu:\n");
        printf("1. Create Graph\n");
        printf("2. Insert Vertex\n");
        printf("3. Insert Edge\n");
        printf("4. Delete Vertex\n");
        printf("5. Delete Edge\n");
        printf("6. Display Graph\n");
      
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                insertver();
                break;
            case 3:
              printf("enter edges");
              scanf("%d %d",&o,&e);
                ninsertedge(o,e);
                break;
            case 4:
                delver();
                break;
            case 5:
            printf("enter edges");
              scanf("%d %d",&o,&e);
                ndeledge(o,e);
                break;
            case 6:
                display();
                break;
            
            case 7:
            for(int i=0;i<n;i++){
   visited[i]=0;
}
bfs(1);
for(int i=0;i<n;i++){
   visited[i]=0;
}
dfs(1);
                printf("Exiting the program.\n");
                break;
            case 8:
    i=1;
   while(i<=n ){
      ptr=a[i]->next;
      while (ptr!=NULL)
      {
         /* code */
         
         if(ptr->data==2)
            l++;
         ptr=ptr->next;
      }
      i++;
   }
   printf("in:%d\n",l);
break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 9);
    break;
  }
  case 3:break;
}


}