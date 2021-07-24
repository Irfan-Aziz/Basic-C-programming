#include<stdio.h>
int main(){
int a,b,c,d,i,j,n,max;
printf("Enter the no. of test case: \n");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter the no. of cards\n");
scanf("%d %d",&a,&b);
if(a>b){
c=b;
d=a;}

else{
c=a;
d=b;}
max=0;
for(j=1;j<=c;j++){
if(c%j==0){
if(d%j==0)
max=j;}}
printf("%d\n",max);}}
