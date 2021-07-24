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
int insert(int x){
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->link=NULL;
if(head==NULL){
head=temp;}
else{
struct node* temp1;
temp1=head;
while(temp1->link!=NULL){
temp1=temp1->link;}
temp1->link=temp;}
}
void del(int m){
struct node* temp;
temp=head;
int i;
if(m==1){
    head=temp->link;
    free(temp);
}
else{
    for(i=0;i<m-2;i++){
        temp=temp->link;
    }
    struct node* temp2;
    temp2=temp->link;
    temp->link=temp2->link;
    free(temp2);
}}
int main(){
int p,i,n;
head=NULL;
printf("Enter the no. of elements\n");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&p);
insert(p);}
print();
del(2);
print();
}
