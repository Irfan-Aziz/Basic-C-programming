#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;};
struct node*head;
print(){
struct node*temp=head;
printf("List is\n");
while(temp!=NULL){
scanf("%d",&temp->data);
temp=temp->next;}
printf("\n");
}
insert(int data,int n){
struct node*temp1=(struct node*)malloc(sizeof(struct node));
temp1->data=data;
temp1->next=NULL;
if(n==1){
temp1->next=head;
head=temp1;}
int i;
struct node*temp2=(struct node*)malloc(sizeof(struct node));
for(i=0;i<n-2;i++){
temp2=temp2->next;}
temp1->next=temp2->next;
temp2->next=temp1;}
int main(){
head=NULL;
insert(2,1);
insert(3,2);
insert(4,2);
print();}
