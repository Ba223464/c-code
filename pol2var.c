#include<stdio.h>
#include<stdlib.h>
struct polynomial
{
    /* data */
    int xexp;
    int yexp;
    int coeff;
}p1[20],p2[20],p3[20],pmul[20];
int n1, n2,k1=0,k2=0;
void createpolynomial(struct polynomial a[],int *n){
    printf("Enter the number of terms in Polynomial 1 : ");
    scanf("%d",n);
    for (int i = 0; i < *n; i++)
    {
        /* code */
        printf("enter coeff and x exp and y exp");
        scanf("%d %d %d",&a[i].coeff,&a[i].xexp,&a[i].yexp);
        for (int j = 0; j < i; j++)
        {
            /* code */
            if(a[i].xexp==a[j].xexp &&a[i].yexp==a[j].yexp){
                a[j].coeff+=a[i].coeff;
                i--;
                break;
            }
            else if(a[i].xexp==a[j].xexp){
                if (a[i].yexp>a[j].yexp)
                {
                    /* code */
                    struct polynomial temp=a[i];
                    int y1=*n;
                    while (y1!=j)
                    {
                        /* code */
                        a[y1]=a[y1-1];
                        y1--;
                    }
                    a[y1]=temp;
                    break;
                }
                // else{
                //     struct polynomial temp=a[i];
                //     int y1=*n;
                //     while (y1!=j-1)
                //     {
                //         /* code */
                //         a[y1]=a[y1-1];
                //         y1--;
                //     }
                //     a[y1]=temp;
                // }
            }
            else if(a[i].xexp>a[j].xexp){
                int y2=*n;
                struct polynomial temp1=a[i];
                while (y2!=j)
                {
                    /* code */
                    a[y2]=a[y2-1];
                    y2--;
                }
                a[y2]=temp1;
                break;
            }
        }
        
        
        
    }
    
}
    void create(int c1,int xe1,int ye1){
        p3[k1].coeff=c1;
        p3[k1].xexp=xe1;
        p3[k1].yexp=ye1;
        k1++;
    }
void add(struct polynomial a[],struct polynomial b[]){
        int i=0,j=0,k=0;
        int c,xe,ye;
        while (i<n1&&j<n2)
        {
            /* code */
            if (a[i].xexp==b[j].xexp)
            {
                /* code */
              if (a[i].yexp==b[j].yexp)  {
                xe=a[i].xexp;
                ye=a[i].yexp;
                c=a[i].coeff + b[j].coeff;
                create(c,xe,ye);
                i++;j++;
                }
                else if (a[i].yexp > b[j].yexp) {
                    xe=a[i].xexp;
                    ye=a[i].yexp;
                    c=a[i].coeff;
                    create(c,xe,ye);
                    i++;
                }
                 else if (a[i].yexp < b[j].yexp) {
                    xe=b[j].xexp;
                    ye=b[j].yexp;
                    c=b[j].coeff;
                    create(c,xe,ye);
                    j++;
                }
            }
            else if (a[i].xexp>b[j].xexp)
            {
                /* code */
                xe=a[i].xexp;
                ye=a[i].yexp;
                c=a[i].coeff;
                create(c,xe,ye);
                i++;
            }
             else if (a[i].xexp<b[j].xexp)
            {
                /* code */
                xe=b[j].xexp;
                ye=b[j].yexp;
                c=b[j].coeff;
                create(c,xe,ye);
                j++;
            }
        
        }
        while (i<n1){
                xe=a[i].xexp;
                ye=a[i].yexp;
                c=a[i].coeff;
                create(c,xe,ye);
                i++;
        }
        while (j<n2)
        {
            /* code */
                xe=b[j].xexp;
                ye=b[j].yexp;
                c=b[j].coeff;
                create(c,xe,ye);
                j++;
        }
        
    }
    void createm(int l,int m,int k){
        pmul[k2].coeff=l;
        pmul[k2].xexp=m;
        pmul[k2].yexp=k;
        for (int j = 0; j < k2; j++)
        {
            /* code */
             if(pmul[k2].xexp==pmul[j].xexp &&pmul[k2].yexp==pmul[j].yexp){
                pmul[j].coeff+=pmul[k2].coeff;
                k2--;
                break;
            }
            else if(pmul[k2].xexp==pmul[j].xexp){
                if (pmul[k2].yexp>pmul[j].yexp)
                {
                    /* code */
                    struct polynomial temp=pmul[k2];
                    int y1=k2;
                    while (y1!=j)
                    {
                        /* code */
                        pmul[y1]=pmul[y1-1];
                        y1--;
                    }
                    pmul[y1]=temp;
                    break;
                }

            }
            else if(pmul[k2].xexp>pmul[j].xexp){
                int y2=k2;
                struct polynomial temp1=pmul[k2];
                while (y2!=j)
                {
                    /* code */
                    pmul[y2]=pmul[y2-1];
                    y2--;
                }
                pmul[y2]=temp1;
                break;
            }
        }
        k2++;
    }
    void mul(){
        for (int i = 0; i < n1; i++)
        {
            /* code */
            for (int j = 0; j < n2; j++)
            {
                /* code */
                createm(p1[i].coeff*p2[j].coeff,p1[i].xexp+p2[j].xexp,p1[i].yexp+p2[j].yexp);
            }
            
        }
        
    }
void disp(struct polynomial a[],int k){
    printf("%dx^%dy^%d",a[0].coeff,a[0].xexp,a[0].yexp);
    for (int i = 1; i < k; i++)
    {
        /* code */
        if (a[i].coeff<0)
        {
            /* code */
            printf("%dx^%dy^%d",a[i].coeff,a[i].xexp,a[i].yexp);
        }
        else
            printf("+%dx^%dy^%d",a[i].coeff,a[i].xexp,a[i].yexp);
    }
    
}
void main(){
    createpolynomial(p1,&n1);
    disp(p1,n1);
    printf("\n");
    createpolynomial(p2,&n2);
    disp(p2,n2);
    printf("\n");
    add(p1,p2);
    disp(p3,k1);
    printf("\n");
    mul();
    disp(pmul,k2);
}