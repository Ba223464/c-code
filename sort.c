// // // #include<stdio.h>
 
// // // void main(){

// // //     printf("Enter the no. of elements\n");
// // // scanf("%d",&n);
// // //     for (int i = 1; i < 6; i++)
// // //     {
// // //         /* code */
// // //         int key=arr[i];
// // //         int j=i-1;
// // //         while (j>=0&&arr[j]>key)
// // //         {
// // //             /* code */
// // //             arr[j+1]=arr[j];
// // //             j--;
// // //         }
// // //         arr[j+1]=key;
// // //     }
    
// // // }
// // // // int partition(int arr[20],int lb,int ub){
// // // //     int start,end;
// // // //     start=lb;
// // // //     end=ub;
// // // //     int temp;
// // // //     int pivot=arr[lb];
// // // //     while(start<end){
// // // //         while(arr[start]<=pivot){
// // // //             start++;
// // // //         }
// // // //         while (arr[end]>pivot)
// // // //         {
// // // //             /* code */
// // // //             end--;
// // // //         }
// // // //         if(start<end){
// // // //             temp=arr[start];
// // // //             arr[start]=arr[end];
// // // //             arr[end]=temp;
// // // //         }
        
// // // //     }
// // // //             temp=arr[lb];
// // // //             arr[lb]=arr[end];
// // // //             arr[end]=temp;
// // // //             return end;
// // // // }
// // // // void quicksort(int a[20],int l,int u){
// // // //    if(l<u){
// // // //     int loc=partition(a,l,u);
// // // //     quicksort(a,l,loc-1);
// // // //     quicksort(a,loc+1,u);

// // // //    }
// // // // }
// // // // void main(){
// // // //   quicksort(arr,0,5);
// // // //   printf("elements are");
// // // //   for (int l = 0; l < 6; l++)
// // // //   {
// // // //     /* code */
// // // //     printf("%d",arr[l]);
// // // //   }
  
// // // // }
// // // // #include<stdio.h>
// // // // void main()
// // // // {
// // // // int n,arr[100],min,temp,count=0,flag=0;
// // // // printf("Enter the no. of elements\n");
// // // // scanf("%d",&n);
// // // // printf("Enter array elements\n");
// // // // for(int i=0;i<n;i++)
// // // // scanf("%d",&arr[i]);
// // // // for(int i=0;i<n-1;i++)
// // // // {
// // // // min=i;
// // // // for(int j=i+1;j<n;j++)
// // // // {
// // // // flag++;
// // // // if(arr[j]<arr[min])
// // // // {
// // // // min=j;
// // // // }
// // // // }
// // // // if(min!=i)
// // // // {
// // // // temp=arr[min];
// // // // arr[min]=arr[i];
// // // // arr[i]=temp;
// // // // }
// // // // }
// // // // printf("The sorted elements are\n");
// // // // for(int i=0;i<n;i++)
// // // // printf("%d\n",arr[i]);
// // // // printf("\nNo. of swaps = %d\nNo. of iterations = %d\n", count,flag);
// // // // }
// // #include <stdio.h>
// // void main()
// // {
// // int n, i, j, temp;
// // int arr[50];
// // printf("Enter number of elements\n");
// // scanf("%d", &n);
// // printf("Enter %d integers\n", n);
// // for (i = 0; i < n; i++)
// // scanf("%d", &arr[i]);

// // for (i = 1 ; i <= n - 1; i++)
// // {
// //     temp=arr[i];
// //     j=i-1;
// // while ( j>= 0 && temp < arr[j] )
// // {
// // arr[j+1] = arr[j];

// // j--;
// // }
// // arr[j+1]=temp;
// // }
// // printf("Sorted list in ascending order:\n");
// // for (i = 0; i < n ; i++)
// // printf("%d\n", arr[i]);
// // // }
// // #include<stdio.h>
// // void main()
// // {
// // int n,arr[100],min,temp;
// // printf("Enter the no. of elements\n");
// // scanf("%d",&n);
// // printf("Enter array elements\n");
// // for(int i=0;i<n;i++)
// // scanf("%d",&arr[i]);
// // for(int i=0;i<n-1;i++)
// // {
// // min=i;
// // for(int j=i+1;j<n;j++)
// // {
// // if(arr[j]<arr[min])
// // {
// // min=j;
// // }
// // }
// // if(min!=i)
// // {
// // temp=arr[min];
// // arr[min]=arr[i];
// // arr[i]=temp;
// // }
// // }
// // printf("The sorted elements are\n");
// // for(int i=0;i<n;i++)
// // printf("%d\n",arr[i]);
// // }


// //SELECTION  SORT

// // #include<stdio.h> 
// // void main() { 
// // int i,n,a[100],temp; 
// // printf("Enter the no. of integers\n"); 
// // scanf("%d",&n); 
// // printf("Enter the array elements\n"); 
// // for(i=0;i<n;i++) 
// //      scanf("%d",&a[i]); 
// // for (int i = 0; i < n-1; i++)
// // {
// //     /* code */
// //     int min =i;
// //     for (int j = i+1; j < n; j++)
// //     {
// //         /* code */
// //         if(a[min]>a[j]){
// //             min=j;
        
// //         }
// //     }
// //     if (min!=i)
// //     {
// //             /* code */
// //             int temp;
// //             temp=a[min];
// //             a[min]=a[i];
// //             a[i]=temp;
// //     }
    
// // }
// // for(i=0;i<n;i++)
// // printf("%d ",a[i]);

// // }    


// //MERGE SORT
// #include<stdio.h>
// int  sort[50];
// void merge(int a1[],int lb,int ub,int mid){
//     int i=lb,j=mid+1,k=lb;
//     while (i<=mid&&j<=ub)
//     {
//         /* code */
        
//          if (a1[i]<=a1[j])
//         {
//             /* code */
//             sort[k]=a1[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             /* code */
//             sort[k]=a1[j];
//             j++;
//             k++;
//         }

//     }
//     if(i>mid)
//     {    while (j<=ub)
//         {
//             sort[k]=a1[j];
//             j++;
//             k++;
//         }
//     }
//     else if(j>ub)
//     {   
//         while (i<=mid)
//         {
//             /* code */
//             sort[k]=a1[i];
//             i++;
//             k++;
//         }
//     }
    
//         for(int i=lb;i<=ub;i++){
//             a1[i]=sort[i];
//         }
// }
// void mergesort(int a[],int lb,int ub){
//     if(lb<ub){
//         int mid=(lb+(ub))/2;
//         mergesort(a,lb,mid);
//         mergesort(a,mid+1,ub);
//         merge(a,lb,ub,mid);
//     }
// }
// void main(){
//      int i,n,new[100],temp; 
//     printf("Enter the no. of integers\n"); 
//     scanf("%d",&n); 
//     printf("Enter the array elements\n"); 
//     for(i=0;i<n;i++) 
//         scanf("%d",&new[i]); 
//     mergesort(new,0,n-1);
//     printf("\nThe sorted array is : \n");
//     for(i=0;i<n;i++)
//        printf("%d ",new[i]);
// }

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char postfix[20];
int stack[20];
 int top=-1;
 int stack1[20],top1=-1;
void push(char j){
    if (top<19)
    {
        /* code */
    stack[++top] = j;
    }

}
char pop(){
    if(top!=-1){
        char k=stack[top--];
        return k;
    }
} 
void push1(int j){
    if (top1<19)
    {
        /* code */
    stack[++top1] = j;
    }

}
int pop1(){
    if(top1!=-1){
        int k=stack[top1--];
        return k;
    }
   
}


int evaluate(){
            int i=0;
    while (postfix[i]!='\0')
    {
        if(postfix[i]>='0'&&postfix[i]<='9'){
            push1(postfix[i]-'0');
        }
        else{
            int x=pop1();
            int y=pop1();
            switch(postfix[i]){
                case '+':push1(x+y);
                        break;
                case '/':push1(x/y);
                        break;
                case '-':push1(x-y);
                        break;
                case '*':push1(x*y);
                        break;
                default:break;
                
            }
        }
        i++;
    }
    
return pop1();
}
int icp(char v){
    switch(v){
            case '+':return 0;
            case '-':return 0;
            case '*':return 2;
            case '/':return 2;
            case '^':return 4;
            case '(':return 10;       
            default:return -1; 
    }
}
int isp(char v){
    switch(v){
            case '+':return 1;
            case '-':return 1;
            case '*':return 3;
            case '/':return 3;
            case '^':return 5;   
            default:return -1;     
    }
}
void main(){
    char infix[20],next;
    printf("enter the string");
    gets(infix);
    
   int j=0;
    for(int i=0;i<strlen(infix);i++){
        char x=infix[i];
        switch(x){
            case '(':push(x);
                    break;
            case ')':while((next=pop())!='('){
                        postfix[j++]=next;
                    }
                    break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                    while(top!=-1&&isp(stack[top])>=icp(x)){
                        postfix[j++]=pop();
                    }
                    push(x);
                    break;
            default:postfix[j++]=x;
                    break;
        }
    } 
    while(top!=-1){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
        int i=0;
    while (postfix[i]!='\0')
    {
        /* code */
        printf("%c",postfix[i]);
        i++;
    }
   
     printf("the evaluated exp is %d",evaluate());
}