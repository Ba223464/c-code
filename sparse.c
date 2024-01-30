// void main(){
//          int m[20][20],sm[20][3],smt[20][3],total[20],index[20],i,j,z,n,p,k;
//           printf("enter number of rows\n");
// 	  scanf("%d",&z);
//           printf("enter number of columns\n");
// 	  scanf("%d",&n);
// 	  sm[0][0]=z;sm[0][1]=n;
// 	  printf("enter elements of array\n");
// 	  k=1;
// 	  for(i=0;i<z;i++){
// 	   for(j=0;j<n;j++){
// 	    scanf("%d",&m[i][j]);
// 	    if(m[i][j]!=0){
// 	      sm[k][0]=i;
// 	      sm[k][1]=j;
// 	      sm[k][2]=m[i][j];
// 	      k++;
// 	    }
// 	   }
// 	  }
// 	  sm[0][2]=k-1;
// 	  for(i=0;i<sm[0][1];i++){
// 	    total[i]=0;
// 	  }
// 	  for(i=0;i<n;i++){
// 	    total[sm[i][1]]++;
// 	  }
// 	  index[0]=1;
// 	  for(i=0;i<sm[0][1];i++){
// 	   index[i+1]=index[i]+total[i];
// 	  }
// 	  smt[0][0]=sm[0][1];
// 	  smt[0][1]=sm[0][0];
// 	  smt[0][2]=sm[0][2];
// 	  for(i=1;i<=sm[0][2];i++){
// 	    p=sm[i][1];
// 	    smt[index[p]][0]=sm[i][1];
// 	    smt[index[p]][1]=sm[i][0];
// 	    smt[index[p]][2]=sm[i][2];
// 	    index[p]++;
// 	  }
// 	   printf("The sparse matrix is\n");	  
// 	  for(i=0;i<k;i++){
// 	   for(j=0;j<3;j++){
// 	     printf("%d ",sm[i][j]);
// 	   }
// 	   printf("\n");
// 	  }
// 	   printf("The transpose of sparse matrix is\n");
// 	  for(i=0;i<k;i++){
// 	   for(j=0;j<3;j++){
// 	     printf("%d ",smt[i][j]);
// 	   }
// 	   printf("\n");
// 	  }
// }


#include<stdio.h>

struct sparse
{
    /* data */
    int row,col;
    int arr[10][10];
    int tupp[50][3];
};

void readarray(struct sparse *sp,int a){
    printf("enter row and column of %d matrix\n",a);
    scanf("%d %d",&sp->row,&sp->col);
    for (int i = 0; i < sp->row; i++)
    {
        /* code */
        for (int j = 0; j < sp->col; j++)
        {
            /* code */
            scanf("%d",&sp->arr[i][j]);
        }
        
    }
    
}
void disparray(struct sparse *sp,int a){
    printf("\n%d matrix",a);
    for (int i = 0; i < sp->row; i++)
    {
        /* code */
        for (int j = 0; j < sp->col; j++)
        {
            /* code */
            printf("%d",sp->arr[i][j]);
        }
        printf("\n");
    }
    
}
void tupple(struct sparse *sp,int a){
    int k=1;
    sp->tupp[0][0]=sp->row;
    sp->tupp[0][1]=sp->col;
    for (int i = 0; i < sp->row; i++)
    {
        /* code */
        for (int j = 0; j < sp->col; j++)
        {
            if (sp->arr[i][j]!=0)
            {
                /* code */
                sp->tupp[k][0]=i;
                sp->tupp[k][1]=j;
                sp->tupp[k][2]=sp->arr[i][j];
            k++;
            }
            
        }
    }
    sp->tupp[0][2]=k-1;
}
void disptupp(struct sparse *sp,int a){
    printf("\n%d matrix\n",a);
    for (int i = 0; i <=sp->tupp[0][2]; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            printf("%d",sp->tupp[i][j]);
        }
        printf("\n");
    }
    
}
void trans(struct sparse *sp,struct sparse *tsp,int a){
    printf("%d MATRIX\n",a);
    int k=1;
    tsp->tupp[0][0]=sp->tupp[0][1];
    tsp->tupp[0][1]=sp->tupp[0][0];
    tsp->tupp[0][2]=sp->tupp[0][2];
     for (int i = 0; i < sp->tupp[0][1]; i++)
     {
        /* code */
        for (int j = 1; j <=sp->tupp[0][2]; j++)
        {
            /* code */
            if(i==sp->tupp[j][1]){
                tsp->tupp[k][0]=sp->tupp[j][1];
                tsp->tupp[k][1]=sp->tupp[j][0];
                tsp->tupp[k][2]=sp->tupp[j][2];
                k++;
            }
        }
        
     }
     
}
void addi(struct sparse *s1,struct sparse *s2,struct sparse *s3){
    if(s1->tupp[0][0]!=s2->tupp[0][0]||s1->tupp[0][1]!=s2->tupp[0][1])
        printf("not possible");
    else{
        int j=1,i=1,k=1;
        while (i<=s1->tupp[0][2]||j<=s2->tupp[0][2])
        {
            /* code */
        }
        
    }
}
void main(){
    struct sparse sp1,sp2,tsp1,tsp2,add;
    readarray(&sp1,1);
    disparray(&sp1,1);
    tupple(&sp1,1);
    trans(&sp1,&tsp1,1);
    addi(&sp1,&sp2,&add);
    disptupp(&sp1,1);
    disptupp(&tsp1,1);
    // readarray(&sp2,2);
    // tupple(&sp2,2);
    // disptupp(&sp2,2);
}