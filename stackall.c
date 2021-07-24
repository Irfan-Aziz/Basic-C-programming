#include<stdio.h>
int max=10;
int top=-1;
int stack[8];
int isempty(){
if(top==-1)
return 1;
else
return 0;
}
int isfull(){
if(top==max)
return 1;
else
return 0;
}
int ispeek(){
return stack[top];
}
int pop(){
int data;
if(!isempty()){
data=stack[top];
top--;
return data;
}
else
printf("Couldn't find data\n");
}
int push(){
int data;
scanf("%d",&data);
if(!isfull()){
top++;
stack[top]=data;}
else
printf("Couldn't insert data\n");
}
int main(){
    int n,i;
for(i=0;0<1;i++) {
    printf("Press 1 for push 2 for pop\n");
  scanf("%d",&n);
if(n==1)
push();
else if(n==2)
    pop();
    else
        break;
}
//push(8);
//push(14);
//pop();
//push(3);
//push(17);
printf("Element at the top of stack: %d\n",ispeek());
printf("Elements\n");
while(!isempty()){
int data=pop();
printf("%d\n",data);
}
printf("Is full: %s\n",isfull()?"true":"false");
printf("Is empty: %s\n",isempty()?"true":"false");}
