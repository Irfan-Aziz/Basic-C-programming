#include<stdio.h>
#include<string.h>
int main(){
char a[20],b[20];
int i,j,k=0,l,m,n;
gets(a);
l=strlen(a);
m=l-1;
for(j=l-1;j>=0;j--){
if(a[j]==' '){
again:
n=j;
while(n<m){
b[k]=a[n+1];
k++;
n++;}
m=j;}
if(j==0) goto again;}
printf(b);
}
