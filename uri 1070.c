#include<stdio.h>
int main(){
int x,i,y;
scanf("%d",&x);
for(i=0;i<=12;i=i+2){
if(x%2==1){
y=x+i;}
else
x++;
y=x+i;
printf("%d\n",y );}}
