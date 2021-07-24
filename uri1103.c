#include<stdio.h>
int main(){
int i,j,k,l,m;
for(;;){
scanf("%d %d %d %d",&i,&j,&k,&l);
if(i==0&&j==0&&k==0&&l==0)
break;
if(i<=k&&j<=l){
m=(k-i)*60+(l-j);
printf("%d\n",m);}
else if(i<k&&j>l){
m=(k-i)*60+(l-j);
printf("%d\n",m);}
else if(i>=k&&j>l){
m=(24+k-i)*60+(l-j);
printf("%d\n",m);}
else if(i>k&&j<l){
m=(k-i)*60+(l-j);
printf("%d\n",m);}}}
