#include<stdio.h>
#include<string.h>

int stack[100];
int top=-1;
int push(int b){
top++;
stack[top]=b;
return;}
int pop(){
int c;
c=stack[top];
top--;
return c;}
void postfix(char ch){
int op,op1,op2;
if(ch>=48&&ch<=57){
push(ch-'0');}
if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
op1=pop();
op2=pop();
if(ch=='+')
op=op2+op1;
if(ch=='-')
op=op2-op1;
if(ch=='*')
op=op2*op1;
if(ch=='/')
op=op2/op1;
push(op);
}}
int main(){
char a[100];
int i,j,k;
gets(a);
for(i=0;i<strlen(a);i++){
postfix(a[i]);
printf("%d\n",stack[top]);}
//printf("%d\n",stack[top]);
}
