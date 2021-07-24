#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
int capacity=maxelements;
int size=0;
int front=0;
int rear=-1;
int elements=sizeof(maxelements);
}queue;
void enqueue(queue)
if(size==capacity){
printf("queue is full\n");
}
else
{size++;
rear=rear+1;
if(rear==capacity);
rear=0;
elements[rear]=elements;}
return;
void dequeue(queue){
if(size==0)
{printf("queue is empty\n");
return;}
else{
size--;
front++;
if(front==capacity){
front=0;}}
return;}
int front(queue){
if(size=0){
printf("queue is empty\n");
exit(0);}
return elements[front];
}
int main(){
queue=createqueue(5);
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
printf("front element is %d\n",front(queue));
enqueue(5);
dequeue(queue);
enqueue(6);
printf("Front element is %d\n",front(queue));
}
