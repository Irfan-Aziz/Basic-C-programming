#include<stdio.h>
int main(){
int x,y,a,n,i,j;

for(;;){

a=0;
scanf("%d",&y);
if(y==0)
break;
if(y%2==1)
y++;
for(j=0;j<5;j++){
a=a+y;
y=y+2;}
printf("%d\n",a);}}
