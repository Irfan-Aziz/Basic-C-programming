#include<stdio.h>
int m=8;
int a[8];
int top=-1;
int isempty(){
if(top==-1)
return 1;
else
return 0;}
int isfull(){
if(top==m)
return 1;
else
return 0;
}
int pop(){
    int x;
if(!isempty()){
x=a[top];
top=top-1;
return x;}
else
printf("Stack is empty\n");}
int push(int x){
if(!isfull()){
top=top+1;
a[top]=x;}
else
printf("Stack is full\n");}
int ispeek(){
return a[top];}
int main(){
int n,i;
char c;
for(;;){
    getchar();
printf("Enter a character\n");
scanf("%c",&c);
if(c=='p'){
push(scanf("%d",&n));}
else if(c=='q'){
pop();}
else
break;


}
for(i=0;i<=top;i++){
printf("%d\n",a[i]);}
}
