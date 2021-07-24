#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node*head;
print(){
struct node*temp=head;
while(head!=NULL){
printf("%d\n",temp->data);
temp=temp->next;}
}
insert(int data,int n){
struct node*temp1=(struct node*)malloc(sizeof(struct node));
temp1->data=data;
temp1->next=head;
while(n==1){
temp1->next=head;
head=temp1;
}
//struct node*temp2=(struct node*)malloc(sizeof(struct node));//
struct node*temp2=head;
temp1->next=temp2->next;
temp2->next=temp1;}
int main(){
head=NULL;
insert(2,1);
insert(3,2);
insert(4,2);
print();
}
