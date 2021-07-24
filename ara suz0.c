#include<stdio.h>
int main(){
int i,a[5],sum;
float ave;
sum=a[0];
for(i=0;i<5;i++){
    scanf("%d",&a[i]);}
    for(i=0;i<5;i++){
sum=sum+a[i];
ave=sum/5;
printf("Average=%f",ave);
}}
