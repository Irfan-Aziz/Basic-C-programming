#include<stdio.h>
int main(){
int a[100],i,j,k,min,temp;
for(i=0;i<10;i++){
scanf("%d",&a[i]);}
for(i=0;i<10;i++){
min=i;
for(j=i+1;j<10;j++){
if(a[j]<a[min]){
min=j;
}}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
for(i=0;i<10;i++){
if(i==9){
printf("%d",a[i]);}
else
printf("%d ",a[i]);}}
