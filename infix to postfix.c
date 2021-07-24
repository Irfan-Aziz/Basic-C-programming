#include<stdio.h>
#include<string.h>
char stack[100];
char res[100];
int stack1[100];
int top=-1,top1=-1,k=0;
void push(char ch1){
top++;
stack[top]=ch1;
return;}
void push1(int n){
top1++;
stack1[top1]=n;
return;}
char pop(){
res[k]=stack[top];
top--;
k++;
return;}
void pop1(){
top1--;
return;}
void perform(char c,int m){
if(top==-1||stack1[top1]<m){
push(c);
push1(m);
return;
}
while(stack1[top]>=m){
pop();
pop1();}
push(c);
push1(m);
}
char intopost(char ch){
int b;
if(ch>=65&&ch<=90){
res[k]=ch;
k++;
return;}
else{
if(ch=='+'||ch=='-')
b=1;
if(ch=='*')
b=2;
if(ch=='/')
b=3;
perform(ch,b);}}
int main(){
int i;
char a[100];
gets(a);
for(i=0;i<strlen(a);i++){
intopost(a[i]);
printf("%d\n",top);
}
//printf("%d\n",top);
while(top!=-1){
    pop();
    pop1();
}
for(i=0;i<strlen(res);i++){
printf("%c",res[i]);}}
