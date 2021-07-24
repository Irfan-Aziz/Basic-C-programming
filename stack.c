#include<stdio.h>
#define max 10
int top=-1;
int a[max];
int push(int x){
if(top==max-1){
printf("Stack is full\n");}
else{
top++;
a[top]=x;}}
int pop(){
if(top==-1){
printf("Stack is empty\n");}
else{
top--;
}}
void print(){
int i;
for(i=0;i<=top;i++){
printf("%d ",a[i]);}
printf("\n");}
int main(){
push(7);
print();
push(3);
print();
push(11);
print();
pop();
print();
push(7);
pop();
print();
pop();
print();
pop();

print();
pop();

print();
}
