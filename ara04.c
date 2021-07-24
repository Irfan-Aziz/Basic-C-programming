#include<stdio.h>
main(){
int a[10]={11,12,13,14,15,16,17,18,19,20};
int a2[10];
int i,j;
for(i=0,j=9;i<10;i++,j--){
a2[j]=a[i];
}
for(i=0;i<10;i++){
a[i]=a2[i];}
for(i=0;i<10;i++){
printf("%d\n",a[i]);}}
