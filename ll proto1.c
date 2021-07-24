#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* link;
};
struct node* head;
void print(){
struct node* temp;
temp=head;
while(temp!=NULL){
printf("%d\n",temp->data);
temp=temp->link;}}
void insert(int value){
struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->data=value;
temp->link=NULL;

if(temp==NULL){
head=temp;
}
else{
struct node*t;
t=head;
while(t->link!=NULL){
t=t->link;}
t->link=temp;}}
int main(){
head=NULL;
//head=(struct node*)malloc(sizeof(struct node));
//head->data=3;
//head->link=(struct node*)malloc(sizeof(struct node));
//head->link->data=4;
//head->link->link=NULL;
insert(1);
print();}
