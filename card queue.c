#include<stdio.h>
#include<string.h>
main(){
int top=-1,n=10,d,data;
void push(int mystack[],int data){
if(top==(n-1)){
printf("stack is full");}
else{ mystack[++top]=data;}
void pop(int mystack[]){
if(top<0){
printf("Stack is empty\n");}
else{
d=mystack[top--];}}}
return 0;}
