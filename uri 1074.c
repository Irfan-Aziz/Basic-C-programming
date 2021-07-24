#include<stdio.h>
int main(){
int n,a,i,j;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a);

if(a==0){
printf("NULL\n");}
else if(a<=0&&a%2==0){
printf("EVEN NEGATIVE\n");}
else if(a>=0&&a%2==0){
printf("EVEN POSITIVE\n");}
else if(a>0&&a%2==1){
printf("ODD POSITIVE\n");}
else if(a<0&&a%2==-1){
printf("ODD NEGATIVE\n");}}}
