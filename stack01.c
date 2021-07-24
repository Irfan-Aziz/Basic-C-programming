#include<stdio.h>
int m=8;
int a[8];
int top=-1;
int isempty(){
if(top==-1)
return 1;
else
return 0;}
int isfull(){
if(top==m)
return 1;
else
return 0;
}
int pop(){
    int x;
if(!isempty()){
x=a[top];
top=top-1;
return x;}
else
printf("Stack is empty\n");}
int push(int x){
if(!isfull()){
top=top+1;
a[top]=x;}
else
printf("Stack is full\n");}
int ispeek(){
return a[top];}
int main(){
int n,i;
push(2);
push(3);
push(7);
push(10);
push(9);
push(5);
printf("top: %d\n",a[top]);
while(!isempty()){
    i=pop();
    printf("%d\n",i);

}

}
