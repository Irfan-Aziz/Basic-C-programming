#include<stdio.h>
#include<stdlib.h>
struct node{
struct node* next;
struct node* prev;
int data;
};
struct node* head;
struct node* getnewnode(int m){
struct node* myNode=(struct node*)malloc(sizeof(struct node));
myNode->data=m;
myNode->next=NULL;
myNode->prev=NULL;
return myNode;
}
void insathead(int m){
struct node* temp=getnewnode(m);
if(head==NULL){
head=temp;
//return temp;
}
else{
head->prev=temp;
temp->next=head;
head=temp;}}
void print(){
struct node*temp;
temp=head;
while(temp!=NULL){
printf("%d\n",temp->data);
temp=temp->next;}}
void reverseprint(){
struct node*temp;
temp=head;
while(temp->next!=NULL){
temp=temp->next;}
while(temp!=NULL){
printf("%d\n",temp->data);
temp=temp->prev;}}
int main(){
head=NULL;
int i,n,x;
printf("Enter the no. of nodes\n");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&x);
insathead(x);}
//print();
reverseprint();
}
