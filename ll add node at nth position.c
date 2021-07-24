#include<stdio.h>
#include<stdlib.h>
struct node{
struct node* link;
int data;};
struct node*head;
void print(){
struct node* temp;
temp=head;
while(temp!=NULL){
printf("%d\n",temp->data);
temp=temp->link;}}
int insert(int a){
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=a;
temp->link=NULL;
if(head==NULL){
head=temp;}
else{
struct node* t;
t=head;
while(t->link!=NULL){
t=t->link;}
t->link=temp;}}
int pos(int k,int m){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=m;
    temp->link=NULL;
    int j;
    if(k==1){
       temp->link=head;
       head=temp;
       return;
    }
    else{
        struct node* temp1=head;
        for(j=0;j<k-2;j++){
            temp1=temp1->link;
        }
        temp->link=temp1->link;
        temp1->link=temp;
    }
}
int main(){
head=NULL;
int x,i,n;
printf("Enter the no of elements\n");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&x);
insert(x);
print();
}
pos(2,5);
print();
}
