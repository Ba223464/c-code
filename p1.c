#include<stdio.h>
struct poly{
    int exp;
    int coeff;
}p1[10],p2[10],add[10],mul[10],temp;
int n1=0,n2=0,k1=0,k2=0;
void create(struct poly a[],int *n){
     printf("Enter the number of terms in Polynomial 1 : ");
    scanf("%d",n);
    for(int i=0;i<*n;i++){
        printf("enter coeff and x exp and y exp");
        scanf("%d %d",&a[i].coeff,&a[i].exp);
        for(int j=0;j<i;j++){
            if(a[i].exp==a[j].exp){
                a[j].exp+=a[i].exp;
                i--;
                break;
            }
            else if(a[i].exp>a[j].exp){
                int k=*n;
                temp=a[i];
                while(k!=j){
                    a[k]=a[k-1];
                    k--;
                }
                a[k]=temp;
            }
        }
    }
}
void createa(int c,int e){
    add[k2].coeff=c;
    add[k2].exp=e;
    for(int j=0;j<k2;j++){
        if(add[k2].exp==add[j].exp){
            add[j].coeff+=add[k2].coeff;
            k2--;
            break;
        }
        else if(add[k2].exp>add[j].exp){
            int k=k2;
            struct poly temp=add[k2];
            while(k!=j){
                add[k]=add[k-1];
                k--;
            }
            add[k]=temp;
            break;
        }
        
    }
    k2++;
}
void addn(struct poly a[10],struct poly b[10]){
    int i=0,j=0,k=0;
    while(i<n1){
        j=0;
        while(j<n2){
            createa(p1[i].coeff*p2[j].coeff,p1[i].exp+p2[j].exp);
            j++;
        }
        i++;
    }
}

void disp(struct poly w[10],int k){
    for(int i=0;i<k;i++){
        printf("%dx^%d+",w[i].coeff,w[i].exp);
    }
}

void main(){
    create(p1,&n1);
    disp(p1,n1);
    printf("\n");
    create(p2,&n2);
    disp(p2,n2);
    printf("\n");
    
    addn(p1,p2);
    for(int i=0;i<k2;i++){
        printf("%dx^%d+",add[i].coeff,add[i].exp);
    }
    printf("\n");
}