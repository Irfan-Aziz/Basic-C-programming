#include<stdio.h>
int main(){
int a[2][3],b[100][100],i,j,k,m,n;
for(i=0;i<2;i++){
for(j=0;j<3;j++){
scanf("%d",&a[i][j]);}}
for(i=0;i<2;i++){
for(j=0;j<3;j++){
scanf("%d",&b[i][j]);}}
for(i=0;i<2;i++){
for(j=0;j<3;j++){
if(a[i][j]!=b[i][j]){
for(m=0;m<2;m++){
for(n=0;n<3;n++){
if(a[i][j]==b[m][n]){
k=b[i][j];
b[i][j]=b[m][n];
b[m][n]=k;
break;}}}}}}
for(i=0;i<2;i++){
for(j=0;j<3;j++){
printf("%d ",b[i][j]);}
printf("\n");}}
