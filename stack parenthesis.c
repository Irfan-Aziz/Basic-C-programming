#include<stdio.h>
#include<string.h>
int top=-1;
char stack[30];
void push(char ch){
top++;
stack[top]=ch;}
void pop(){
top--;}
char parenthesis(char b){
if(b=='('||b=='{'||b=='[')
push(b);
if(b==')'){
if(stack[top]!='('||top==-1){
return;}
else
pop();}
if(b=='}'){
if(stack[top]!='{'||top==-1){
return ;}
else
pop();
}
if(b==']'){
if(stack[top]!='['||top==-1){
return;}
else
pop();}
}
int main(){
int i,j,k;
char a[30];
gets(a);
k=strlen(a);
for(i=0;i<k;i++){
parenthesis(a[i]);}
if(top==-1){
printf("balanced\n");}
else
printf("unbalanced\n");
}
