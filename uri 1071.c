#include<stdio.h>
int main(){
int x,y,z,i,sum=0;
scanf("%d %d",&x,&y);
if(x>y){
//z=x-y;
for(i=y+1;i<x;i++){
if(i%2==1||i%2==-1){
sum=sum+i;
}}}
else
//z=y-x;
for(i=x+1;i<y;i++){
if(i%2==1){
sum=sum+i;
}}
printf("%d\n",sum);
}
