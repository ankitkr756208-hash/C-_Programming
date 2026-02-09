#include<stdio.h>
#include<stdlib.h>
#define stacksize 10
struct stack{
    int item[stacksize];
    int top;
};

struct stack s;
 void push(int x){

    if( s.top==stacksize-1){
        printf("Stack Overflow\n");
        exit(1);
        return;
    }
    s.top=s.top+1;
    s.item[s.top]=x;

}
int pop(){
    int x;
    if(s.top==-1){
        printf("Stack Underflow\n");
        exit(1);
    }
    x=s.item[s.top];
    s.top=s.top-1;
    return x;
}
int stackTop(){
    int x;
    x=s.item[s.top];
    return x;
}



int main(){
    s.top=-1;
    int y;
    push(100);
    push(200);
    push(300);
    push(400);
    push(500);
    push(600);
    push(700);
    push(800);
    push(900); 
    
    y=pop();
    printf("%d\n",y);//300
    y=pop();
    printf("%d\n",y);//200
  

   
    y=stackTop();
    printf(" Top item is :%d\n",y);//Stack Underflow


}