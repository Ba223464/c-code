#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100
char infix[MAX],postfix[MAX],stack[MAX],inf[MAX];
int op[MAX],top1=-1;
int top = -1;
void push(char j){
    if (top<MAX-1)
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


void pushe(int j){
    if (top1<MAX-1)
    {
        /* code */
    op[++top1] = j;
    }

}
int pope(){
    if(top1!=-1){
        int k=op[top1--];
        return k;
    }
   
}
int evaluate(){
    int i=0;
    while (postfix[i]!='\0')
    {
        /* code */
        if (postfix[i]>='0'&&postfix[i]<='9')
        {
            /* code */
            pushe(postfix[i]-'0');
        }
        else{
            int x=pope();
            int y=pope();
            switch(postfix[i]){
             case '+':
                /* code */
                pushe(x+y);
                break;
            case '-':
                /* code */
                pushe(x-y);
                break;
            case '/':
                /* code */
                pushe(x/y);
                break;
            case '*':
                /* code */
                pushe(x*y);
                break;
            case '^':
                 pushe(x^y); 
                 break;
            default:
                 break;
            }
        }
        i++;
    }
    return pope();
}
int icp(char k){
    switch (k)
    {
    case '+':
        /* code */
        return 1;
        
     case '-':
        /* code */
        return 1;
     case '/':
        /* code */
        return 3;
        
     case '*':
        /* code */
        return 3; 
    case '^':
            return 6;  
    default:
        return 0;
    }
}
int isp(char k){
        switch (k)
    {
    case '+':
        /* code */
        return 2;
        
     case '-':
        /* code */
        return 2;
     case '/':
        /* code */
        return 4;
        
     case '*':
        /* code */
        return 4; 
    case '^':
            return 5;  
    default:
        return 0;
    }
}
void main(){
    int j=0;
  printf("enter infix array");
  gets(infix);
  int n=strlen(infix);
  int l=0 ;  
  strrev(infix);
  for (int i = 0; i < n; i++)
  {
    /* code */
    char x=infix[i];
    char next;
    switch (x)
    {
    case ')':
        /* code */
        push(x);
        break;
    case '(':while ((next=pop())!=')'){
        postfix[j++]=next;
    }
        break;
    case '+':
    case '-':
    case '*':
    case '/':
    case '^':
       while(top!=-1 && isp(stack[top])>=icp(x))
       {
        /* code */
        postfix[j++]=pop();
       }
        push(x);
       
        break;      
    default:
        postfix[j++]=x;
        break;
    }

    
    
  }
    while (top!=-1)
    {
        /* code */
    postfix[j++]=pop();
    }
    postfix[j]='\0';
    strrev(postfix);
    int i=0;
    while (postfix[i]!='\0')
    {
        /* code */
        printf("%c",postfix[i]);
        i++;
    }
    printf("\n");
    // printf("the evaluated exp is %d",evaluate());
}