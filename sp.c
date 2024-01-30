#include<stdio.h>
struct sparse{
    int arr[10][10];
    int tupp[10][3];
    int row,col;
};

void readarray(struct sparse *a){
    printf("enter row and column of %d matrix\n",a);
    scanf("%d %d",&a->row,&a->col);
    for(int i=0;i<a->row;i++){
       for(int j=0;j<a->col;j++){
            scanf("%d",&a->arr[i][j]);
        } 
    }
}
void disparray(struct sparse *a){
    for(int i=0;i<a->row;i++){
       for(int j=0;j<a->col;j++){
            printf("%d",a->arr[i][j]);
        } 
    }
}

void tupple(struct sparse *s){
    int k=1;
    s->tupp[0][0]=s->row;
    s->tupp[0][1]=s->col;
    
    for(int i=0;i<s->row;i++){
       for(int j=0;j<s->col;j++){
            if(s->arr[i][j]!=0){
                s->tupp[k][0]=i;
                s->tupp[k][1]=j;
                s->tupp[k][2]=s->arr[i][j];
                k++;
            }
        } 
       
    }
    s->tupp[0][2]=k-1;
}

void disptupp(struct sparse *a){
    for(int i=0;i<=a->tupp[0][2];i++){
       for(int j=0;j<3;j++){
            printf("%d",a->tupp[i][j]);
        }
         printf("\n"); 
    }
}

void trans(struct sparse *s,struct sparse *ts){
    int k=1;
    ts->tupp[0][0]=s->tupp[0][1];
    ts->tupp[0][1]=s->tupp[0][0];
    ts->tupp[0][2]=s->tupp[0][2];
    for(int i=0;i<s->col;i++){
       for(int j=1;j<=s->tupp[0][2];j++){
            if(i==s->tupp[j][1]){
                ts->tupp[k][0]=s->tupp[j][1];
                ts->tupp[k][1]=s->tupp[j][0];
                ts->tupp[k][2]=s->tupp[j][2];
                k++;
            }
        } 
    }
}



void main(){
    struct sparse sp,tsp;
    readarray(&sp);
    disparray(&sp);
    printf("\n");
    tupple(&sp);   
    disptupp(&sp);
    printf("\n");
    trans(&sp,&tsp);
    disptupp(&tsp);
}