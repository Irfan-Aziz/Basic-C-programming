#include<stdio.h>
int main(){
int m,n,i,sum=1,sum1=1;

scanf("%d %d",&m,&n);
for(i=1;i<=m;i++){
sum=sum*i;}
for(i=1;i<=n;i++){
sum1=sum1*i;}
printf("%d",sum+sum1);
}
