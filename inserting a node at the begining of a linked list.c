#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* link;};
struct Node* head;
print(){
struct Node* temp;
temp=head;
while(temp!=NULL){
printf("%d\n",temp->data);
temp=temp->link;}}
void insert(int val){
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=val;
temp->link=NULL;
if(head==NULL){
head=temp;}
else{
struct Node* t;//=(struct Node*)malloc(sizeof(struct Node));
t=head;
while(t->link!=NULL){
t=t->link;}
t->link=temp;}}
int main(){
head=NULL;
insert(7);
insert(2);
insert(89);
insert(455);
insert(6);
print();}
