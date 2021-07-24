#include<stdio.h>
void GetSortedArray(int a[]){
int i,j,temp;
for(i=0;i<5;i++){
for(j=i+1;j<5;j++){
if(a[i]>a[j]){
temp=a[i];
a[i]=a[j];
a[j]=a[i];}}}
for(i=0;i<5;i++){
printf("%d",a[i]);}}
int GetLargestValue(int a[]){
int i,getlarge;
for(i=0;i<5;i++){
getlarge=a[0];
if(a[i]>getlarge){
getlarge=a[i];}}
return(getlarge);}
void main(){
int i,a[5];
printf("Enter 5 integers\n");
for(i=0;i<5;i++){
scanf("%d",&a[i]);}
printf("After sorting:\n");
GetSortedArray(a);
printf("The largest value is:\n");
GetLargestValue(a);}
