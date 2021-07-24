#include<stdio.h>
int main(){
int i,j,k,l,m,n;
double a[12][12],sum=0,b=10,c;
char ch;
scanf("%c",&ch);
for(i=0;i<12;i++){
for(j=0;j<12;j++){
scanf("%lf",&a[i][j]);}}
for(i=0;i<10;i++){
    for(j=0;j<=b;j++){

if(i<j)
sum=sum+a[i][j];
b--;}}
if(ch=='S')
printf("%0.1lf\n",sum);
else if(ch=='M')
printf("%0.1lf\n",sum/66);}
