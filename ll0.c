#include<stdio.h>
#include<stdlib.h>
struct node{
struct node* link;
int data;};
struct node*head;
void insert(int val){
struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->data=val;
temp->link=head;
head=temp;
}
void print(){
struct node* temp;
temp=head;
while(temp!=NULL){
printf("%d\n",temp->data);
temp=temp->link;}
}
int main(){
int i,n,x;
head=NULL;
printf("Enter the no. of elements\n");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&x);
insert(x);
print();}
}
