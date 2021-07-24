#include<stdio.h>
#include<stdlib.h>
struct node{
struct node* link;
int data;
};
struct node* top=NULL;
void print(){
struct node* temp;
temp=top;
while(temp!=NULL){
printf("%d ",temp->data);
temp=temp->link;}
printf("\n");}
int push(int x){
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->link=top;
top=temp;
}
int pop(){
struct node* temp;
if(top==NULL)
return;
temp=top;
top=top->link;
free(temp);}
int main(){
push(1);
push(2);
push(3);
print();
pop();
print();
push(8);
print();}
