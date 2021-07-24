#include<stdio.h>
/*int stack[100];
int top=-1;
int MAX=100;
int isfull(){
if(top==MAX)
return 1;
else
return 0;
}
int isempty(){
if(top==-1)
return 1;
else
return 0;
}
int push(int data){
if(!isfull()){
top++;
stack[top]=data;}}
int pop(){
int data;
if(!isempty()){
data=stack[top];
top--;}}*/
int main(){
int i,j,k,l,a[100],x,y,m,n,s,g,p;
scanf("%d",&k);
for(i=0;i<k;i++){
scanf("%d",&a[i]);}
for(i=0;i<k;i++){
m=0,n=0,l=0;
for(j=i;j>=0;j--){
if(a[j]>a[i]){
x=j+1;
m++;
break;}
if(m==0)
x=-1;}
printf("x[%d]=%d\n",i,x);
//g=0;
for(j=i;j<k;j++){
        /*if(n!=0){
                y=l+1;
        break;}*/
if(a[j]>a[i]){
        y=j+1;
        n++;
        break;
       // for(p=j;p<k;p++){
//if(a[p]>a[l]){
    //l=p;}
    }



if(n==0)
//else
    y=-1;}
printf("y[%d]=%d\n",i,y);
s=x+y;
printf("%d\n",s);}}
/*push(s);}
while(!isempty()){
int d;
d=pop();
printf("%d\n",d);}
}}*/
