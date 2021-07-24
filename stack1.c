#include<stdio.h>
char line[100];
 char stack[100];
 int data,i;
 int main(){
     int top=0;
 gets(line);
 while(gets(line)){
 for(i=0;line[i]!='\0' ;i++){
 if(line[i]=='('){
 stack[top++]='(';
 top++;}
 else if(line[i]==')'){
 stack[top--]=')';
 top--;}
 else if(line[i]=='['){
 stack[top++]=='[';
 top++;}
 else if(line[i]==']'){
 stack[top--]=']';
 top--;
 }
 else if(line[i]=='{'){
    stack[top++]='{';
    top++;}
 else if(line[i]=='}'){
    stack[top--]='}';
    top--;
 }}}
 if(top==0){
    printf("balanced\n");}
    else{
        printf("imbalanced\n");
    }


return 0;}
