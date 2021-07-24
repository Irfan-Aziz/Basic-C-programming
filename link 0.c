#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;};
struct node*head;
insert(int x){
struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=head;
head=temp;}
print(){
struct node*temp=head;
printf("List is:");
while(temp!=NULL){
scanf("%d",&temp->data);
temp->next=temp;
printf("\n");}}
int main(){
    head=NULL;
int i,n,x;
printf("How many numbers?\n");
scanf("%d",&n);
for(i=0;i<n;i++){
        printf("Enter the numbers\n");
scanf("%d",&x);}
insert(x);
print();
return 0;
}
