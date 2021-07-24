#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* link;};
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
temp->link=NULL;
if(head==NULL){
head=temp;}
else{
struct node*t;
t=head;
while(t->link!=NULL){
t=t->link;}
t->link=temp;}}
void deletenode(int pos){
    int i;
if(pos==1){
    struct node* temp1;
    temp1=head;
    head=head->link;
    free(temp1);
}
else{
    struct node* temp2;
    temp2=head;
    for(i=1;i<=pos-2;i++){
        temp2=temp2->link;
    }
    struct node* temp3;
    temp3=temp2->link;
    temp2->link=temp3->link;
    free(temp3);
}}
int main(){
head=NULL;
insert(1);
insert(2);
insert(4);
insert(6);
print();
deletenode(3);
insert(9);
deletenode(1);
print();}
