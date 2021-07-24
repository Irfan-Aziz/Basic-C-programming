#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* link;
};
struct node* head;
print(){
struct node* temp;
temp=head;
while(temp!=NULL){
printf("%d\n",temp->data);
temp=temp->link;}}
void insert(int val){
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=val;
temp->link=head;
head=temp;}
int main(){
head=NULL;
insert(1);
insert(2);
insert(4);
print();}
