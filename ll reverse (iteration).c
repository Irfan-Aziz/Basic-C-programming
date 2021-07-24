#include<stdio.h>
#include<stdlib.h>
struct node{
struct node* link;
int data;
};
struct node* head;
void print(){
struct node* temp;
temp=head;
while(temp!=NULL){
printf("%d\n",temp->data);
temp=temp->link;
}}
int insert(int v){
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=v;
temp->link=NULL;
if(head==NULL){
    head=temp;
}
else{
struct node* temp1;
temp1=head;
while(temp1->link!=NULL){
    temp1=temp1->link;
}
temp1->link=temp;
}}
void rev(){
struct node *current,*prev,*link;
current=head;
prev=NULL;
while(current!=NULL){
    link=current->link;
    current->link=prev;
    prev=current;
    current=link;

}
head=prev;
}
int main(){
int i,n,x;
head=NULL;
printf("Insert the no. of elements\n");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&x);
insert(x);}
print();
rev();
print();}
