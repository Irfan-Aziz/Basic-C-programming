#include<stdio.h>
int top=-1,max=8;
int stack[100];
int isempty(){
if(top==-1)
return 1;
else
return 0;
}
int push(int data){
if(top==max){
printf("Cant assign\n");
}
else{
top++;
stack[top]=data;
printf("%d\n",top);
printf("%d\n",stack[top]);
return stack[top];
}}
int main(){
int i,j,k,a[100],b[100],m,n;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);}
//j=0;
//while(!isempty()){
//for(i=n-1;i>=0;i--){
for(i=0,j=0;i<n,j<n;i++,j++){
b[j]=push(a[i]);
//j++;
//}
//}
//for(j=0;j<n;j++){
printf("%d\n",b[j]);
}}
//}
