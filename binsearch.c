#include<stdio.h>
void main (){
    int flag,k,n,a[30],mid,key;
    printf("Enter the number of elements you want in array:");
    scanf("%d",&n);
    printf("enter the sorted array");
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    printf("enter element to search");
    scanf("%d",&key);
    
    int l=0;
    int r=n;
    while(l<r){
        mid=(l+r)/2;
        if(a[mid]==key){
            printf("element found at %d position",mid+1);
            flag=1;
            break;
        }
        else if (a[mid]>key)
        {
            /* code */
            r=mid-1;
            flag=1;
        }
        else{
            l=mid+1;
            flag=1;
        }
      flag=0;
    }
 if (flag==0)
 {
    /* code */
    printf("element not ");
 }
 
}