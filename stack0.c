 #include<stdio.h>
int top;
int pop(int stack[],int stack_top){
int item;
if(stack_top<0){
printf("stack is empty\n");
return -1;
}
else
{item=stack[stack_top];
stack_top--;

top=stack_top;
return item;}
}
int push(int stack[],int stack_top,int maxstack,int item){
if(stack_top==maxstack){
printf("\nstack is full\n");
return -1;}
else{stack_top++;
stack[stack_top]=item;
top=stack_top;
return 0;}}
main(){
int stack[100],top =10;
int item=3, maxstack=100;
return 0;}
