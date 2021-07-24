#include<stdio.h>
int main(){
int a[100][100],i,j,k,m,n;
for(;;){
scanf("%d",&n);
if(n==0)
break;
if(n%2==1)
m=n/2;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(i==0&&j==0||i==n-1&&j==n-1){
a[i][j]=2;}
else if(i==0&&j==n-1||i==n-1&&j==0)
a[i][j]=3;
else if(n%2==1){
if(i==m&&j==m)
a[i][j]=4;}
else if(i==0&&j!=0||i==0&&j!=n-1||i==n-1&&j!=0||i==n-1&&j!=n-1)
    a[i][j]=0;
else
 a[i][j]=1;
}}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(j==n-1)
printf("%d\n",a[i][j]);
else
printf("%d ",a[i][j]);}}
printf("\n");}}
