#include<stdio.h>
int n=10;
int stack[10];
int front=-1,rear=-1;
int isempty(){
if(front==-1&&rear==-1)
return 1;
else
return 0;}
int isfull(){
if((rear+1)%n==front)
return 1;
else
return 0;
}
void enqueue(int x){
if(isfull())
return;
if(isempty()){
front=0;
rear=0;
stack[rear]=x;}
else{
rear=(rear+1)%n;
stack[rear]=x;}
}
int dequeue(){
if(isempty())
return;
if(front==rear){
//return stack[front];
front=-1;
rear=-1;}

else{
//return stack[front];
front=(front+1)%n;
}
}
int main(){
int i;
enqueue(11);
printf("%d\n",rear);
enqueue(12);
printf("%d\n",rear);
enqueue(7);
printf("%d\n",rear);
dequeue();
printf("%d\n",rear);
enqueue(13);
printf("%d\n",rear);
printf("%d\n",front);
for(i=front;i<=rear;i++){
printf("%d\n",stack[i]);}}
