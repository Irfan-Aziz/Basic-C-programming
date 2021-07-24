#include<stdio.h>
int main(){
int i,j,k,l,m,n;
double a[12][12],sum=0,b,c;
char ch;
scanf("%d %c",&n,&ch);
for(i=0;i<12;i++){
for(j=0;j<12;j++){
scanf("%lf",&a[i][j]);}}
for(i=0;i<12;i++){
    for(j=0;j<12;j++){

if(j==n){
sum=sum+a[i][j];}}}
if(ch=='S')
printf("%0.1lf\n",sum);
else if(ch=='M')
printf("%0.1lf\n",sum/12);}
