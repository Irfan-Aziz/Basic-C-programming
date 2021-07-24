#include<stdio.h>
int main(){
int i,j,k,l,m,n;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
scanf("%d",&a[i]);}
m=a[0];
for(i=0;i<n;i++){
if(m>a[i]){
m=a[i];
l=i;}}
printf("Menor valor: %d\nposicao: %d\n",m,l);
}
