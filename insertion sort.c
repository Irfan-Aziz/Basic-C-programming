#include<stdio.h>
int main(){
int i,j,k,l,a[10];
printf("Enter the number of elements\n");
scanf("%d",&i);
for(j=0;j<i;j++){
scanf("%d",&a[j]);}
for(j=1;j<=i-1;j++){
k=j;
while(k>0&&a[k]<a[k-1]){
l=a[k];
a[k]=a[k-1];
a[k-1]=l;
k--;}}
printf("Sorted list :\n");
for(j=0;j<=i-1;j++){
printf("%d",a[j]);}
return 0;}
