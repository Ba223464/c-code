#include<stdio.h>
#define MAX 20
int vertices=0,a[MAX][MAX];
void create(){
  int i,j;
  printf("enter no. of vertices(max %d)\n",MAX);
  scanf("%d",&vertices);
  //initialise to 0
  for (int i = 0; i < vertices;i++){
      for (int j = 0; j < vertices; j++){
        a[i][j]=0;
      }      
   }
}
void insertver(){
  if(vertices<0||vertices>MAX){
    printf("cannot be inserted\n");
  }
  else{
    vertices++;
    printf("vertice inserted");
  }
}

void dinsertedge(){
    int start,end;
   if(vertices==0){
    printf("no graph created");
    return;
   }
   printf("enter start vertice");
   scanf("%d",&start);
   printf("enter end vertice");
   scanf("%d",&end);
   if((start<0||start>=vertices)||(end<0||end>=vertices))
   {
    printf("invalid entry try again");
    return;
   }
   a[start][end]=1;
}

void ninsertedge(){
    int start,end;
   if(vertices==0){
    printf("no graph created");
    return;
   }
   printf("enter 1st vertice");
   scanf("%d",&start);
   printf("enter 2nd vertice");
   scanf("%d",&end);
   if((start<0||start>=vertices)||(end<0||end>=vertices))
   {
    printf("invalid entry try again");
    return;
   }
   a[start-1][end-1]=1;
   a[end-1][start-1]=1;
}

void delver(){
    int v,i,j;
    printf("enter vertice to be deleted");
    scanf("%d",&v);
    if(vertices==0){
     printf("no graph created");
     return;
    }
    if(v<1||v>vertices){
        printf("invalid entry try again");
        return;
    }
    for(int i=v-1;i<vertices;i++){
      for(int j=0;j<vertices;j++){
        a[i][j]=a[i+1][j];
    }
    }
    for(int i=0;i<vertices;i++){
     for(int j=v-1;j<vertices;j++){
        a[i][j]=a[i][j+1];
    }
    }
}

void ddeledge(){
    int start,end;
    if(vertices==0){
     printf("graph not created");
    return;
    }
   printf("enter start vertice");
   scanf("%d",&start);
   printf("enter end vertice");
   scanf("%d",&end);
   if((start<1||start>vertices)||(end<1||end>vertices)){
    printf("invalid entry try again");
    return;
   }
   if(a[start-1][end-1]=0){
    printf("alreday deleted");
   }
    else{
        a[start-1][end-1]=0;
    }
}


void ndeledge(){
    int start,end;
    if(vertices==0){
     printf("graph not created");
    return;
    }
   printf("enter 1st vertice");
   scanf("%d",&start);
   printf("enter 2nd vertice");
   scanf("%d",&end);
   if((start<1||start>vertices)||(end<1||end>vertices)){
    printf("invalid entry try again");
    return;
   }

        a[start-1][end-1]=0;
        a[end-1][start-1]=0;
}

void display(){
    if(vertices==0){
        printf("no grapf created");
        return;
    }
    for(int i=0;i<vertices;i++){
      for(int j=0;j<vertices;j++){
         printf("%d ",a[i][j]);
      }
       printf("\n");
    }  
}
void outdegree(int o){
    int l=0;
    for(int i=0;i<vertices;i++){
        if (a[o][i]==1)
        {
            /* code */
            l++;
        }
        
    }
    printf("indegree:%d",l);
}
void indegree(int o){
    int l=0;
    for(int i=0;i<vertices;i++){
        if (a[i][o]==1)
        {
            /* code */
            l++;
        }
        
    }
    printf("outdegree:%d",l);
}
void main(){
 int choice,y;
   printf("1:directed\n2:not directed\n3:exit\n");
  scanf("%d",&y);
  switch(y){
   case 1:{
    do {
 
        printf("\nMenu:\n");
        printf("1. Create Graph\n");
        printf("2. Insert Vertex\n");
        printf("3. Insert Edge\n");
        printf("4. Delete Vertex\n");
        printf("5. Delete Edge\n");
        printf("6. Display Graph\n");
          printf("7. indegree or outdegree\n");
        printf("8. Exit\n");

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
                dinsertedge();
                break;
            case 4:
                delver();
                break;
            case 5:
                ddeledge();
                break;
            case 6:
                display();
                break;
            case 7:{
                int jj,term;
                printf("1:indegree or 2:out degree");
                scanf("%d",&jj);
                printf("enter term");
                scanf("%d",&term);
                if (jj==1)
                {
                    /* code */
                    indegree(term);
                }
                else if (jj==2)
                {
                    /* code */
                    outdegree(term);
                }
                
            }
            case 8:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 8);
    break;
  }
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
                ninsertedge();
                break;
            case 4:
                delver();
                break;
            case 5:
                ndeledge();
                break;
            case 6:
                display();
                break;
            
            case 7:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 7);
    break;
  }
  case 3:break;
}

}