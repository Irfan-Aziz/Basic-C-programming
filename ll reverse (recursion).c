#include<stdio.h>
#include<stdlib.h>
struct node{
struct node* link;
int data;
};
struct node*head;
void print(struct node* temp){
if(temp==NULL)
return;
print(temp->link);
printf("%d\n",temp->data);

}
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
int main(){
head=NULL;
int i,n,x;
printf("Enter the no. of nodes\n");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&x);
insert(x);}
print(head);}
