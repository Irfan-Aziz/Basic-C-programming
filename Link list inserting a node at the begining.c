#include<stdlib.h>
#include<stdio.h>
struct Node{
int data;
struct Node*next;
};
struct Node*head;
void insert(int x){

struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=x;
temp->next=head;
head=temp;
}
void print(){
struct Node*temp=head;
printf("List is:");
while(temp=!NULL){
scanf("%d",temp->data);
temp=temp->next;
}
printf("\n");

}
int main(){
head=NULL;
int n,i,x;
printf("How many numbers?\n");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter numbers\n");
scanf("%d",&x);
insert(x);
print();}}
