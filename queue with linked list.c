#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node* front=NULL;
struct node* rear=NULL;
void enqueue(int x){
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=NULL;
if(rear==NULL&&front==NULL){
rear=temp;
front=temp;}
else{
rear->next=temp;
rear=temp;}}
void dequeue(){
struct node*temp=front;
if(front==NULL)
return;
if(front==rear){
front=NULL;
rear=NULL;
}
else{
front=front->next;
}
free(temp);
}
void print(){
struct node*temp;
temp=front;
while(temp!=NULL){
printf("%d\n",temp->data);
temp=temp->next;
}}
int main(){
enqueue(11);
enqueue(12);
enqueue(3);
dequeue();
enqueue(4);
print();}
