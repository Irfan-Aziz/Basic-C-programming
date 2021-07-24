#include<stdio.h>
#include<string.h>
int stack[100];
int top=-1;
void push(int i){
top++;
stack[top]=i;
}
int pop(char ch){
int a,b,c;
b=stack[top];
a=stack[top-1];
if(ch=='+')
c=a+b;
else if(ch=='-')
c=a-b;
else if(ch=='*')
c=a*b;
else
c=a/b;
top=top-2;
return c;}
int postfix(char ch){
    int d;
if(ch>=48&&ch<=57){
push(ch-'0');}
if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
d=pop(ch);
push(d);}
printf("%d\n",stack[top]);
}
int main(){
char a[100];
int i,j,k;
gets(a);
k=strlen(a);
for(i=0;i<k;i++){
postfix(a[i]);}
printf("%d\n",stack[top]);}
