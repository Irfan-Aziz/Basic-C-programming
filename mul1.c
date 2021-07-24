#include<stdio.h>
int main(){
int a[4][5],i,j;
for(i=0;i<4;i++){
for(j=0;j<=4;j++){
a[i][j]=i*j;}}
for(i=0;i<4;i++){
for(j=0;j<=4;j++){
printf("%d",a[i][j]);}
printf("\n");}}
