#include<stdio.h>
#include<stdio.h>
struct node{
int data;
struct node*next;};
struct node*head;
void insert(int x){
struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=head;
head=temp;
}
print(){
struct node*temp=head;
printf("List is:");
while(head!=NULL){
scanf("%d",temp->data);
temp=temp->next;}
printf("\n");}
int main(){
head=NULL;
int x,n,i;
printf("How many numbers?\n");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter numbers");
scanf("%d",&x);}
insert(x);
print();}
