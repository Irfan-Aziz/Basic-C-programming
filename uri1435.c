#include<stdio.h>
int main(){
long long int a[100][100],i,j,k,l=0,m=1;

for(;;){
scanf("%d",&k);
if(k==0)
break;
for(i=0;i<k;i++){
for(j=0;j<k;j++){
        again:
if(i==l||i==k-1||j==l||j==k-1){
    a[i][j]=1;
}}}

for(i=0;i<k;i++){
for(j=0;j<k;j++){
if(j==k-1)
printf("%d\n",a[i][j]);
else
printf("%d ",a[i][j]);}
}}}
