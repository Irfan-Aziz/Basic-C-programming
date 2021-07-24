#include<stdio.h>
int main(){
int i,j,k=0,a[100],b[100];
for(i=0;i<10;i++){
scanf("%d",&a[i]);}
for(i=0;i<10;i++){
for(j=i+1;j<10;j++){

if(a[i]==a[j]){
    printf("%d\n",a[i]);
}}}
}
