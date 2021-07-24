#include<stdio.h>
int main(){
int data[100],n,temp,flip,i,j,cnt=0;
printf("enter the elements of array\n");
while(scanf("%d",&n)==1){
flip=0;
for(i=0;i<n;i++){
scanf("%d",&data[i]);}
for(i=0;i<n;i++){
for(i=0;i<n;i++){
if(data[i]>data[j])
cnt++;}
printf("minimum exchange operation %d\n",cnt);
cnt=0;}}
return 0;}
