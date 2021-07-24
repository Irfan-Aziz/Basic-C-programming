#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* link;};
struct Node* head;
void value(){
struct Node* temp;
temp=head;
scanf("%d",&temp->data);
while(temp->data!=0){
//temp=(struct Node*)malloc(sizeof(struct Node));
temp=temp->link;

scanf("%d",&temp->data);}}
void print(){
struct Node* temp;
temp=head;
while(temp!=NULL){
        printf("%d\n",temp->data);
    temp=temp->link;
}
}
int main(){

head=NULL;
head=(struct Node*)malloc(sizeof(struct Node));
value();
print();
}
