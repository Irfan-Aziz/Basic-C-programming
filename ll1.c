#include<stdio.h>
#include<stdlib.h>
struct node{
struct node* link;
int data;};
struct node* head;
void print(){
struct node*temp;
temp=head;
while(temp!=NULL){
printf("%d\n",temp->data);
temp=temp->link;
}}
int insert(int x){
struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->link=NULL;
if(head==NULL){
head=temp;
}
else{
struct node* t;
t=head;
while(t->link!=NULL){
t=t->link;}
t->link=temp;}}
int main(){
head=NULL;
int i,n,l;
printf("Enter the no. of elements\n");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&l);
insert(l);
print();}}
