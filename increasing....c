#include<stdio.h>
#include<math.h>
int main(){
int a[10],i,j,k,l,n,res1,res2,max=0,min=100;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter them\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);}
for(i=0;i<n;i++){
j=a[i+1]-a[i];
if(j>max){
max=j;
res1=a[i+1];
k=i+1;}}
printf("Increasing order is a[%d]=%d",k,res1);
for(i=0;i<n;i++){
    j=a[i+1]-a[i];
    if(j<min){
        min=j;
        res2=a[i+1];
        l=i+1;
    }
}
printf("Decreasing order is a[%d]=%d",l,res2);}
