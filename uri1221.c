#include<stdio.h>
int main(){
int a,c,n,i,j,k;
long long int b;
float x,y,z;
scanf("%d",&a);
for(j=0;j<a;j++){
scanf("%lld",&b);
c=0;
for(i=1;i<=b/2;i++){
if(b%i==0)
c++;}
if(c==1){
printf("prime\n");}
else
printf("not prime\n");
}}
