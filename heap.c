#include<stdio.h>
#include<stdlib.h>
void makeheap(int *a,int n,int i){
   int largest=i;int temp;
   int l=2*i;
   int r=2*i+1;
   if((l<=n)&&(a[l]>a[largest])){
    largest=l;
   }
   if((r<=n)&&(a[r]>a[largest])){
    largest=r;
   }
   if(largest!=i){
    temp=a[i];
    a[i]=a[largest];
    a[largest]=temp;
    makeheap(a,n,largest);
   }

}

void main(){
    int n,temp;
    int a[10];
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
  for(int i=n/2;i>=1;i--){
       makeheap(a,n,i);
  }
  for(int j=n;j>=1;j--){
    temp=a[j];
    a[j]=a[1];
    a[1]=temp;
    makeheap(a,j-1,1);
  }
     for(int i=1;i<=n;i++)
             printf("%d ",a[i]);
}
